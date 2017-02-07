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
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
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
	// TODO: add construction code here

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
	// TODO: add draw code for native data here
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
