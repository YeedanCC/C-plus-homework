// 第一个VisualC++.NET程序（2）Doc.cpp : C第一个VisualCNET程序（2）Doc 类的实现
//

#include "stdafx.h"
#include "第一个VisualC++.NET程序（2）.h"

#include "第一个VisualC++.NET程序（2）Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第一个VisualCNET程序（2）Doc

IMPLEMENT_DYNCREATE(C第一个VisualCNET程序（2）Doc, CDocument)

BEGIN_MESSAGE_MAP(C第一个VisualCNET程序（2）Doc, CDocument)
END_MESSAGE_MAP()


// C第一个VisualCNET程序（2）Doc 构造/析构

C第一个VisualCNET程序（2）Doc::C第一个VisualCNET程序（2）Doc()
{
	// TODO: 在此添加一次性构造代码

}

C第一个VisualCNET程序（2）Doc::~C第一个VisualCNET程序（2）Doc()
{
}

BOOL C第一个VisualCNET程序（2）Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: 在此添加重新初始化代码
	// (SDI 文档将重用该文档)

	return TRUE;
}




// C第一个VisualCNET程序（2）Doc 序列化

void C第一个VisualCNET程序（2）Doc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: 在此添加存储代码
	}
	else
	{
		// TODO: 在此添加加载代码
	}
}


// C第一个VisualCNET程序（2）Doc 诊断

#ifdef _DEBUG
void C第一个VisualCNET程序（2）Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void C第一个VisualCNET程序（2）Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// C第一个VisualCNET程序（2）Doc 命令
