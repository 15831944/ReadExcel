// ChangeDlg.cpp : implementation file
//

#include "stdafx.h"
#include "readexcel.h"
#include "ChangeDlg.h"
#include "CSpreadSheet.h"
#include "Public.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CChangeDlg dialog


CChangeDlg::CChangeDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CChangeDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CChangeDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CChangeDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CChangeDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CChangeDlg, CDialog)
	//{{AFX_MSG_MAP(CChangeDlg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CChangeDlg message handlers

//�޸����밴����Ӧ����
void CChangeDlg::OnOK() 
{
	// TODO: Add extra validation here
	CString m_pass,old_pass,new_pass,ture_pass;
	CSpreadSheet sheet("book1.xls","sheet1");  //�򿪹������еĹ�����sheet1!
	sheet.ReadCell(m_pass,3,CPublic::ROW);
	GetDlgItemText(IDC_OLD_PASS,old_pass);
	GetDlgItemText(IDC_NEW_PASS,new_pass);
	GetDlgItemText(IDC_TRUE_PASS,ture_pass);
	if(old_pass == m_pass)
	{
		if(new_pass == ture_pass && m_pass != new_pass)
		{
			sheet.AddCell(new_pass,3,CPublic::ROW);
			MessageBox("�����޸ĳɹ�!","�޸�����");
			EndDialog(IDCANCEL);
			return;
		}
		else if(new_pass != ture_pass)
		{
			MessageBox("�������벻��ͬ!","�޸�����");
			SetDlgItemText(IDC_OLD_PASS,"");
			SetDlgItemText(IDC_NEW_PASS,"");
			SetDlgItemText(IDC_TRUE_PASS,"");
			GetDlgItem(IDC_OLD_PASS)->SetFocus();
			CChangeDlg dlg;
			if(IDCANCEL == dlg.DoModal() )
			{
				OnCancel();
			}
			ShowWindow(SW_SHOW);
		}
		else if(new_pass == ture_pass && m_pass == new_pass)
		{
			MessageBox("��������ԭ������ͬ!","�޸�����");
			SetDlgItemText(IDC_OLD_PASS,"");
			SetDlgItemText(IDC_NEW_PASS,"");
			SetDlgItemText(IDC_TRUE_PASS,"");
			GetDlgItem(IDC_OLD_PASS)->SetFocus();
			CChangeDlg dlg;
			if(IDCANCEL == dlg.DoModal() )
			{
				OnCancel();
			}
			ShowWindow(SW_SHOW);
		}
		else;
	}
	else
	{
		MessageBox("ԭ�������!","�޸�����");
		SetDlgItemText(IDC_OLD_PASS,"");
		SetDlgItemText(IDC_NEW_PASS,"");
		SetDlgItemText(IDC_TRUE_PASS,"");
		GetDlgItem(IDC_OLD_PASS)->SetFocus();
		CChangeDlg dlg;
		if(IDCANCEL == dlg.DoModal() )
		{
			OnCancel();
		}
		ShowWindow(SW_SHOW);
	}
}
