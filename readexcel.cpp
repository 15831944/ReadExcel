// readexcel.cpp : Defines the class behaviors for the application.
//

#include "stdafx.h"
#include "readexcel.h"
#include "readexcelDlg.h"
#include "LoginDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CReadexcelApp

BEGIN_MESSAGE_MAP(CReadexcelApp, CWinApp)
	//{{AFX_MSG_MAP(CReadexcelApp)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG
	ON_COMMAND(ID_HELP, CWinApp::OnHelp)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CReadexcelApp construction

CReadexcelApp::CReadexcelApp()
{
	
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}

/////////////////////////////////////////////////////////////////////////////
// The one and only CReadexcelApp object

CReadexcelApp theApp;

/////////////////////////////////////////////////////////////////////////////
// CReadexcelApp initialization
BOOL CReadexcelApp::InitInstance()
{
	AfxEnableControlContainer();

	// Standard initialization
	// If you are not using these features and wish to reduce the size
	//  of your final executable, you should remove from the following
	//  the specific initialization routines you do not need.
	
#ifdef _AFXDLL
	Enable3dControls();			// Call this when using MFC in a shared DLL
#else
	Enable3dControlsStatic();	// Call this when linking to MFC statically
#endif
	CLoginDlg ld;
	if(IDCANCEL == ld.DoModal() )
		return FALSE;
	CReadexcelDlg dlg;
	m_pMainWnd = &dlg;
	dlg.DoModal();
	return FALSE;
}
