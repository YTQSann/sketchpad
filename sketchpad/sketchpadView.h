// sketchpadView.h : interface of the CSketchpadView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_SKETCHPADVIEW_H__53BA79B1_15AB_4956_9576_64E8C826EA2B__INCLUDED_)
#define AFX_SKETCHPADVIEW_H__53BA79B1_15AB_4956_9576_64E8C826EA2B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CSketchpadView : public CView
{
protected: // create from serialization only
	CSketchpadView();
	DECLARE_DYNCREATE(CSketchpadView)

// Attributes
public:
	CSketchpadDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSketchpadView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CSketchpadView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CSketchpadView)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in sketchpadView.cpp
inline CSketchpadDoc* CSketchpadView::GetDocument()
   { return (CSketchpadDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SKETCHPADVIEW_H__53BA79B1_15AB_4956_9576_64E8C826EA2B__INCLUDED_)
