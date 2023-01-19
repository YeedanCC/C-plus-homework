// 第一个VisualC++.NET程序（2）.h : 第一个VisualC++.NET程序（2） 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// C第一个VisualCNET程序（2）App:
// 有关此类的实现，请参阅 第一个VisualC++.NET程序（2）.cpp
//

class C第一个VisualCNET程序（2）App : public CWinApp
{
public:
	C第一个VisualCNET程序（2）App();


// 重写
public:
	virtual BOOL InitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C第一个VisualCNET程序（2）App theApp;