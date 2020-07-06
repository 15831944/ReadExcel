#if !defined(AFX_TRANSFER_H__185FE940_E8CE_4EEA_A851_20EF87A7F31A__INCLUDED_)
#define AFX_TRANSFER_H__185FE940_E8CE_4EEA_A851_20EF87A7F31A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Transfer.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CTransfer dialog

class CTransfer : public CDialog
{
// Construction
public:
	CTransfer(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CTransfer)
	enum { IDD = IDD_TRANSFER_DLG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTransfer)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CTransfer)
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TRANSFER_H__185FE940_E8CE_4EEA_A851_20EF87A7F31A__INCLUDED_)
