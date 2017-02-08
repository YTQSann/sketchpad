// sketchpadView.cpp : implementation of the CSketchpadView class
//

#include "stdafx.h"
#include "sketchpad.h"

#include "sketchpadDoc.h"
#include "sketchpadView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSketchpadView

IMPLEMENT_DYNCREATE(CSketchpadView, CView)

BEGIN_MESSAGE_MAP(CSketchpadView, CView)
	//{{AFX_MSG_MAP(CSketchpadView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_COMMAND(ID_BUTTON_BLACK, OnButtonBlack)
	ON_COMMAND(ID_BUTTON_BLUE, OnButtonBlue)
	ON_COMMAND(ID_BUTTON_GREEN, OnButtonGreen)
	ON_COMMAND(ID_BUTTON_RED, OnButtonRed)
	ON_COMMAND(ID_BUTTON_DASH, OnButtonDash)
	ON_COMMAND(ID_BUTTON_SOLID, OnButtonSolid)
	ON_COMMAND(ID_BUTTON_STICK, OnButtonStick)
	ON_COMMAND(ID_BUTTON_THREAD, OnButtonThread)
	ON_UPDATE_COMMAND_UI(ID_BUTTON_BLACK, OnUpdateButtonBlack)
	ON_UPDATE_COMMAND_UI(ID_BUTTON_BLUE, OnUpdateButtonBlue)
	ON_UPDATE_COMMAND_UI(ID_BUTTON_DASH, OnUpdateButtonDash)
	ON_UPDATE_COMMAND_UI(ID_BUTTON_GREEN, OnUpdateButtonGreen)
	ON_UPDATE_COMMAND_UI(ID_BUTTON_RED, OnUpdateButtonRed)
	ON_UPDATE_COMMAND_UI(ID_BUTTON_SOLID, OnUpdateButtonSolid)
	ON_UPDATE_COMMAND_UI(ID_BUTTON_STICK, OnUpdateButtonStick)
	ON_UPDATE_COMMAND_UI(ID_BUTTON_THREAD, OnUpdateButtonThread)
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSketchpadView construction/destruction

CSketchpadView::CSketchpadView()
{
	isFinished = false;
	l.color = 0;
	l.thick = 1;
	l.style = PS_SOLID;
}

CSketchpadView::~CSketchpadView()
{
}

BOOL CSketchpadView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CSketchpadView drawing

void CSketchpadView::OnDraw(CDC* pDC)
{
	CSketchpadDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	CPen pen , *oldpen;
	CObList *list = &pDoc->list;
	if(isFinished)
		list->AddTail((CObject*)new CLine(l));
	POSITION p = list->GetHeadPosition();
	CLine *t;
	while(p){
		t = (CLine*)list->GetNext(p);
		//geometric
		/*
		LOGBRUSH logBrush;
        logBrush.lbStyle = t->style;
        logBrush.lbColor = t->color;
		pen.CreatePen(PS_GEOMETRIC|PS_ENDCAP_ROUND,t->thick,&logBrush);
		*/
		//cosmetic
		pen.CreatePen(t->style,t->thick,t->color);
		oldpen = pDC->SelectObject(&pen);
		pDC->MoveTo(t->start);
		pDC->LineTo(t->end);
		pDC->SelectObject(oldpen);
		pen.DeleteObject();
	}
	isFinished = false;
}

/////////////////////////////////////////////////////////////////////////////
// CSketchpadView printing

BOOL CSketchpadView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CSketchpadView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CSketchpadView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CSketchpadView diagnostics

#ifdef _DEBUG
void CSketchpadView::AssertValid() const
{
	CView::AssertValid();
}

void CSketchpadView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CSketchpadDoc* CSketchpadView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CSketchpadDoc)));
	return (CSketchpadDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CSketchpadView message handlers

void CSketchpadView::OnLButtonDown(UINT nFlags, CPoint point) 
{
	l.start = point;
	isFinished = false;
	
	CView::OnLButtonDown(nFlags, point);
}

void CSketchpadView::OnLButtonUp(UINT nFlags, CPoint point) 
{
	l.end = point;
	isFinished = true;
	Invalidate();

	CView::OnLButtonUp(nFlags, point);
}

void CSketchpadView::OnButtonBlack() 
{
	// TODO: Add your command handler code here
	l.color = RGB(0,0,0);
}

void CSketchpadView::OnButtonBlue() 
{
	// TODO: Add your command handler code here
	l.color = RGB(0,0,255);
}

void CSketchpadView::OnButtonGreen() 
{
	// TODO: Add your command handler code here
	l.color = RGB(0,255,0);
}

void CSketchpadView::OnButtonRed() 
{
	// TODO: Add your command handler code here
	l.color = RGB(255,0,0);
}

void CSketchpadView::OnButtonDash() 
{
	// TODO: Add your command handler code here
	l.style = PS_DASHDOT;
}

void CSketchpadView::OnButtonSolid() 
{
	// TODO: Add your command handler code here
	l.style = PS_SOLID;
}

void CSketchpadView::OnButtonStick() 
{
	// TODO: Add your command handler code here
	l.thick = 4;
}

void CSketchpadView::OnButtonThread() 
{
	// TODO: Add your command handler code here
	l.thick = 1;
}

void CSketchpadView::OnUpdateButtonBlack(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	pCmdUI->SetCheck(l.color == RGB(0,0,0));
}

void CSketchpadView::OnUpdateButtonBlue(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	pCmdUI->SetCheck(l.color == RGB(0,0,255));
}

void CSketchpadView::OnUpdateButtonDash(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	pCmdUI->SetCheck(l.style == PS_DASHDOT);
}

void CSketchpadView::OnUpdateButtonGreen(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	pCmdUI->SetCheck(l.color == RGB(0,255,0));
}

void CSketchpadView::OnUpdateButtonRed(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	pCmdUI->SetCheck(l.color == RGB(255,0,0));
}

void CSketchpadView::OnUpdateButtonSolid(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	pCmdUI->SetCheck(l.style == PS_SOLID);
}

void CSketchpadView::OnUpdateButtonStick(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	pCmdUI->SetCheck(l.thick == 4);
}

void CSketchpadView::OnUpdateButtonThread(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	pCmdUI->SetCheck(l.thick == 1);
}
