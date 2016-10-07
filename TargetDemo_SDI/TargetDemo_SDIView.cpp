
// TargetDemo_SDIView.cpp : CTargetDemo_SDIView Ŭ������ ����
//

#include "stdafx.h"
// SHARED_HANDLERS�� �̸� ����, ����� �׸� �� �˻� ���� ó���⸦ �����ϴ� ATL ������Ʈ���� ������ �� ������
// �ش� ������Ʈ�� ���� �ڵ带 �����ϵ��� �� �ݴϴ�.
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
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CTargetDemo_SDIView ����/�Ҹ�

CTargetDemo_SDIView::CTargetDemo_SDIView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CTargetDemo_SDIView::~CTargetDemo_SDIView()
{
}

BOOL CTargetDemo_SDIView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CTargetDemo_SDIView �׸���

void CTargetDemo_SDIView::OnDraw(CDC* /*pDC*/)
{
	CTargetDemo_SDIDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CTargetDemo_SDIView �μ�

BOOL CTargetDemo_SDIView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CTargetDemo_SDIView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CTargetDemo_SDIView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// CTargetDemo_SDIView ����

#ifdef _DEBUG
void CTargetDemo_SDIView::AssertValid() const
{
	CView::AssertValid();
}

void CTargetDemo_SDIView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CTargetDemo_SDIDoc* CTargetDemo_SDIView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CTargetDemo_SDIDoc)));
	return (CTargetDemo_SDIDoc*)m_pDocument;
}
#endif //_DEBUG


// CTargetDemo_SDIView �޽��� ó����
