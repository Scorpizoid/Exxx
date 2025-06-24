// Exxx.h
// ------------
//
// Copyright (c) 2000 Symbian Ltd.  All rights reserved.
//

////////////////////////////////////////////////////////////////////
// Exxx 
// ----------
//
//
// The class definitions for the simple example application
// containing a single view with the text "Hello World !" drawn
// on it.
//
// The class definitions are:
//
// CExampleApplication 
// CExampleAppUi
// CExampleAppView
// CExampleDocument
//
//
////////////////////////////////////////////////////////////////////
#ifndef __EXXX_H
#define __EXXX_H

#include <coeccntx.h>

#include <eikenv.h>
#include <eikappui.h>
#include <eikapp.h>
#include <eikdoc.h>
#include <eikmenup.h>

#include <eikdialg.h>
#include <ckninfrm.h>
#include <ckninfo.h>

#include <eikctl.rsg>
#include <eikcmbox.h>


#include <eikon.hrh>

#include <exxx.rsg>
#include <title.rsg>
#include <name.rsg>
#include <function.rsg>
#include <foods.rsg>
#include <description.rsg>
#include "exxx.hrh"



////////////////////////////////////////////////////////////////////////
//
// CExampleApplication
//
////////////////////////////////////////////////////////////////////////

class CExampleApplication : public CEikApplication
	{
private: 
	           // Inherited from class CApaApplication
	CApaDocument* CreateDocumentL();
	TUid AppDllUid() const;
	};

////////////////////////////////////////////////////////////////////////
//
// CExampleAppView
//
////////////////////////////////////////////////////////////////////////
class CExampleAppView : public CCoeControl
    {
public:
	HBufC* iENumberTitle;
	HBufC* iENumberName;
	HBufC* iENumberName2;
	HBufC* iENumberFunction;
	HBufC* iENumberFoods;
	HBufC* iENumberFoods2;
	HBufC* iENumberDescription;
	HBufC* iENumberDescription2;
	HBufC* iENumberDescription3;
	HBufC* iENumberDescription4;
	TUint8 CheckIfValid(TDesC& aText);
	void TextModifierL(TDesC& aText);
	static CExampleAppView* NewL(const TRect& aRect);
	CExampleAppView();
	~CExampleAppView();
    void ConstructL(const TRect& aRect);

//	void Dialog();
	CEikDialog* dialog; 
private:
	           // Inherited from CCoeControl
	void Draw(const TRect& /*aRect*/) const;

private:
    };


////////////////////////////////////////////////////////////////////////
//
// CExampleAppUi
//
////////////////////////////////////////////////////////////////////////
class CExampleAppUi : public CEikAppUi
    {
public:
    void ConstructL();
	~CExampleAppUi();
	void DialogL();
	void LaunchAboutDialog();

private:
              // Inherirted from class CEikAppUi
	void HandleCommandL(TInt aCommand);

private:
	CExampleAppView* iAppView;
	};


////////////////////////////////////////////////////////////////////////
//
// CExampleDocument
//
////////////////////////////////////////////////////////////////////////
class CExampleDocument : public CEikDocument
	{
public:
	static CExampleDocument* NewL(CEikApplication& aApp);
	CExampleDocument(CEikApplication& aApp);
	void ConstructL();
private: 
	           // Inherited from CEikDocument
	CEikAppUi* CreateAppUiL();
	};



class CComboboxDlg : public CEikDialog
    { 
  public:
	CComboboxDlg(CExampleAppView* aModel); 
     //Default constructor and destructor 
    private: 
     // from CEikDialog 
        void PreLayoutDynInitL(); //Combo box initialisation. 
     TBool OkToExitL(TInt aControlId); //Adding items and retrieving the value. 
//	CEikDialog* dialog = new (ELeave) CComboboxDialog(iModel);
	CExampleAppView* iAppView;
   };


#endif