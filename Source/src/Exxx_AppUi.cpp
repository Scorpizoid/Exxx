// Exxx_CExampleAppUi.cpp
// ----------------------------
//
// Copyright (c) 2000 Symbian Ltd.  All rights reserved.
//

////////////////////////////////////////////////////////////////////////
//
// Source file for the implementation of the 
// application UI class - CExampleAppUi
//
////////////////////////////////////////////////////////////////////////

#include "Exxx.h"

//             The second phase constructor of the application UI class.
//             The application UI creates and owns the one and only view.
// 
void CExampleAppUi::ConstructL()
    {
	           // BaseConstructL() completes the UI framework's
	           // construction of the App UI.
    BaseConstructL();
	           // Create the single application view in which to
	           // draw the text "Hello World!", passing into it
	           // the rectangle available to it.
	iAppView = CExampleAppView::NewL(ClientRect());
	}


//             The app Ui owns the two views and is. 
//             therefore, responsible for destroying them
//
CExampleAppUi::~CExampleAppUi()
	{
		delete iAppView;
	}


//             Called by the UI framework when a command has been issued.
//             In this example, a command can originate through a 
//             hot-key press or by selection of a menu item or by 
//             pressing a CBA button.
//             The command Ids are defined in the .hrh file
//             and are 'connected' to the hot-key and menu item in the
//             resource file.
//             Note that the EEikCmdExit is defined by the UI
//             framework and is pulled in by including eikon.hrh
//
void CExampleAppUi::HandleCommandL(TInt aCommand)
	{
	          // UI environment
	CEikonEnv* eikonEnv = CEikonEnv::Static();
	_LIT(KLast,"This is the last one");
	_LIT(KFirst,"This is the first one");
	_LIT(KBuf,"");
    TBuf<1> textContents(KBuf); 
    TBuf<30> theLastOne(KLast); 
    TBuf<30> theFirstOne(KFirst); 

	switch (aCommand)
		{
		      // Just issue simple info messages to show that
		      // the corresponding menu items or CBA buttons
		      // have been pressed.
	
	case ECbaButton0:
		iAppView->firstRun = 0;
		DialogL();
		break;
	case EExampleItem0:
		LaunchAboutDialog();
		break;
	
		// If the user presses the next button
	case ECbaButton1:
		iAppView->firstRun = 0;
		// We'll give him the next
		iAppView->iPlace++;
		// If we're not going past the last card
		if (iAppView->iPlace <= 305)
		{
			// Give the TextModifierL function the value of iPlace
			iAppView->TextModifierL(textContents, iAppView->iPlace);
			// And update the screen
			iAppView->DrawNow();
		}
		// If the iPlace variable is over 305
		else
		{
			// Substract one from it and show an error message
			iAppView->iPlace--;
			eikonEnv->InfoMsg(theLastOne);
		}
		break;

	case ECbaButton2:
		// We'll give him the previous
		iAppView->iPlace--;
		// If we're not going past the first card
		if (iAppView->iPlace >= 1)
		{
			// Give the TextModifierL function the value of iPlace
			iAppView->TextModifierL(textContents, iAppView->iPlace);
			// And update the screen
			iAppView->DrawNow();
		}
		// If the iPlace variable is below 1...
		else
		{
			// Add one to it and show an error message
			iAppView->iPlace++;
			if (iAppView->firstRun == 1)
			{
				iAppView->iPlace = 1;
				iAppView->firstRun = 0;
				iAppView->TextModifierL(textContents, iAppView->iPlace);
				iAppView->DrawNow();
			}
			else
			{
				eikonEnv->InfoMsg(theFirstOne);
			}
		}
		iAppView->firstRun = 0;
		break;
               // Exit the application. The call is
		       // implemented by the UI framework.
	case ECbaButton3:
	case EEikCmdExit: 
		Exit();
		break;
		}
	}



