// ��һ��VisualC++.NET����2��Doc.cpp : C��һ��VisualCNET����2��Doc ���ʵ��
//

#include "stdafx.h"
#include "��һ��VisualC++.NET����2��.h"

#include "��һ��VisualC++.NET����2��Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��һ��VisualCNET����2��Doc

IMPLEMENT_DYNCREATE(C��һ��VisualCNET����2��Doc, CDocument)

BEGIN_MESSAGE_MAP(C��һ��VisualCNET����2��Doc, CDocument)
END_MESSAGE_MAP()


// C��һ��VisualCNET����2��Doc ����/����

C��һ��VisualCNET����2��Doc::C��һ��VisualCNET����2��Doc()
{
	// TODO: �ڴ����һ���Թ������

}

C��һ��VisualCNET����2��Doc::~C��һ��VisualCNET����2��Doc()
{
}

BOOL C��һ��VisualCNET����2��Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// C��һ��VisualCNET����2��Doc ���л�

void C��һ��VisualCNET����2��Doc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: �ڴ���Ӵ洢����
	}
	else
	{
		// TODO: �ڴ���Ӽ��ش���
	}
}


// C��һ��VisualCNET����2��Doc ���

#ifdef _DEBUG
void C��һ��VisualCNET����2��Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void C��һ��VisualCNET����2��Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// C��һ��VisualCNET����2��Doc ����
