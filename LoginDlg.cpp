// LoginDlg.cpp : implementation file
//

#include "stdafx.h"
#include "readexcel.h"
#include "LoginDlg.h"
#include "CSpreadSheet.h"
#include "Public.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CLoginDlg dialog


CLoginDlg::CLoginDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CLoginDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CLoginDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CLoginDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CLoginDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CLoginDlg, CDialog)
	//{{AFX_MSG_MAP(CLoginDlg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CLoginDlg message handlers

//登录按键响应函数
void CLoginDlg::OnOK() 
{
	// TODO: Add extra validation here
	CString szName,szPass,strID,strPass;
	CSpreadSheet sheet("book1.xls","sheet1");  //打开工作簿中的工作表sheet1!

	GetDlgItemText(IDC_NAME,szName);
	GetDlgItemText(IDC_PASS,szPass);

	long rows=sheet.GetTotalRows();
    short columns=sheet.GetTotalColumns();
	for(long j=1;j<=rows;j++)
	{
		sheet.ReadCell(strID,1,j);
		sheet.ReadCell(strPass,3,j);
		if(strID == szName && strPass == szPass)
		{
			CPublic::ROW=j;
			CPublic::ID=szName;
			CDialog::OnOK();
			return;
		}
	}
	MessageBox("账号或密码错误!","用户登录");	
	SetDlgItemText(IDC_NAME,"");
	SetDlgItemText(IDC_PASS,"");
	GetDlgItem(IDC_NAME)->SetFocus();
}
