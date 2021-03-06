; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CSketchpadView
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "sketchpad.h"
LastPage=0

ClassCount=5
Class1=CSketchpadApp
Class2=CSketchpadDoc
Class3=CSketchpadView
Class4=CMainFrame

ResourceCount=4
Resource1=IDR_STYLE
Resource2=IDR_COLOR
Class5=CAboutDlg
Resource3=IDR_MAINFRAME
Resource4=IDD_ABOUTBOX

[CLS:CSketchpadApp]
Type=0
HeaderFile=sketchpad.h
ImplementationFile=sketchpad.cpp
Filter=N

[CLS:CSketchpadDoc]
Type=0
HeaderFile=sketchpadDoc.h
ImplementationFile=sketchpadDoc.cpp
Filter=N

[CLS:CSketchpadView]
Type=0
HeaderFile=sketchpadView.h
ImplementationFile=sketchpadView.cpp
Filter=C
BaseClass=CView
VirtualFilter=VWC
LastObject=ID_BUTTON_SOLID


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T
LastObject=CMainFrame




[CLS:CAboutDlg]
Type=0
HeaderFile=sketchpad.cpp
ImplementationFile=sketchpad.cpp
Filter=D
LastObject=ID_BUTTON_BLACK

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[MNU:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_SAVE_AS
Command5=ID_FILE_PRINT
Command6=ID_FILE_PRINT_PREVIEW
Command7=ID_FILE_PRINT_SETUP
Command8=ID_FILE_MRU_FILE1
Command9=ID_APP_EXIT
Command10=ID_EDIT_UNDO
Command11=ID_EDIT_CUT
Command12=ID_EDIT_COPY
Command13=ID_EDIT_PASTE
Command14=ID_VIEW_TOOLBAR
Command15=ID_VIEW_STATUS_BAR
Command16=ID_APP_ABOUT
CommandCount=16

[ACL:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_PRINT
Command5=ID_EDIT_UNDO
Command6=ID_EDIT_CUT
Command7=ID_EDIT_COPY
Command8=ID_EDIT_PASTE
Command9=ID_EDIT_UNDO
Command10=ID_EDIT_CUT
Command11=ID_EDIT_COPY
Command12=ID_EDIT_PASTE
Command13=ID_NEXT_PANE
Command14=ID_PREV_PANE
CommandCount=14

[TB:IDR_MAINFRAME]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_CUT
Command5=ID_EDIT_COPY
Command6=ID_EDIT_PASTE
Command7=ID_FILE_PRINT
Command8=ID_APP_ABOUT
CommandCount=8

[TB:IDR_COLOR]
Type=1
Class=?
Command1=ID_BUTTON_BLACK
Command2=ID_BUTTON_RED
Command3=ID_BUTTON_GREEN
Command4=ID_BUTTON_BLUE
CommandCount=4

[TB:IDR_STYLE]
Type=1
Class=?
Command1=ID_BUTTON_THREAD
Command2=ID_BUTTON_STICK
Command3=ID_BUTTON_SOLID
Command4=ID_BUTTON_DASH
CommandCount=4

