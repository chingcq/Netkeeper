// DialHelper.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������
#include "DialHelperDlg.h"

#define  CAPTION_NAME _T("�ǿ����� V1.3 ������")



// CDialHelperApp:
// �йش����ʵ�֣������ DialHelper.cpp
//

class CDialHelperApp : public CWinApp
{
public:
	CDialHelperApp();
	CDialHelperDlg* pDlg;
	CString sExePath;
	CString sLogFileName;
	CString sIniFileName;
	CString GetIniString(CString sec, CString key, CString str);
	BOOL SetIniString(CString sec, CString key, CString str);

	BOOL bAUTO;
	// 	BOOL LOG(UINT nID);
	// 	BOOL LOG(CString sss);

	VOID PostDialMessage(UINT unMsg, WPARAM rasconnstate, DWORD dwError);

	// ��д
public:
	virtual BOOL InitInstance();

	// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CDialHelperApp theApp;