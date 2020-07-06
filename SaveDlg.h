#if !defined(AFX_SAVEDLG_H__46214BCD_3D82_4ABE_B488_41F72CA5DBCA__INCLUDED_)
#define AFX_SAVEDLG_H__46214BCD_3D82_4ABE_B488_41F72CA5DBCA__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// SaveDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CSaveDlg dialog

class CSaveDlg : public CDialog
{
// Construction
public:
	CSaveDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CSaveDlg)
	enum { IDD = IDD_SAVE_DLG };
	CString	m_Save_sum;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSaveDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CSaveDlg)
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SAVEDLG_H__46214BCD_3D82_4ABE_B488_41F72CA5DBCA__INCLUDED_)
