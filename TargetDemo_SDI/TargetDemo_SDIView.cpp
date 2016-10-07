
// TargetDemo_SDIView.cpp : CTargetDemo_SDIView 클래스의 구현
//

#include "stdafx.h"
// SHARED_HANDLERS는 미리 보기, 축소판 그림 및 검색 필터 처리기를 구현하는 ATL 프로젝트에서 정의할 수 있으며
// 해당 프로젝트와 문서 코드를 공유하도록 해 줍니다.
#ifndef SHARED_HANDLERS
#include "TargetDemo_SDI.h"
#endif

#include "TargetDemo_SDIDoc.h"
#include "TargetDemo_SDIView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CTargetDemo_SDIView

IMPLEMENT_DYNCREATE(CTargetDemo_SDIView, CView)

BEGIN_MESSAGE_MAP(CTargetDemo_SDIView, CView)
	// 표준 인쇄 명령입니다.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CTargetDemo_SDIView 생성/소멸

CTargetDemo_SDIView::CTargetDemo_SDIView()
{
	// TODO: 여기에 생성 코드를 추가합니다.

}

CTargetDemo_SDIView::~CTargetDemo_SDIView()
{
}

BOOL CTargetDemo_SDIView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs를 수정하여 여기에서
	//  Window 클래스 또는 스타일을 수정합니다.

	return CView::PreCreateWindow(cs);
}

// CTargetDemo_SDIView 그리기

void CTargetDemo_SDIView::OnDraw(CDC* /*pDC*/)
{
	CTargetDemo_SDIDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 여기에 원시 데이터에 대한 그리기 코드를 추가합니다.
}


// CTargetDemo_SDIView 인쇄

BOOL CTargetDemo_SDIView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 기본적인 준비
	return DoPreparePrinting(pInfo);
}

void CTargetDemo_SDIView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄하기 전에 추가 초기화 작업을 추가합니다.
}

void CTargetDemo_SDIView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄 후 정리 작업을 추가합니다.
}


// CTargetDemo_SDIView 진단

#ifdef _DEBUG
void CTargetDemo_SDIView::AssertValid() const
{
	CView::AssertValid();
}

void CTargetDemo_SDIView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CTargetDemo_SDIDoc* CTargetDemo_SDIView::GetDocument() const // 디버그되지 않은 버전은 인라인으로 지정됩니다.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CTargetDemo_SDIDoc)));
	return (CTargetDemo_SDIDoc*)m_pDocument;
}
#endif //_DEBUG


// CTargetDemo_SDIView 메시지 처리기
