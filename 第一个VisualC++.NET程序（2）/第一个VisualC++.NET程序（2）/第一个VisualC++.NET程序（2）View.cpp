// 第一个VisualC++.NET程序（2）View.cpp : C第一个VisualCNET程序（2）View 类的实现
//

#include "stdafx.h"
#include "第一个VisualC++.NET程序（2）.h"

#include "第一个VisualC++.NET程序（2）Doc.h"
#include "第一个VisualC++.NET程序（2）View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第一个VisualCNET程序（2）View

IMPLEMENT_DYNCREATE(C第一个VisualCNET程序（2）View, CView)

BEGIN_MESSAGE_MAP(C第一个VisualCNET程序（2）View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_START, &C第一个VisualCNET程序（2）View::OnStart)
END_MESSAGE_MAP()

// C第一个VisualCNET程序（2）View 构造/析构

C第一个VisualCNET程序（2）View::C第一个VisualCNET程序（2）View()
: m_nCurColor(0)
{
	// TODO: 在此处添加构造代码

}

C第一个VisualCNET程序（2）View::~C第一个VisualCNET程序（2）View()
{
}

BOOL C第一个VisualCNET程序（2）View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第一个VisualCNET程序（2）View 绘制

void C第一个VisualCNET程序（2）View::OnDraw(CDC* pDC)
{
	C第一个VisualCNET程序（2）Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	DrawCircle(m_nCurColor,pDC);

	// TODO: 在此处为本机数据添加绘制代码
}


// C第一个VisualCNET程序（2）View 打印

BOOL C第一个VisualCNET程序（2）View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void C第一个VisualCNET程序（2）View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void C第一个VisualCNET程序（2）View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清除过程
}


// C第一个VisualCNET程序（2）View 诊断

#ifdef _DEBUG
void C第一个VisualCNET程序（2）View::AssertValid() const
{
	CView::AssertValid();
}

void C第一个VisualCNET程序（2）View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第一个VisualCNET程序（2）Doc* C第一个VisualCNET程序（2）View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第一个VisualCNET程序（2）Doc)));
	return (C第一个VisualCNET程序（2）Doc*)m_pDocument;
}
#endif //_DEBUG


// C第一个VisualCNET程序（2）View 消息处理程序

inline int C第一个VisualCNET程序（2）View::DrawCircle(int CurColor, CDC* pDC)
{
	pDC->Rectangle(80,80,600,440);
		CRect rRect(100,100,200,200);
		CRect gRect(210,100,310,200);
		CRect yRect(320,100,420,200);
		CRect blackRect(150,0,250,100);
		CRect blueRect(260,0,360,100);
		CBrush rBrush(RGB(255,0,0));
		CBrush gBrush(RGB(0,255,0));
		CBrush yBrush(RGB(255,255,0));
		CBrush blackBrush(RGB(0,0,0));
		CBrush blueBrush(RGB(0,0,255));
		    if(m_nCurColor==0)
			{pDC->Ellipse(&rRect);
			pDC->Ellipse(210,100,310,200);				
			pDC->Ellipse(320,100,420,200);
			pDC->Ellipse(150,160,250,260);
            pDC->Ellipse(260,160,360,260);}
	return 0;
}

void C第一个VisualCNET程序（2）View::OnStart()
{
	// TODO: 在此添加命令处理程序代码
}
