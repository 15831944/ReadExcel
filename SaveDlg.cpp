// SaveDlg.cpp : implementation file
//

#include "stdafx.h"
#include "readexcel.h"
#include "SaveDlg.h"
#include "CSpreadSheet.h"
#include "Public.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSaveDlg dialog


CSaveDlg::CSaveDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CSaveDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CSaveDlg)
	m_Save_sum = _T("");
	//}}AFX_DATA_INIT
}


void CSaveDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CSaveDlg)
	DDX_Text(pDX, IDC_SAVE_SUM, m_Save_sum);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CSaveDlg, CDialog)
	//{{AFX_MSG_MAP(CSaveDlg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSaveDlg message handlers

//������Ӧ����
void CSaveDlg::OnOK() 
{
	// TODO: Add extra validation here
	CString szSave_sum,strSum,str;
	int Save_sum,Sum;
	CSpreadSheet sheet("book1.xls","sheet1");  //�򿪹������еĹ�����sheet1!

	this->GetDlgItemText(IDC_SAVE_SUM,szSave_sum);
	sheet.ReadCell(strSum,2,CPublic::ROW);
	
	Save_sum = _ttoi(szSave_sum);
	Sum = _ttoi(strSum);
	if(Save_sum > 0 && Save_sum < 10000)
	{
		Sum = Sum + Save_sum;
		strSum.Format ("%d",Sum);
		sheet.AddCell(strSum,2,CPublic::ROW);
		str.Format("���׳ɹ�!\n�����Ϊ:%d Ԫ",Save_sum);
		MessageBox(str,"���");
		CDialog::OnOK();
	}
	else
	{
		MessageBox("��������Ҫ��!","���");	
		SetDlgItemText(IDC_SAVE_SUM,"");
		GetDlgItem(IDC_SAVE_SUM)->SetFocus();
	}
}
