
// MFCApplication3Dlg.h : header file
//

#pragma once
#include "afxwin.h"
#include "afxcmn.h"
#include <vector>
#include <cctype>
#include <algorithm>
#include "main.h"

// CMFCApplication3Dlg dialog
class CMFCApplication3Dlg : public CDialogEx
{
// Construction
public:
	CMFCApplication3Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCAPPLICATION3_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
private:
	CButton m_BtnClose;
	CButton m_RunMatch;
	bool pathInput[13];
	bool numColumnsInput[13];
	bool matchWithColumnInput[13];
	bool datatypeInput[13];
	bool skipInput[13];
public:
	afx_msg void OnBnClickedClose();
	afx_msg void OnEnChangenumcolumnsmainfile();	
	afx_msg void OnBnClickedMatch();
	CEdit pathToFile0;
	CEdit columnsFile0;
	CEdit matchFile0;
	CEdit typeFile0;
	CEdit skipFile0;
	afx_msg void OnEnKillfocusnumcolumnsfile0();
	afx_msg void OnEnKillfocusmatchcolumnfile0();
	afx_msg void OnEnKillfocusmatchtypefile0();
	afx_msg void OnEnKillfocusskipcolumnsfile0();
	CEdit pathToFile1;
	CEdit columnsFile1;
	CEdit matchFile1;
	CEdit skipFile1;
	afx_msg void OnEnKillfocusnumcolumnsfile1();
	afx_msg void OnEnKillfocusmatchcolumnfile1();
	afx_msg void OnEnKillfocusskipcolumnsfile1();
	CEdit pathToFile2;
	CEdit columnsFile2;
	CEdit matchFile2;
	CEdit skipFile2;
	afx_msg void OnEnKillfocusnumcolumnsfile2();
	afx_msg void OnEnKillfocusmatchcolumnfile2();
	afx_msg void OnEnKillfocusskipcolumnsfile2();
	CEdit pathToFile3;
	CEdit columnsFile3;
	CEdit matchFile3;
	CEdit skipFile3;
	afx_msg void OnEnKillfocusnumcolumnsfile3();
	afx_msg void OnEnKillfocusmatchcolumnfile3();
	afx_msg void OnEnKillfocusskipcolumnsfile3();
	CEdit pathToFile4;
	CEdit columnsFile4;
	CEdit matchFile4;
	CEdit skipFile4;
	afx_msg void OnEnKillfocusnumcolumnsfile4();
	afx_msg void OnEnKillfocusmatchcolumnfile4();
	afx_msg void OnEnKillfocusskipcolumnsfile4();
	CEdit pathToFile5;
	CEdit columnsFile5;
	CEdit matchFile5;
	CEdit skipFile5;
	afx_msg void OnEnKillfocusnumcolumnsfile5();
	afx_msg void OnEnKillfocusmatchcolumnfile5();
	afx_msg void OnEnKillfocusskipcolumnsfile5();
	CEdit pathToFile6;
	CEdit columnsFile6;
	CEdit matchFile6;
	CEdit skipFile6;
	afx_msg void OnEnKillfocusnumcolumnsfile6();
	afx_msg void OnEnKillfocusmatchcolumnfile6();
	afx_msg void OnEnKillfocusskipcolumnsfile6();
	CEdit pathToFile7;
	CEdit columnsFile7;
	CEdit matchFile7;
	CEdit skipFile7;
	afx_msg void OnEnKillfocusnumcolumnsfile7();
	afx_msg void OnEnKillfocusmatchcolumnfile7();
	afx_msg void OnEnKillfocusskipcolumnsfile7();
	CEdit pathToFile8;
	CEdit columnsFile8;
	CEdit matchFile8;
	CEdit skipFile8;
	afx_msg void OnEnKillfocusnumcolumnsfile8();
	afx_msg void OnEnKillfocusmatchcolumnfile8();
	afx_msg void OnEnKillfocusskipcolumnsfile8();
	CEdit pathToFile9;
	CEdit columnsFile9;
	CEdit matchFile9;
	CEdit skipFile9;
	afx_msg void OnEnKillfocusnumcolumnsfile9();
	afx_msg void OnEnKillfocusmatchcolumnfile9();
	afx_msg void OnEnKillfocusskipcolumnsfile9();
	CEdit pathToFile10;
	CEdit columnsFile10;
	CEdit matchFile10;
	CEdit skipFile10;
	afx_msg void OnEnKillfocusnumcolumnsfile10();
	afx_msg void OnEnKillfocusmatchcolumnfile10();
	afx_msg void OnEnKillfocusskipcolumnsfile10();
	CEdit pathToFile11;
	CEdit columnsFile11;
	CEdit matchFile11;
	CEdit skipFile11;
	afx_msg void OnEnKillfocusnumcolumnsfile11();
	afx_msg void OnEnKillfocusmatchcolumnfile11();
	afx_msg void OnEnKillfocusskipcolumnsfile11();
	CEdit pathToFile12;
	CEdit columnsFile12;
	CEdit matchFile12;
	CEdit skipFile12;
	afx_msg void OnEnKillfocusnumcolumnsfile12();
	afx_msg void OnEnKillfocusmatchcolumnfile12();
	afx_msg void OnEnKillfocusskipcolumnsfile12();
	CEdit numofFiles;
	afx_msg void OnEnKillfocusnumfiles();
	CEdit destinationPath;
};
