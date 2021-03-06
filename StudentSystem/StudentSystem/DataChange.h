#pragma once


// DataChange 对话框

class DataChange : public CDialogEx
{
	DECLARE_DYNAMIC(DataChange)

public:
	DataChange(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~DataChange();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CHANGE };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
private:
	CString name;
	CString num;
	CComboBox sex_index;
	CString age;
	CString sex;
	bool change = false;

	friend class CStudentSystemView;
	friend class CStudentSystemDoc;
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnCbnSelchangeCombo1();
	afx_msg void OnBnClickedCancel2();
	virtual BOOL OnInitDialog();
};
