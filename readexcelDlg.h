// readexcelDlg.h : header file
//

#if !defined(AFX_READEXCELDLG_H__A5767D32_CA2A_45F7_B539_54543CB083B4__INCLUDED_)
#define AFX_READEXCELDLG_H__A5767D32_CA2A_45F7_B539_54543CB083B4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
/////////////////////////////////////////////////////////////////////////////
// CReadexcelDlg dialog

class CReadexcelDlg : public CDialog
{
// Construction
public:
	CReadexcelDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CReadexcelDlg)
	enum { IDD = IDD_READEXCEL_DIALOG };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CReadexcelDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CReadexcelDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnReaddata();
	afx_msg void OnWritedata();
	afx_msg void OnExit();
	afx_msg void OnRelonin();
	afx_msg void OnSave();
	afx_msg void OnGet();
	afx_msg void OnInquire();
	afx_msg void OnTransfer();
	afx_msg void OnChange();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_READEXCELDLG_H__A5767D32_CA2A_45F7_B539_54543CB083B4__INCLUDED_)