void CExampleAppUi::LaunchAboutDialog()
	{
	           // UI environment
	CEikonEnv* eikonEnv=CEikonEnv::Static();

	         // First line of text is null descriptor forcing the
	         // info dialog to use the default text supplied by
	         // the UI.
	         // The app supplies the second line of text (from 
	         // the resource file)
	HBufC* title = eikonEnv->AllocReadResourceLC(R_ABOUT_TITLE);
	HBufC* message = eikonEnv->AllocReadResourceLC(R_ABOUT_MESSAGE);

			 // Launch the dialog - it will use a deafult Icon
	CCknInfoDialog::RunDlgLD(*title,*message);

	         // Pop and destroy secondline
	CleanupStack::PopAndDestroy(2);
	}





// The dialog initialisator
void CExampleAppUi::DialogL()
{
	// We construct a new dialog which takes the iAppView
	// (the application's view control) as its parameter
	CEikDialog* dialog = new (ELeave) CComboboxDlg(iAppView);
	           // Invoke the dialog.
			   // The dialog flag EEikDialogFlagWait is
	           // set (see the resource file) which means that ExecuteLD()
               // does not return until the user dismisses the dialog.
	           // This is essential, because we want to redraw the 
	           // application view to reflect the new co-ordinates and
	           // size entered by the user.

		if (dialog->ExecuteLD(R_COMBOBOX_DEMO_DIALOG));
		{
		iAppView->DrawNow();
		}
}






void CComboboxDlg::PreLayoutDynInitL() 
    { 
    //Get a pointer to the control within the dialog. 
    CCoeControl* myControlPtr = this->Control(EMyComboBoxControlId); 

    //Cast the returned CCoeControl* pointer to the correct type. 
    CEikComboBox* myComboBox = static_cast<CEikComboBox*>(myControlPtr); 

    //Set the control with the array identified by the specified id. 
     //Note "SetArray()" can be used to add a non-resource constructed array. 
    myComboBox->SetArrayL(R_EXAMPLE_CONTROL_ITEMS); 

    //Set the initial text in the Combo box. 
     //Note that you cannot just set an item! 
    _LIT(KText,""); 
    myComboBox->SetTextL(&KText); 

    //Set the maximum number of user editable items. 
//    myComboBox->SetMaxEditableUserItems(3); 
    }


CComboboxDlg::CComboboxDlg(CExampleAppView* aAppView)
	: iAppView(aAppView)
	{
	}



//Check if OK to exit the dialog 
TBool CComboboxDlg::OkToExitL(TInt aControlId) 
    { 
    //Get a pointer to the Combo box then get its current text. 
    CCoeControl* control = this->Control(EMyComboBoxControlId); 
    CEikComboBox* comboBox = static_cast <CEikComboBox*>(control); 
		// Set a big number for the textContents variable
		// because otherwise, if the user-input string is
		// too long, we'll be facing a KERN-EXEC 3
    TBuf<128> textContents; 
		// //Get current Combo box text
    comboBox->GetText(textContents); 
		//If the "OK" button is pressed (EEikBidOk) then ... 
    if (aControlId==EEikBidOk) 
        { 
		if (iAppView->CheckIfValid(textContents) == 1)
		{
			_LIT(KNotValid, "E number or additive not found");
			TBuf<35> notValid(KNotValid);
			iEikonEnv->InfoMsg(notValid);
				// The dialog is not OK to be closed
            return(EFalse); 
		}
		else
		{
				// Modify the iENumber... contents
				// We'll have to put the second argument as
				// 0 or else we'll have an ALLOC panic when
				// we shut down the app, because the
				// TextModifierL function check the textContents
				// or iPlace, not both.
			iAppView->TextModifierL(textContents, 0);
				// Now the first run is over
			iAppView->firstRun = 0;
				// The dialog is OK to be closed
			return ETrue;
		}
        //Check to see the Combo box editor contains text 
        if (!textContents.Length()) 
            { 
            iEikonEnv->InfoMsg(R_EIK_TBUF_NO_CELL_ENTERED); //#include <eikctl.rsg> for the message 
            return(EFalse); 
            } 
        } 
		//If the "Close" button is pressed (EEikBidCancel) then return ETrue
    if (aControlId==EEikBidCancel) 
        {
			// The dialog is OK to be closed
        return ETrue; 
        }
}
