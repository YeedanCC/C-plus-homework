// ��һ��VisualC++.NET����2��View.cpp : C��һ��VisualCNET����2��View ���ʵ��
//

#include "stdafx.h"
#include "��һ��VisualC++.NET����2��.h"

#include "��һ��VisualC++.NET����2��Doc.h"
#include "��һ��VisualC++.NET����2��View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��һ��VisualCNET����2��View

IMPLEMENT_DYNCREATE(C��һ��VisualCNET����2��View, CView)

BEGIN_MESSAGE_MAP(C��һ��VisualCNET����2��View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_START, &C��һ��VisualCNET����2��View::OnStart)
END_MESSAGE_MAP()

// C��һ��VisualCNET����2��View ����/����

C��һ��VisualCNET����2��View::C��һ��VisualCNET����2��View()
: m_nCurColor(0)
{
	// TODO: �ڴ˴���ӹ������

}

C��һ��VisualCNET����2��View::~C��һ��VisualCNET����2��View()
{
}

BOOL C��һ��VisualCNET����2��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��һ��VisualCNET����2��View ����

void C��һ��VisualCNET����2��View::OnDraw(CDC* pDC)
{
	C��һ��VisualCNET����2��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	DrawCircle(m_nCurColor,pDC);

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C��һ��VisualCNET����2��View ��ӡ

BOOL C��һ��VisualCNET����2��View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void C��һ��VisualCNET����2��View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void C��һ��VisualCNET����2��View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// C��һ��VisualCNET����2��View ���

#ifdef _DEBUG
void C��һ��VisualCNET����2��View::AssertValid() const
{
	CView::AssertValid();
}

void C��һ��VisualCNET����2��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��һ��VisualCNET����2��Doc* C��һ��VisualCNET����2��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��һ��VisualCNET����2��Doc)));
	return (C��һ��VisualCNET����2��Doc*)m_pDocument;
}
#endif //_DEBUG


// C��һ��VisualCNET����2��View ��Ϣ�������

inline int C��һ��VisualCNET����2��View::DrawCircle(int CurColor, CDC* pDC)
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

void C��һ��VisualCNET����2��View::OnStart()
{
	// TODO: �ڴ���������������
}
