// sketchpadDoc.h : interface of the CSketchpadDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_SKETCHPADDOC_H__0E1BBDE3_B489_4F96_BBFD_9AAEC6E32049__INCLUDED_)
#define AFX_SKETCHPADDOC_H__0E1BBDE3_B489_4F96_BBFD_9AAEC6E32049__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CSketchpadDoc : public CDocument
{
protected: // create from serialization only
	CSketchpadDoc();
	DECLARE_DYNCREATE(CSketchpadDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSketchpadDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CSketchpadDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CSketchpadDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SKETCHPADDOC_H__0E1BBDE3_B489_4F96_BBFD_9AAEC6E32049__INCLUDED_)
