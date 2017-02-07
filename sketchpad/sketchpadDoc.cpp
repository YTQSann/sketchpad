// sketchpadDoc.cpp : implementation of the CSketchpadDoc class
//

#include "stdafx.h"
#include "sketchpad.h"

#include "sketchpadDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSketchpadDoc

IMPLEMENT_DYNCREATE(CSketchpadDoc, CDocument)

BEGIN_MESSAGE_MAP(CSketchpadDoc, CDocument)
	//{{AFX_MSG_MAP(CSketchpadDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSketchpadDoc construction/destruction

CSketchpadDoc::CSketchpadDoc()
{
	// TODO: add one-time construction code here

}

CSketchpadDoc::~CSketchpadDoc()
{
}

BOOL CSketchpadDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CSketchpadDoc serialization

void CSketchpadDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CSketchpadDoc diagnostics

#ifdef _DEBUG
void CSketchpadDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CSketchpadDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CSketchpadDoc commands
