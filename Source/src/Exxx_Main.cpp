// Exxx_Main.cpp
// -------------------
//
// Copyright (c) 2000 Symbian Ltd.  All rights reserved.
//

////////////////////////////////////////////////////////////////////////
//
// Exxx 
// ----------
//
//
// The example is a simple application containing a single view with
// the text "Hello World !" drawn on it.
// 
// The example includes code for displaying a simple menu and also makes
// use of the CBA.
//
// --------------------------------------------------------------------- 
//
// This source file contains the single exported function required by 
// all UI applications and the E32Dll function which is also required
// but is not used here.
//
////////////////////////////////////////////////////////////////////////


#include "Exxx.h"

//             The entry point for the application code. It creates
//             an instance of the CApaApplication derived
//             class, CExampleApplication.
//
EXPORT_C CApaApplication* NewApplication()
	{
	return new CExampleApplication;
	}

//             This function is required by all EPOC32 DLLs. In this 
//             example, it does nothing.
//
GLDEF_C TInt E32Dll(TDllReason)
	{
	return KErrNone;
	}

