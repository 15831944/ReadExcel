// readexcel.h : main header file for the READEXCEL application
//

#if !defined(AFX_READEXCEL_H__4367B601_7D56_40F6_85F4_F4295828CFF0__INCLUDED_)
#define AFX_READEXCEL_H__4367B601_7D56_40F6_85F4_F4295828CFF0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CReadexcelApp:
// See readexcel.cpp for the implementation of this class
//
class CReadexcelApp : public CWinApp
{
public:
	
	CReadexcelApp();
// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CReadexcelApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CReadexcelApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_READEXCEL_H__4367B601_7D56_40F6_85F4_F4295828CFF0__INCLUDED_)
