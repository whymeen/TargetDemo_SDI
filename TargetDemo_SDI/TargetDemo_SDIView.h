
// TargetDemo_SDIView.h : CTargetDemo_SDIView Ŭ������ �������̽�
//

#pragma once


class CTargetDemo_SDIView : public CView
{
protected: // serialization������ ��������ϴ�.
	CTargetDemo_SDIView();
	DECLARE_DYNCREATE(CTargetDemo_SDIView)

// Ư���Դϴ�.
public:
	CTargetDemo_SDIDoc* GetDocument() const;

// �۾��Դϴ�.
public:

// �������Դϴ�.
public:
	virtual void OnDraw(CDC* pDC);  // �� �並 �׸��� ���� �����ǵǾ����ϴ�.
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// �����Դϴ�.
public:
	virtual ~CTargetDemo_SDIView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // TargetDemo_SDIView.cpp�� ����� ����
inline CTargetDemo_SDIDoc* CTargetDemo_SDIView::GetDocument() const
   { return reinterpret_cast<CTargetDemo_SDIDoc*>(m_pDocument); }
#endif

