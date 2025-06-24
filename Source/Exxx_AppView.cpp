// Exxx_CExampleAppView.cpp
// ------------------------------
//
// Copyright (c) 2000 Symbian Ltd.  All rights reserved.
//

////////////////////////////////////////////////////////////////////////
//
// Source file for the implementation of the 
// application view class - CExampleAppView
//
////////////////////////////////////////////////////////////////////////

#include "Exxx.h"

//
//             Constructor for the view.
//
CExampleAppView::CExampleAppView()
	{
	}


//             Static NewL() function to start the standard two
//             phase construction.
//
CExampleAppView* CExampleAppView::NewL(const TRect& aRect)
	{
	CExampleAppView* self = new(ELeave) CExampleAppView();
	CleanupStack::PushL(self);
	self->ConstructL(aRect);
	CleanupStack::Pop();
	return self;
	}


//
//             Destructor for the view.
//
CExampleAppView::~CExampleAppView()
	{
	delete iENumberTitle;
	delete iENumberName;
	delete iENumberName2;
	delete iENumberFunction;
	delete iENumberFoods;
	delete iENumberFoods2;
	delete iENumberDescription;
	delete iENumberDescription2;
	delete iENumberDescription3;
	delete iENumberDescription4;
		// title.rsg
	iEikonEnv->DeleteResourceFile(0x61d85000);
		// name.rsg
	iEikonEnv->DeleteResourceFile(0x45a09000);
		// function.rsg
	iEikonEnv->DeleteResourceFile(0x20a9c000);
		// foods.rsg
	iEikonEnv->DeleteResourceFile(0x1f9a2000);
		// description.rsg
	iEikonEnv->DeleteResourceFile(0x143cd000);
	}


//             Second phase construction.
//
void CExampleAppView::ConstructL(const TRect& aRect)
    {
	           // UI environment
	CEikonEnv* eikonEnv=CEikonEnv::Static();
				// Add the resource files containing the data
	iEikonEnv->AddResourceFileL( _L( "z:\\system\\apps\\Exxx\\title.rsc" ));
	iEikonEnv->AddResourceFileL( _L( "z:\\system\\apps\\Exxx\\name.rsc" ));
	iEikonEnv->AddResourceFileL( _L( "z:\\system\\apps\\Exxx\\function.rsc" ));
	iEikonEnv->AddResourceFileL( _L( "z:\\system\\apps\\Exxx\\foods.rsc" ));
	iEikonEnv->AddResourceFileL( _L( "z:\\system\\apps\\Exxx\\description.rsc" ));

	
	// Initialise the HBufC* variables with some length values
	iENumberTitle = HBufC::NewL(5);
	iENumberName = HBufC::NewL(30);
	iENumberName2 = HBufC::NewL(30);
	iENumberFunction = HBufC::NewL(50);
	iENumberFoods = HBufC::NewL(70);
	iENumberFoods2 = HBufC::NewL(70);
	iENumberDescription = HBufC::NewL(80);
	iENumberDescription2 = HBufC::NewL(80);
	iENumberDescription3 = HBufC::NewL(80);
	iENumberDescription4 = HBufC::NewL(80);
			   // Fetch the text from the resource file.
	           // Control is a window owning control
	CreateWindowL();
	           // Extent of the control. This is
	           // the whole rectangle available to application.
	           // The rectangle is passed to us from the application UI.
	SetRect(aRect);
			   // At this stage, the control is ready to draw so
	           // we tell the UI framework by activating it.
	ActivateL();
	}


