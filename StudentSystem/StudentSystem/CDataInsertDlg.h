#pragma once


// CDataInsertDlg 对话框

//学生信息的新建插入
class CDataInsertDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CDataInsertDlg)

public:
	CDataInsertDlg(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CDataInsertDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_INSERT };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
private:
	// 学生姓名的输入
//	CEdit student_name;
	// 学生的学号
//	CEdit student_num;
public:
	
private:
	// 学生的年龄
//	CEdit student_age;=
public:
	afx_msg void OnBnClickedButton1();
private:
	// 学生姓名
	CString student_name;
	// 学生的学号
	CString student_num;
	// 学生的年龄
	CString student_age;
	// 学生的性别
	CComboBox student_sex;
	CString sex;//用于存储sex的字符
	bool flag = false;
	bool ENTER = true;
public:
	friend class CStudentSystemDoc;
	afx_msg void OnCbnSelchangeCombo1();
	//afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedCancel();
	virtual void OnOK();
};
