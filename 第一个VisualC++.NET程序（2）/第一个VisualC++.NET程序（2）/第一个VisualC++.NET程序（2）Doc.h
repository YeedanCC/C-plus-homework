// ��һ��VisualC++.NET����2��Doc.h : C��һ��VisualCNET����2��Doc ��Ľӿ�
//


#pragma once


class C��һ��VisualCNET����2��Doc : public CDocument
{
protected: // �������л�����
	C��һ��VisualCNET����2��Doc();
	DECLARE_DYNCREATE(C��һ��VisualCNET����2��Doc)

// ����
public:

// ����
public:

// ��д
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);

// ʵ��
public:
	virtual ~C��һ��VisualCNET����2��Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};


