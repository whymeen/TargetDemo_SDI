#include <vector>

#pragma once



// CMainView 폼 뷰입니다.

class CMainView : public CFormView
{
	DECLARE_DYNCREATE(CMainView)

protected:
	CMainView();           // 동적 만들기에 사용되는 protected 생성자입니다.
	virtual ~CMainView();

public:
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MAINVIEW };
#endif
#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

	typedef	struct targetInform {
		int id;
		int type;
		double x;
		double y;
		CString path;
	}targetInform;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButtonLoad();
	afx_msg void OnBnClickedButtonSave();
	afx_msg void OnBnClickedButtonInput();
	afx_msg void OnBnClickedButtonClear();
	std::vector<targetInform> tVector;
	std::vector<targetInform>::iterator tVec_it;
	void VectorAdd(int id, int type, double x, double y, CString path);
	int ti_id;
	int ti_type;
	double ti_x;
	double ti_y;
	CString ti_path;
};


