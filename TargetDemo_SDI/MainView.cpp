// MainView.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "TargetDemo_SDI.h"
#include "MainView.h"
#include "tinyxml2.h"


// CMainView

IMPLEMENT_DYNCREATE(CMainView, CFormView)

CMainView::CMainView()
	: CFormView(IDD_MAINVIEW)
	, ti_id(0)
	, ti_type(0)
	, ti_x(0)
	, ti_y(0)
	, ti_path(_T(""))
{

}

CMainView::~CMainView()
{
}

void CMainView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT_ID, ti_id);
	DDX_Text(pDX, IDC_EDIT_TYPE, ti_type);
	DDX_Text(pDX, IDC_EDIT_X, ti_x);
	DDX_Text(pDX, IDC_EDIT_Y, ti_y);
	DDX_Text(pDX, IDC_EDIT_PATH, ti_path);
}

BEGIN_MESSAGE_MAP(CMainView, CFormView)
	ON_BN_CLICKED(IDC_BUTTON_LOAD, &CMainView::OnBnClickedButtonLoad)
	ON_BN_CLICKED(IDC_BUTTON_SAVE, &CMainView::OnBnClickedButtonSave)
	ON_BN_CLICKED(IDC_BUTTON_INPUT, &CMainView::OnBnClickedButtonInput)
	ON_BN_CLICKED(IDC_BUTTON_Clear, &CMainView::OnBnClickedButtonClear)
END_MESSAGE_MAP()


// CMainView �����Դϴ�.

#ifdef _DEBUG
void CMainView::AssertValid() const
{
	CFormView::AssertValid();
}

#ifndef _WIN32_WCE
void CMainView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif
#endif //_DEBUG


// CMainView �޽��� ó�����Դϴ�.


void CMainView::OnBnClickedButtonLoad()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
}


void CMainView::OnBnClickedButtonSave()
{
	CString str = _T("XML files(*.xml)|*.xml");
	CFileDialog dlg(false, NULL, NULL, OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, str, this);
	if (IDOK == dlg.DoModal())
	{
		tinyxml2::XMLDocument doc;
		tinyxml2::XMLDeclaration* pDecl = doc.NewDeclaration();
		doc.LinkEndChild(pDecl);

		// Root Node
		tinyxml2::XMLElement* pRootNode = doc.NewElement("Target_Information");
		doc.LinkEndChild(pRootNode);

		// child Node
		for (int i = 0; i < tVector.size(); i++)
		{
			targetInform ti;
			ti = tVector.at(i);
			tinyxml2::XMLElement* pNode = doc.NewElement("Field");
			pRootNode->LinkEndChild(pNode);
			pNode->SetAttribute("id", ti.id);     //id
			pNode->SetAttribute("type", ti.type); //type
			pNode->SetAttribute("x", ti.x); // X (�Ҽ���)
			pNode->SetAttribute("y", ti.y); // Y (�Ҽ���)
			pNode->SetAttribute("path", (CStringA)ti.path);
		}

		// .xml ����
		CString strSavePathName = dlg.GetPathName();
		doc.SaveFile((CStringA)strSavePathName);

	}
}


void CMainView::OnBnClickedButtonInput()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
}


void CMainView::OnBnClickedButtonClear()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
}


void CMainView::VectorAdd(int id, int type, double x, double y, CString path)
{
	targetInform ti;
	ti.id = id;
	ti.type = type;
	ti.x = x;
	ti.y = y;
	ti.path = path;
	tVector.push_back(ti);
}