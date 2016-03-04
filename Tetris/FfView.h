// FfView.h : interface of the CFfView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_FFVIEW_H__12CC4185_8886_4D45_9747_C09A00DDEA67__INCLUDED_)
#define AFX_FFVIEW_H__12CC4185_8886_4D45_9747_C09A00DDEA67__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CFfView : public CView
{protected: // create from serialization only
CFfView();
DECLARE_DYNCREATE(CFfView)
// Attributes
public:
	CFfDoc* GetDocument();
	// Operations
	//�Լ������ 
	/*==================================================================*/
public:
	CBitmap *m_bitmap;
	void showShape(CDC *);      //��ʾͼ��
	void showPanel(CDC *);      //��ʾ��Ϸ���
	void showGround(CDC *);     //��ʾ�ϰ���
	bool isMovedown();          //�ж�ͼ���Ƿ��������䣬������������һЩ�߼�����
	bool isMoveright();         //�ж�ͼ���Ƿ����������ƶ� 
	bool isMoveleft();          //�ж�ͼ���Ƿ����������ƶ�
    void accessShape();         //����ͼ�Σ������ϰ������� 
	void deleteLine(int y);     //����ɾ�еĺ���
	void isdeleteLine();        //ɾ�еĺ���
	void changeStatus();        //�ı�ͼ�ε�״̬������ת
	void showMark(CDC *);            //��ʾ�÷�
	void toShapes_pre(int type1);    //��Ԥ��ͼ�����鸳ֵ
	bool isGameover();            //�ж���Ϸ�Ƿ����
	void showShape_pre(CDC *);
	void getShape();//����ͼ��
	int type; //ͼ�ε�����λ
	int type1;//Ԥ��ͼ������λ
	int status;//ͼ�ε�״̬λ
	void toShapes(int type,int status);//��ͼ�ζ�̬��ֵ
	int left;//ͼ�κ�����
	int top;//ͼ��������
	double mark;//��¼����
	int mark_1;//����


	bool puase;
	void setTime();
	/*==================================================================*/
	// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CFfView)
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	//}}AFX_VIRTUAL
	// Implementation
public:
	virtual ~CFfView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
protected:
	// Generated message map functions
protected:
	//{{AFX_MSG(CFfView)
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnTimer(UINT nIDEvent);
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnGameStart();
	afx_msg void OnGameOver();
	afx_msg void OnGamePause();
	afx_msg void OnUpdateGameStart(CCmdUI* pCmdUI);
	afx_msg void OnUpdateGameOver(CCmdUI* pCmdUI);
	afx_msg void OnUpdateGamePause(CCmdUI* pCmdUI);
	afx_msg void OnLevelNo1();
	afx_msg void OnUpdateLevelNo1(CCmdUI* pCmdUI);
	afx_msg void OnLevelNo2();
	afx_msg void OnUpdateLevelNo2(CCmdUI* pCmdUI);
	afx_msg void OnLevelHigh();
	afx_msg void OnUpdateLevelHigh(CCmdUI* pCmdUI);
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg void OnFileMusic();
	afx_msg void OnUpdateFileMusic(CCmdUI* pCmdUI);
	afx_msg void OnGameRestart();
	afx_msg void OnUpdateGameRestart(CCmdUI* pCmdUI);
	afx_msg void OnAppAbout();
	afx_msg void OnUpdateAppAbout(CCmdUI* pCmdUI);
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};
#ifndef _DEBUG  // debug version in ffView.cpp
inline CFfDoc* CFfView::Getment()
{ return (CFfDoc*)m_pDocument; }
#endif
/////////////////////////////////////////////////////////////////////////////
//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.
#endif // !defined(AFX_FFVIEW_H__82332986_1A9D_487C_9E2F_82C2041DA3CB__INCLUDED_)
