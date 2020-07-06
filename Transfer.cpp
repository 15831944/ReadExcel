// Transfer.cpp : implementation file
//

#include "stdafx.h"
#include "readexcel.h"
#include "Transfer.h"
#include "CSpreadSheet.h"
#include "Public.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CTransfer dialog


CTransfer::CTransfer(CWnd* pParent /*=NULL*/)
	: CDialog(CTransfer::IDD, pParent)
{
	//{{AFX_DATA_INIT(CTransfer)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CTransfer::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CTransfer)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CTransfer, CDialog)
	//{{AFX_MSG_MAP(CTransfer)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTransfer message handlers

//ת�˰�����Ӧ����
void CTransfer::OnOK() 
{
	// TODO: Add extra validation here
	CString sT_name,sM_sum,sT_sum,stSum,sC_name,str;
	int M_sum,T_sum,tSum;
	CSpreadSheet sheet("book1.xls","sheet1");  //�򿪹������еĹ�����sheet1!

	GetDlgItemText(IDC_TRANSFER_ID,sT_name);
	GetDlgItemText(IDC_TRANSFER_SUM,stSum);

	long rows=sheet.GetTotalRows();
    short columns=sheet.GetTotalColumns();
	for(long j=1;j<=rows;j++)
	{
		sheet.ReadCell(sC_name,1,j);
		sheet.ReadCell(sT_sum,2,j);
		sheet.ReadCell(sM_sum,2,CPublic::ROW);

		if(sC_name == sT_name)
		{
			tSum = _ttoi(stSum);
			M_sum = _ttoi(sM_sum);
			T_sum = _ttoi(sT_sum);
			if(tSum>M_sum)
			{
				MessageBox("�˻�����!","ת��");
				CDialog::OnOK();
				return;
			}
			else
			{
				M_sum = M_sum - tSum;
				T_sum = T_sum + tSum;
				sM_sum.Format("%d",M_sum);
				sT_sum.Format("%d",T_sum);
				sheet.AddCell(sM_sum,2,CPublic::ROW);
				sheet.AddCell(sT_sum,2,j);
				str.Format("���׳ɹ�!\nת�˽��Ϊ:%d Ԫ",tSum);
				MessageBox(str,"ת��");
			    CDialog::OnOK();
				return;
			}
		}
	}
	MessageBox("ת���û���������!","ת��");	
	SetDlgItemText(IDC_TRANSFER_ID,"");
	SetDlgItemText(IDC_TRANSFER_SUM,"");
	GetDlgItem(IDC_TRANSFER_ID)->SetFocus();
}
