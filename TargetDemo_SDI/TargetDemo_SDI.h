
// TargetDemo_SDI.h : TargetDemo_SDI ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CTargetDemo_SDIApp:
// �� Ŭ������ ������ ���ؼ��� TargetDemo_SDI.cpp�� �����Ͻʽÿ�.
//

class CTargetDemo_SDIApp : public CWinApp
{
public:
	CTargetDemo_SDIApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CTargetDemo_SDIApp theApp;
