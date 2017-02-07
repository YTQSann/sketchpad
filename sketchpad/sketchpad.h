// sketchpad.h : main header file for the SKETCHPAD application
//

#if !defined(AFX_SKETCHPAD_H__408E7FAF_670F_486A_8887_638EAB6D5307__INCLUDED_)
#define AFX_SKETCHPAD_H__408E7FAF_670F_486A_8887_638EAB6D5307__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CSketchpadApp:
// See sketchpad.cpp for the implementation of this class
//

class CSketchpadApp : public CWinApp
{
public:
	CSketchpadApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSketchpadApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CSketchpadApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SKETCHPAD_H__408E7FAF_670F_486A_8887_638EAB6D5307__INCLUDED_)
