// ��һ��VisualC++.NET����2��View.h : C��һ��VisualCNET����2��View ��Ľӿ�
//


#pragma once


class C��һ��VisualCNET����2��View : public CView
{
protected: // �������л�����
	C��һ��VisualCNET����2��View();
	DECLARE_DYNCREATE(C��һ��VisualCNET����2��View)

// ����
public:
	C��һ��VisualCNET����2��Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~C��һ��VisualCNET����2��View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	int m_nCurColor;
public:
	int DrawCircle(int CurColor, CDC* pDC);
public:
	afx_msg void OnStart();
};

#ifndef _DEBUG  // ��һ��VisualC++.NET����2��View.cpp �еĵ��԰汾
inline C��һ��VisualCNET����2��Doc* C��һ��VisualCNET����2��View::GetDocument() const
   { return reinterpret_cast<C��һ��VisualCNET����2��Doc*>(m_pDocument); }
#endif

