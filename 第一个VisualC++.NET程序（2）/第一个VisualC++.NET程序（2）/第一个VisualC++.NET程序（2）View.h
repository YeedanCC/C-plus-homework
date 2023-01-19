// 第一个VisualC++.NET程序（2）View.h : C第一个VisualCNET程序（2）View 类的接口
//


#pragma once


class C第一个VisualCNET程序（2）View : public CView
{
protected: // 仅从序列化创建
	C第一个VisualCNET程序（2）View();
	DECLARE_DYNCREATE(C第一个VisualCNET程序（2）View)

// 属性
public:
	C第一个VisualCNET程序（2）Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 实现
public:
	virtual ~C第一个VisualCNET程序（2）View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	int m_nCurColor;
public:
	int DrawCircle(int CurColor, CDC* pDC);
public:
	afx_msg void OnStart();
};

#ifndef _DEBUG  // 第一个VisualC++.NET程序（2）View.cpp 中的调试版本
inline C第一个VisualCNET程序（2）Doc* C第一个VisualCNET程序（2）View::GetDocument() const
   { return reinterpret_cast<C第一个VisualCNET程序（2）Doc*>(m_pDocument); }
#endif

