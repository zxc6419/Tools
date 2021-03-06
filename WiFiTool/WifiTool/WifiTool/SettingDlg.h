#pragma once
#include "HostedNetwork.h"
#include "WifiTool.h"

// CSettingDlg 对话框

class CSettingDlg : public CDialog
{
	DECLARE_DYNAMIC(CSettingDlg)

public:
	CSettingDlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CSettingDlg();

// 对话框数据
	enum { IDD = IDD_SETTING_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()

public:
	// SSID与文本框关联变量
	CString m_ssid;
	// Key与文本框关联变量
	CString m_key;
	afx_msg void OnBnClickedSave();
};
