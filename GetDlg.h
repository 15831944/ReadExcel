#if !defined(AFX_GETDLG_H__B28B01B1_2D2E_4039_AAF8_D797124FAD42__INCLUDED_)
#define AFX_GETDLG_H__B28B01B1_2D2E_4039_AAF8_D797124FAD42__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// GetDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CGetDlg dialog

class CGetDlg : public CDialog
{
// Construction
public:
	CGetDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CGetDlg)
	enum { IDD = IDD_GET_DLG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CGetDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CGetDlg)
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_GETDLG_H__B28B01B1_2D2E_4039_AAF8_D797124FAD42__INCLUDED_)