//             Drawing the view - in this example, 
//             consists of drawing a simple outline rectangle
//             and then drawing the text in the middle.
//             We use the Normal font supplied by the UI.
//
//             In this example, we don't use the redraw
//             region because it's easier to redraw to
//             the whole client area.
//
void CExampleAppView::Draw(const TRect& /*aRect*/) const
	{
               // Window graphics context
	CWindowGc& gc = SystemGc();
	           // Area in which we shall draw
	TRect      drawRect = Rect();
			   // Font used for drawing text
	const CFont*     fontUsed;
	           // UI environment
	CEikonEnv* eikonEnv=CEikonEnv::Static();

	           // Start with a clear screen
	gc.Clear();





// set the name of the multi-bitmap file containing the bitmaps 
_LIT(KMBMFileName,"z:\\system\\apps\\Exxx\\background.mbm"); 

// load the bitmap from an .mbm file 
CFbsBitmap* bitmap = new (ELeave) CFbsBitmap(); 
CleanupStack::PushL(bitmap); 
User::LeaveIfError(bitmap->Load(KMBMFileName, 0)); 
// EMbmGrbmap2Smiley is the ID of a bitmap in the .mbm file 
 

// draw the bitmap using bitmap block transfer 
TPoint pos(0,0); 
gc.BitBlt(pos, bitmap);



// clean up 
CleanupStack::PopAndDestroy();






				// Rajapinta, joka muuntaa twipseistä laitteen omille yksiköille
				// eli pikseleille
	MGraphicsDeviceMap* deviceMap;
	TZoomFactor zoomFactor;
	TBuf<19> currentFont;

				// set up zoom factor & graphics device map for getting fonts and drawing text
	zoomFactor.SetGraphicsDeviceMap(iCoeEnv->ScreenDevice());
	zoomFactor.SetZoomFactor(TZoomFactor::EZoomOneToOne);
	deviceMap = &zoomFactor;

				// find the font to display this phase
	TTypefaceSupport* myTypefaceSupport = new TTypefaceSupport;
	iCoeEnv->ScreenDevice()->TypefaceSupport(*myTypefaceSupport,NULL);
	currentFont = myTypefaceSupport->iTypeface.iName.Des();
	delete myTypefaceSupport;

				// set up absolute font-spec and text box for 200 and 500 twip Roman fonts
	TFontSpec pieniFontinTiedot(currentFont,150);
	TFontSpec normaaliFontinTiedot(currentFont,200);
	TFontSpec isoFontinTiedot(currentFont,500);

				// Initialize the fonts
	CFont* pieniFontti;										
	CFont* normaaliFontti;										
	CFont* isoFontti;						
				
				// find the nearest font to the specified one
	deviceMap->GetNearestFontInTwips(pieniFontti,pieniFontinTiedot);
	deviceMap->GetNearestFontInTwips(normaaliFontti,normaaliFontinTiedot);
	deviceMap->GetNearestFontInTwips(isoFontti,isoFontinTiedot);


			   // Draw an outline rectangle (the default pen
	           // and brush styles ensure this) slightly
	           // smaller than the drawing area.
	gc.DrawRect(drawRect);
               // Use the title font supplied by the UI
	fontUsed = eikonEnv->DenseFont();
	gc.UseFont(fontUsed);
			   // Draw the text in the middle of the rectangle.
	TInt   baselineOffset_title = 59;//(drawRect.Height() - fontUsed->HeightInPixels())/2; 
	TInt   baselineOffset_name = 40;//(drawRect.Height() - fontUsed->HeightInPixels())/2; 
	TInt   baselineOffset_name2 = 61;//(drawRect.Height() - fontUsed->HeightInPixels())/2; 
	TInt   baselineOffset_function = 86;//(drawRect.Height() - fontUsed->HeightInPixels())/2; 
	TInt   baselineOffset_foods = 107;//(drawRect.Height() - fontUsed->HeightInPixels())/2; 
	TInt   baselineOffset_foods2 = 124;//(drawRect.Height() - fontUsed->HeightInPixels())/2; 
	TInt   baselineOffset_description = 140;//(drawRect.Height() - fontUsed->HeightInPixels())/2; 
	TInt   baselineOffset_description2 = 156;//(drawRect.Height() - fontUsed->HeightInPixels())/2; 
	TInt   baselineOffset_description3 = 170;//(drawRect.Height() - fontUsed->HeightInPixels())/2; 
	TInt   baselineOffset_description4 = 183;//(drawRect.Height() - fontUsed->HeightInPixels())/2; 
	gc.UseFont(isoFontti);

	TRgb colorWhite = TRgb(255,255,255);

	gc.SetPenColor(colorWhite);
	gc.DrawText(*iENumberTitle,drawRect,baselineOffset_title,CGraphicsContext::ELeft, 323);
	gc.UseFont(normaaliFontti);
	gc.DrawText(*iENumberName,drawRect,baselineOffset_name,CGraphicsContext::ELeft, 70);
	gc.DrawText(*iENumberName2,drawRect,baselineOffset_name2,CGraphicsContext::ELeft, 11);
	gc.DrawText(*iENumberFunction,drawRect,baselineOffset_function,CGraphicsContext::ELeft, 96);
	gc.UseFont(pieniFontti);
	gc.DrawText(*iENumberFoods,drawRect,baselineOffset_foods,CGraphicsContext::ELeft, 62);
	gc.DrawText(*iENumberFoods2,drawRect,baselineOffset_foods2,CGraphicsContext::ELeft, 11);
	gc.DrawText(*iENumberDescription,drawRect,baselineOffset_description,CGraphicsContext::ELeft, 89);
	gc.DrawText(*iENumberDescription2,drawRect,baselineOffset_description2,CGraphicsContext::ELeft, 11);
	gc.DrawText(*iENumberDescription3,drawRect,baselineOffset_description3,CGraphicsContext::ELeft, 11);
	gc.DrawText(*iENumberDescription4,drawRect,baselineOffset_description4,CGraphicsContext::ELeft, 11);
               // Finished using the font
	gc.DiscardFont();


	deviceMap->ReleaseFont(normaaliFontti);
	deviceMap->ReleaseFont(isoFontti);
	deviceMap->ReleaseFont(pieniFontti);

	}

