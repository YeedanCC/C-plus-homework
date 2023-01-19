// 第一个VisualC++.NET程序（2）Doc.h : C第一个VisualCNET程序（2）Doc 类的接口
//


#pragma once


class C第一个VisualCNET程序（2）Doc : public CDocument
{
protected: // 仅从序列化创建
	C第一个VisualCNET程序（2）Doc();
	DECLARE_DYNCREATE(C第一个VisualCNET程序（2）Doc)

// 属性
public:

// 操作
public:

// 重写
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);

// 实现
public:
	virtual ~C第一个VisualCNET程序（2）Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};


