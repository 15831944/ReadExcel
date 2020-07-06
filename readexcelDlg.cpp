// readexcelDlg.cpp : implementation file
//

#include "stdafx.h"
#include "readexcel.h"
#include "readexcelDlg.h"
#include "CSpreadSheet.h"
#include "Public.h"
#include "LoginDlg.h"
#include "SaveDlg.h"
#include "GetDlg.h"
#include "Transfer.h"
#include "ChangeDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CReadexcelDlg dialog

CReadexcelDlg::CReadexcelDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CReadexcelDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CReadexcelDlg)
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	
}

void CReadexcelDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CReadexcelDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CReadexcelDlg, CDialog)
	//{{AFX_MSG_MAP(CReadexcelDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_READDATA, OnReaddata)
	ON_BN_CLICKED(IDC_WRITEDATA, OnWritedata)
	ON_BN_CLICKED(IDC_EXIT, OnExit)
	ON_BN_CLICKED(IDC_RELONIN, OnRelonin)
	ON_BN_CLICKED(IDC_SAVE, OnSave)
	ON_BN_CLICKED(IDC_GET, OnGet)
	ON_BN_CLICKED(IDC_INQUIRE, OnInquire)
	ON_BN_CLICKED(IDC_TRANSFER, OnTransfer)
	ON_BN_CLICKED(IDC_CHANGE, OnChange)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CReadexcelDlg message handlers

BOOL CReadexcelDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
   

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CReadexcelDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CReadexcelDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CReadexcelDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CReadexcelDlg::OnReaddata() 
{
	// TODO: Add your control notification handler code here
	//在C盘下建一个工作簿，book1,他的工作表sheet1包括两个字段:姓名和年龄
	//并且有两组数据
   CSpreadSheet sheet("book1.xls","sheet1");  //打开工作簿中的工作表sheet1!
   CString str1,str2,strMsg;
   long rows=sheet.GetTotalRows();
   short columns=sheet.GetTotalColumns();
   sheet.ReadCell(str1,1,2);
   sheet.ReadCell(str2,2,2);
   strMsg.Format ("账号:%s\n余额:%s",str1,str2);
   AfxMessageBox(strMsg);
   //for(long j=1;j<=rows;j++)
   //   for(short i=1;i<=columns;i++)
	   
	//   {
	//	   sheet.ReadCell(str,i,j);
	//       AfxMessageBox(str);
	//  }
}

void CReadexcelDlg::OnWritedata() 
{
	// TODO: Add your control notification handler code here
	CSpreadSheet sheet("book1.xls","sheet1"); //打开数据表sheet1
    long rows=sheet.GetTotalRows();        //获得当前总行数,第一行为表头
    short columns=sheet.GetTotalColumns(); //获得当前总列数
    //下面将一组数据写入，也可以从Excel数据表中获得数据
	sheet.AddCell("012",1,13);
    sheet.AddCell("1600",2,13);
	sheet.AddCell("123456",3,13);
}

//操作界面退出
void CReadexcelDlg::OnExit() 
{
	// TODO: Add your control notification handler code here
	CPublic::ID="";
	CPublic::ROW = 0;
	EndDialog(IDCANCEL);
}

//操作界面重新登陆
void CReadexcelDlg::OnRelonin() 
{
	// TODO: Add your control notification handler code here
	CPublic::ID="";
	CPublic::ROW = 0;
	ShowWindow(SW_HIDE);
	CLoginDlg dlg;
	if(IDCANCEL == dlg.DoModal() )
	{
		OnCancel();
	}
	ShowWindow(SW_SHOW);
}

//操作界面存款
void CReadexcelDlg::OnSave() 
{
	// TODO: Add your control notification handler code here
	ShowWindow(SW_HIDE);
	CSaveDlg dlg;
	dlg.DoModal();
	ShowWindow(SW_SHOW);
}

//操作界面取款
void CReadexcelDlg::OnGet() 
{
	// TODO: Add your control notification handler code here
	ShowWindow(SW_HIDE);
	CGetDlg dlg;
	dlg.DoModal();
	ShowWindow(SW_SHOW);
}

//操作界面查询
void CReadexcelDlg::OnInquire() 
{
	// TODO: Add your control notification handler code here
	CSpreadSheet sheet("book1.xls","sheet1");  //打开工作簿中的工作表sheet1!
	CString str1,str2,strMsg;
	sheet.ReadCell(str1,1,CPublic::ROW);
    sheet.ReadCell(str2,2,CPublic::ROW);
    strMsg.Format ("账号:%s\n余额:%s 元",str1,str2);
	MessageBox( strMsg,"余额");
}

//操作界面转账
void CReadexcelDlg::OnTransfer() 
{
	// TODO: Add your control notification handler code here
	ShowWindow(SW_HIDE);
	CTransfer dlg;
	dlg.DoModal();
	ShowWindow(SW_SHOW);
}

//操作界面修改密码
void CReadexcelDlg::OnChange() 
{
	// TODO: Add your control notification handler code here
	ShowWindow(SW_HIDE);
	CChangeDlg dlg;
	dlg.DoModal();
	ShowWindow(SW_SHOW);
}
