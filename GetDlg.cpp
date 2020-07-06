// GetDlg.cpp : implementation file
//

#include "stdafx.h"
#include "readexcel.h"
#include "GetDlg.h"
#include "CSpreadSheet.h"
#include "Public.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CGetDlg dialog


CGetDlg::CGetDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CGetDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CGetDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CGetDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CGetDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CGetDlg, CDialog)
	//{{AFX_MSG_MAP(CGetDlg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CGetDlg message handlers

//ȡ�����Ӧ����
void CGetDlg::OnOK() 
{
	// TODO: Add extra validation here
	CString szGet_sum,strSum,str;
	int Get_sum,Sum;
	CSpreadSheet sheet("book1.xls","sheet1");  //�򿪹������еĹ�����sheet1!

	this->GetDlgItemText(IDC_GET_SUM,szGet_sum);
	sheet.ReadCell(strSum,2,CPublic::ROW);

	Get_sum = _ttoi(szGet_sum);
	Sum = _ttoi(strSum);
	if(Get_sum>Sum)
	{
		MessageBox("�˻�����!","ȡ��");
		OnCancel();
	}
	else
	{
		Sum = Sum - Get_sum;
		strSum.Format ("%d",Sum);
		sheet.AddCell(strSum,2,CPublic::ROW);
		str.Format("���׳ɹ�!\nȡ����Ϊ:%d Ԫ",Get_sum);
		MessageBox(str,"ȡ��");
		CDialog::OnOK();
	}
	
}
