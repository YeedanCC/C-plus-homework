// ��һ��VisualC++.NET����2��.h : ��һ��VisualC++.NET����2�� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C��һ��VisualCNET����2��App:
// �йش����ʵ�֣������ ��һ��VisualC++.NET����2��.cpp
//

class C��һ��VisualCNET����2��App : public CWinApp
{
public:
	C��һ��VisualCNET����2��App();


// ��д
public:
	virtual BOOL InitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C��һ��VisualCNET����2��App theApp;