//////////////////////////////////////////////////////////////////////////
// �ǿ��û�������ͷ�ļ�
// ����:Phoenix
// �汾:1.3
//////////////////////////////////////////////////////////////////////////

#include <afx.h>
class CXKUsername
{
public:
	CXKUsername(CString username, INT ver = 32, long lasttimec = 0);
	CString Realusername();
	long GetLastTimeC();
private:
	INT m_ver;				//�ǿյİ汾��V12��V18��V29��V32
	long m_lasttimec;		//�ϴγɹ���ʱ�䴦��
	CString m_username;		//ԭʼ�û���
	CString m_realusername;	//�������û���
	CString RADIUS;
	CString LR;
};
