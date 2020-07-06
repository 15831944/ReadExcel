; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CChangeDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "readexcel.h"

ClassCount=8
Class1=CReadexcelApp
Class2=CReadexcelDlg
Class3=CAboutDlg

ResourceCount=8
Resource1=IDD_TRANSFER_DLG
Resource2=IDR_MAINFRAME
Resource3=IDD_READEXCEL_DIALOG
Class4=CLoginDlg
Resource4=IDD_LOGIN_DLG
Class5=CSaveDlg
Resource5=IDD_ABOUTBOX
Class6=CGetDlg
Resource6=IDD_GET_DLG
Class7=CTransfer
Resource7=IDD_SAVE_DLG
Class8=CChangeDlg
Resource8=IDD_CHANGE_DLG

[CLS:CReadexcelApp]
Type=0
HeaderFile=readexcel.h
ImplementationFile=readexcel.cpp
Filter=N

[CLS:CReadexcelDlg]
Type=0
HeaderFile=readexcelDlg.h
ImplementationFile=readexcelDlg.cpp
Filter=D
BaseClass=CDialog
VirtualFilter=dWC
LastObject=CReadexcelDlg

[CLS:CAboutDlg]
Type=0
HeaderFile=readexcelDlg.h
ImplementationFile=readexcelDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_READEXCEL_DIALOG]
Type=1
Class=CReadexcelDlg
ControlCount=7
Control1=IDC_EXIT,button,1342242816
Control2=IDC_RELONIN,button,1342242816
Control3=IDC_SAVE,button,1342242816
Control4=IDC_GET,button,1342242816
Control5=IDC_INQUIRE,button,1342242816
Control6=IDC_TRANSFER,button,1342242816
Control7=IDC_CHANGE,button,1342242816

[DLG:IDD_LOGIN_DLG]
Type=1
Class=CLoginDlg
ControlCount=7
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_NAME,edit,1350631553
Control5=IDC_STATIC,static,1342308352
Control6=IDC_PASS,edit,1350631585
Control7=IDC_STATIC,static,1342308352

[CLS:CLoginDlg]
Type=0
HeaderFile=LoginDlg.h
ImplementationFile=LoginDlg.cpp
BaseClass=CDialog
Filter=D
LastObject=CLoginDlg
VirtualFilter=dWC

[DLG:IDD_SAVE_DLG]
Type=1
Class=CSaveDlg
ControlCount=6
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_SAVE_SUM,edit,1350631553
Control5=IDC_STATIC,static,1342308352
Control6=IDC_STATIC,static,1342308352

[CLS:CSaveDlg]
Type=0
HeaderFile=SaveDlg.h
ImplementationFile=SaveDlg.cpp
BaseClass=CDialog
Filter=D
LastObject=IDC_SAVE_SUM
VirtualFilter=dWC

[DLG:IDD_GET_DLG]
Type=1
Class=CGetDlg
ControlCount=5
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_GET_SUM,edit,1350631553
Control5=IDC_STATIC,static,1342308352

[CLS:CGetDlg]
Type=0
HeaderFile=GetDlg.h
ImplementationFile=GetDlg.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=CGetDlg

[CLS:CTransfer]
Type=0
HeaderFile=Transfer.h
ImplementationFile=Transfer.cpp
BaseClass=CDialog
Filter=D
LastObject=CTransfer
VirtualFilter=dWC

[DLG:IDD_TRANSFER_DLG]
Type=1
Class=CTransfer
ControlCount=6
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_TRANSFER_ID,edit,1350631553
Control5=IDC_STATIC,static,1342308352
Control6=IDC_TRANSFER_SUM,edit,1350631553

[DLG:IDD_CHANGE_DLG]
Type=1
Class=CChangeDlg
ControlCount=11
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_NEW_PASS,edit,1350631585
Control5=IDC_STATIC,static,1342308352
Control6=IDC_STATIC,static,1342308352
Control7=IDC_OLD_PASS,edit,1350631585
Control8=IDC_STATIC,static,1342308352
Control9=IDC_TRUE_PASS,edit,1350631585
Control10=IDC_STATIC,static,1342308352
Control11=IDC_STATIC,static,1342308352

[CLS:CChangeDlg]
Type=0
HeaderFile=ChangeDlg.h
ImplementationFile=ChangeDlg.cpp
BaseClass=CDialog
Filter=D
LastObject=CChangeDlg
VirtualFilter=dWC

