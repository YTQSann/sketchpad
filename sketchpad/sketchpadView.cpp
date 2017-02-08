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
