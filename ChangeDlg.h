#if !defined(AFX_CHANGEDLG_H__C520CAE6_2563_4187_80A7_8347137681DF__INCLUDED_)
#define AFX_CHANGEDLG_H__C520CAE6_2563_4187_80A7_8347137681DF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ChangeDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CChangeDlg dialog

class CChangeDlg : public CDialog
{
// Construction
public:
	CChangeDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CChangeDlg)
	enum { IDD = IDD_CHANGE_DLG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CChangeDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CChangeDlg)
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CHANGEDLG_H__C520CAE6_2563_4187_80A7_8347137681DF__INCLUDED_)
