
// MFCApplication3Dlg.cpp : implementation file
//

#define _CRT_SECURE_NO_WARNINGS

#include "stdafx.h"
#include "MFCApplication3.h"
#include "MFCApplication3Dlg.h"
#include "afxdialogex.h"
#include <conio.h>
#include <string>
#include <sstream>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAboutDlg dialog used for App About

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CMFCApplication3Dlg dialog



CMFCApplication3Dlg::CMFCApplication3Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_MFCAPPLICATION3_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMFCApplication3Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDCLOSE, m_BtnClose);
	DDX_Control(pDX, IDMATCH, m_RunMatch);
	DDX_Control(pDX, pathFile0, pathToFile0);
	DDX_Control(pDX, pathFile1, pathToFile1);
	DDX_Control(pDX, pathFile2, pathToFile2);
	DDX_Control(pDX, pathFile3, pathToFile3);
	DDX_Control(pDX, pathFile4, pathToFile4);
	DDX_Control(pDX, pathFile5, pathToFile5);
	DDX_Control(pDX, pathFile6, pathToFile6);
	DDX_Control(pDX, pathFile7, pathToFile7);
	DDX_Control(pDX, pathFile8, pathToFile8);
	DDX_Control(pDX, pathFile9, pathToFile9);
	DDX_Control(pDX, pathFile10, pathToFile10);
	DDX_Control(pDX, pathFile11, pathToFile11);
	DDX_Control(pDX, pathFile12, pathToFile12);
	DDX_Control(pDX, numColumnsFile0, columnsFile0);
	DDX_Control(pDX, matchColumnFile0, matchFile0);
	DDX_Control(pDX, matchTypeFile0, typeFile0);
	DDX_Control(pDX, skipColumnsFile0, skipFile0);
	DDX_Control(pDX, numColumnsFile1, columnsFile1);
	DDX_Control(pDX, matchColumnFile1, matchFile1);
	DDX_Control(pDX, skipColumnsFile1, skipFile1);
	DDX_Control(pDX, numColumnsFile2, columnsFile2);
	DDX_Control(pDX, matchColumnFile2, matchFile2);
	DDX_Control(pDX, skipColumnsFile2, skipFile2);
	DDX_Control(pDX, numColumnsFile3, columnsFile3);
	DDX_Control(pDX, matchColumnFile3, matchFile3);
	DDX_Control(pDX, skipColumnsFile3, skipFile3);
	DDX_Control(pDX, numColumnsFile4, columnsFile4);
	DDX_Control(pDX, matchColumnFile4, matchFile4);
	DDX_Control(pDX, skipColumnsFile4, skipFile4);
	DDX_Control(pDX, numColumnsFile5, columnsFile5);
	DDX_Control(pDX, matchColumnFile5, matchFile5);
	DDX_Control(pDX, skipColumnsFile5, skipFile5);
	DDX_Control(pDX, numColumnsFile6, columnsFile6);
	DDX_Control(pDX, matchColumnFile6, matchFile6);
	DDX_Control(pDX, skipColumnsFile6, skipFile6);
	DDX_Control(pDX, numColumnsFile7, columnsFile7);
	DDX_Control(pDX, matchColumnFile7, matchFile7);
	DDX_Control(pDX, skipColumnsFile7, skipFile7);
	DDX_Control(pDX, numColumnsFile8, columnsFile8);
	DDX_Control(pDX, matchColumnFile8, matchFile8);
	DDX_Control(pDX, skipColumnsFile8, skipFile8);
	DDX_Control(pDX, numColumnsFile9, columnsFile9);
	DDX_Control(pDX, matchColumnFile9, matchFile9);
	DDX_Control(pDX, skipColumnsFile9, skipFile9);
	DDX_Control(pDX, numColumnsFile10, columnsFile10);
	DDX_Control(pDX, matchColumnFile10, matchFile10);
	DDX_Control(pDX, skipColumnsFile10, skipFile10);
	DDX_Control(pDX, numColumnsFile11, columnsFile11);
	DDX_Control(pDX, matchColumnFile11, matchFile11);
	DDX_Control(pDX, skipColumnsFile11, skipFile11);
	DDX_Control(pDX, numColumnsFile12, columnsFile12);
	DDX_Control(pDX, matchColumnFile12, matchFile12);
	DDX_Control(pDX, skipColumnsFile12, skipFile12);
	DDX_Control(pDX, numFiles, numofFiles);
	DDX_Control(pDX, destPath, destinationPath);
	DDX_Control(pDX, sheetname1, sheetName1);
	DDX_Control(pDX, sheetname2, sheetName2);
	DDX_Control(pDX, sheetname3, sheetName3);
	DDX_Control(pDX, sheetname4, sheetName4);
	DDX_Control(pDX, sheetname5, sheetName5);
	DDX_Control(pDX, sheetname6, sheetName6);
	DDX_Control(pDX, sheetname7, sheetName7);
	DDX_Control(pDX, sheetname8, sheetName8);
	DDX_Control(pDX, sheetname9, sheetName9);
	DDX_Control(pDX, sheetname10, sheetName10);
	DDX_Control(pDX, sheetname11, sheetName11);
	DDX_Control(pDX, sheetname12, sheetName12);

}

BEGIN_MESSAGE_MAP(CMFCApplication3Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDCLOSE, &CMFCApplication3Dlg::OnBnClickedClose)
	ON_BN_CLICKED(IDMATCH, &CMFCApplication3Dlg::OnBnClickedMatch)
	ON_EN_KILLFOCUS(numColumnsFile0, &CMFCApplication3Dlg::OnEnKillfocusnumcolumnsfile0)
	ON_EN_KILLFOCUS(matchColumnFile0, &CMFCApplication3Dlg::OnEnKillfocusmatchcolumnfile0)
	ON_EN_KILLFOCUS(matchTypeFile0, &CMFCApplication3Dlg::OnEnKillfocusmatchtypefile0)
	ON_EN_KILLFOCUS(skipColumnsFile0, &CMFCApplication3Dlg::OnEnKillfocusskipcolumnsfile0)
	ON_EN_KILLFOCUS(numColumnsFile1, &CMFCApplication3Dlg::OnEnKillfocusnumcolumnsfile1)
	ON_EN_KILLFOCUS(matchColumnFile1, &CMFCApplication3Dlg::OnEnKillfocusmatchcolumnfile1)
	ON_EN_KILLFOCUS(skipColumnsFile1, &CMFCApplication3Dlg::OnEnKillfocusskipcolumnsfile1)
	ON_EN_KILLFOCUS(numColumnsFile2, &CMFCApplication3Dlg::OnEnKillfocusnumcolumnsfile2)
	ON_EN_KILLFOCUS(matchColumnFile2, &CMFCApplication3Dlg::OnEnKillfocusmatchcolumnfile2)
	ON_EN_KILLFOCUS(skipColumnsFile2, &CMFCApplication3Dlg::OnEnKillfocusskipcolumnsfile2)
	ON_EN_KILLFOCUS(numColumnsFile3, &CMFCApplication3Dlg::OnEnKillfocusnumcolumnsfile3)
	ON_EN_KILLFOCUS(matchColumnFile3, &CMFCApplication3Dlg::OnEnKillfocusmatchcolumnfile3)
	ON_EN_KILLFOCUS(skipColumnsFile3, &CMFCApplication3Dlg::OnEnKillfocusskipcolumnsfile3)
	ON_EN_KILLFOCUS(numColumnsFile4, &CMFCApplication3Dlg::OnEnKillfocusnumcolumnsfile4)
	ON_EN_KILLFOCUS(matchColumnFile4, &CMFCApplication3Dlg::OnEnKillfocusmatchcolumnfile4)
	ON_EN_KILLFOCUS(skipColumnsFile4, &CMFCApplication3Dlg::OnEnKillfocusskipcolumnsfile4)
	ON_EN_KILLFOCUS(numColumnsFile5, &CMFCApplication3Dlg::OnEnKillfocusnumcolumnsfile5)
	ON_EN_KILLFOCUS(matchColumnFile5, &CMFCApplication3Dlg::OnEnKillfocusmatchcolumnfile5)
	ON_EN_KILLFOCUS(skipColumnsFile5, &CMFCApplication3Dlg::OnEnKillfocusskipcolumnsfile5)
	ON_EN_KILLFOCUS(numColumnsFile6, &CMFCApplication3Dlg::OnEnKillfocusnumcolumnsfile6)
	ON_EN_KILLFOCUS(matchColumnFile6, &CMFCApplication3Dlg::OnEnKillfocusmatchcolumnfile6)
	ON_EN_KILLFOCUS(skipColumnsFile6, &CMFCApplication3Dlg::OnEnKillfocusskipcolumnsfile6)
	ON_EN_KILLFOCUS(numColumnsFile7, &CMFCApplication3Dlg::OnEnKillfocusnumcolumnsfile7)
	ON_EN_KILLFOCUS(matchColumnFile7, &CMFCApplication3Dlg::OnEnKillfocusmatchcolumnfile7)
	ON_EN_KILLFOCUS(skipColumnsFile7, &CMFCApplication3Dlg::OnEnKillfocusskipcolumnsfile7)
	ON_EN_KILLFOCUS(numColumnsFile8, &CMFCApplication3Dlg::OnEnKillfocusnumcolumnsfile8)
	ON_EN_KILLFOCUS(matchColumnFile8, &CMFCApplication3Dlg::OnEnKillfocusmatchcolumnfile8)
	ON_EN_KILLFOCUS(skipColumnsFile8, &CMFCApplication3Dlg::OnEnKillfocusskipcolumnsfile8)
	ON_EN_KILLFOCUS(numColumnsFile9, &CMFCApplication3Dlg::OnEnKillfocusnumcolumnsfile9)
	ON_EN_KILLFOCUS(matchColumnFile9, &CMFCApplication3Dlg::OnEnKillfocusmatchcolumnfile9)
	ON_EN_KILLFOCUS(skipColumnsFile9, &CMFCApplication3Dlg::OnEnKillfocusskipcolumnsfile9)
	ON_EN_KILLFOCUS(numColumnsFile10, &CMFCApplication3Dlg::OnEnKillfocusnumcolumnsfile10)
	ON_EN_KILLFOCUS(matchColumnFile10, &CMFCApplication3Dlg::OnEnKillfocusmatchcolumnfile10)
	ON_EN_KILLFOCUS(skipColumnsFile10, &CMFCApplication3Dlg::OnEnKillfocusskipcolumnsfile10)
	ON_EN_KILLFOCUS(numColumnsFile11, &CMFCApplication3Dlg::OnEnKillfocusnumcolumnsfile11)
	ON_EN_KILLFOCUS(matchColumnFile11, &CMFCApplication3Dlg::OnEnKillfocusmatchcolumnfile11)
	ON_EN_KILLFOCUS(skipColumnsFile11, &CMFCApplication3Dlg::OnEnKillfocusskipcolumnsfile11)
	ON_EN_KILLFOCUS(numColumnsFile12, &CMFCApplication3Dlg::OnEnKillfocusnumcolumnsfile12)
	ON_EN_KILLFOCUS(matchColumnFile12, &CMFCApplication3Dlg::OnEnKillfocusmatchcolumnfile12)
	ON_EN_KILLFOCUS(skipColumnsFile12, &CMFCApplication3Dlg::OnEnKillfocusskipcolumnsfile12)
	ON_EN_KILLFOCUS(numFiles, &CMFCApplication3Dlg::OnEnKillfocusnumfiles)
END_MESSAGE_MAP()


// CMFCApplication3Dlg message handlers

BOOL CMFCApplication3Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here
	m_BtnClose.SetWindowTextW(L"Close");

	// Debug stuff
	columnsFile0.SetWindowTextW(_T("13"));
	matchFile0.SetWindowTextW(_T("1"));
	typeFile0.SetWindowTextW(_T("date"));
	columnsFile1.SetWindowTextW(_T("4"));
	matchFile1.SetWindowTextW(_T("1"));
	sheetName1.SetWindowTextW(_T("down5"));

	pathToFile0.SetWindowTextW(_T("C:\\Software\\LoggingComparator\\TemperatureLog.CSV"));
	pathToFile1.SetWindowTextW(_T("C:\\Software\\LoggingComparator\\down5.csv"));
	destinationPath.SetWindowTextW(_T("C:\\Software\\merged.xls"));


	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CMFCApplication3Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CMFCApplication3Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CMFCApplication3Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CMFCApplication3Dlg::OnBnClickedClose()
{
	// TODO: Add your control notification handler code here
	
	PostQuitMessage(WM_QUIT);
}


void CMFCApplication3Dlg::OnEnChangenumcolumnsmainfile()
{
	// TODO:  If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Add your control notification handler code here
}


void CMFCApplication3Dlg::OnEnKillfocusnumcolumnsfile0()
{
	// TODO: Add your control notification handler code here
	CString getText = _T("");
	columnsFile0.GetWindowTextW(getText);
	std::string tempString = CT2A(getText);

	if (tempString.length() == 0)
		return;

	for (int i = 0; i < tempString.size(); i++)
		if ((tempString[i] - '0') < 0 || (tempString[i] - '0') > 9) {
			MessageBox(_T("Input must be a positive integer."), _T("Error"), MB_ICONERROR | MB_OK);
			columnsFile0.SetWindowTextW(_T(""));
			return;
		}
}


void CMFCApplication3Dlg::OnEnKillfocusmatchcolumnfile0()
{
	// TODO: Add your control notification handler code here
	CString getText = _T("");
	matchFile0.GetWindowTextW(getText);
	std::string tempString = CT2A(getText);
	if (tempString.length() == 0)
		return;
	columnsFile0.GetWindowTextW(getText);
	tempString = CT2A(getText);
	if (tempString.length() == 0) {
		matchFile0.SetWindowTextW(_T(""));
		return;
	}
	int numColumns = std::stoi(tempString);
	matchFile0.GetWindowTextW(getText);
	tempString = CT2A(getText);
	if (tempString.length() == 0)
		return;
	for (int i = 0; i < tempString.size(); i++)
		if ((tempString[i] - '0') < 0 || (tempString[i] - '0') > 9) {
			MessageBox(_T("Input must be a positive integer."), _T("Error"), MB_ICONERROR | MB_OK);
			matchFile0.SetWindowTextW(_T(""));
			return;
		}
	int matchColumn = std::stoi(tempString);
	if (matchColumn > numColumns) {
		MessageBox(_T("Not in range."), _T("Error"), MB_ICONERROR | MB_OK);
		matchFile0.SetWindowTextW(_T(""));
		return;
	}

}


void CMFCApplication3Dlg::OnEnKillfocusmatchtypefile0()
{
	// TODO: Add your control notification handler code here
	CString getText = _T("");
	std::string tempString;
	typeFile0.GetWindowTextW(getText);
	tempString = CT2A(getText);
	if (tempString.length() == 0 || tempString == "Date" || tempString == "date" || tempString == "number" || tempString == "Number")
		return;
	else {
		MessageBox(_T("Accepted input: \"date\", \"number\""), _T("Error"), MB_ICONERROR | MB_OK);
		typeFile0.SetWindowTextW(_T(""));
		return;
	}
}


void CMFCApplication3Dlg::OnEnKillfocusskipcolumnsfile0()
{
	// TODO: Add your control notification handler code here
	CString getText = _T("");
	std::string tempString;
	skipFile0.GetWindowTextW(getText);
	tempString = CT2A(getText);
	if (tempString.length() == 0)
		return;
	for (int i = 0; i < tempString.length(); i++) {
		if ((tempString[i] - '0') < 0 || (tempString[i] - '0') > 9)
			if (tempString[i] != ',' && tempString[i] != ' ') {
				MessageBox(_T("Use comma separeted list, e.g.: 1,52, 7,612"), _T("Error"), MB_ICONERROR | MB_OK);
				skipFile0.SetWindowTextW(_T(""));
				return;
			}
	}
	std::vector<std::string> splitString;
	std::stringstream splitStream(tempString);
	std::string temp;
	tempString.erase(std::remove_if(tempString.begin(), tempString.end(), std::isspace), tempString.end());
	while (std::getline(splitStream, temp, ','))
		splitString.push_back(temp);
	std::vector<int> numbers;
	columnsFile0.GetWindowTextW(getText);
	tempString = CT2A(getText);
	if (tempString.length() == 0) {
		MessageBox(_T("Fill in the other input first."), _T("Error"), MB_ICONERROR | MB_OK);
		skipFile0.SetWindowTextW(_T(""));
		return;
	}
	int numColumns = std::stoi(tempString);
	for (int i = 0; i < splitString.size(); i++) {
		numbers.push_back(stoi(splitString[i]));
		if (numbers[i] < 0 || numbers[i] > numColumns) {
			MessageBox(_T("Not in range."), _T("Error"), MB_ICONERROR | MB_OK);
			skipFile0.SetWindowTextW(_T(""));
		}
	}
}


void CMFCApplication3Dlg::OnEnKillfocusnumcolumnsfile1()
{
	// TODO: Add your control notification handler code here
	CString getText = _T("");
	columnsFile1.GetWindowTextW(getText);
	std::string tempString = CT2A(getText);

	if (tempString.length() == 0)
		return;

	for (int i = 0; i < tempString.size(); i++)
		if ((tempString[i] - '0') < 0 || (tempString[i] - '0') > 9) {
			MessageBox(_T("Input must be a positive integer."), _T("Error"), MB_ICONERROR | MB_OK);
			columnsFile1.SetWindowTextW(_T(""));
			return;
		}
}


void CMFCApplication3Dlg::OnEnKillfocusmatchcolumnfile1()
{
	// TODO: Add your control notification handler code here
	CString getText = _T("");
	matchFile1.GetWindowTextW(getText);
	std::string tempString = CT2A(getText);
	if (tempString.length() == 0)
		return;
	columnsFile1.GetWindowTextW(getText);
	tempString = CT2A(getText);
	if (tempString.length() == 0) {
		matchFile1.SetWindowTextW(_T(""));
		return;
	}
	int numColumns = std::stoi(tempString);
	matchFile1.GetWindowTextW(getText);
	tempString = CT2A(getText);
	if (tempString.length() == 0)
		return;
	for (int i = 0; i < tempString.size(); i++)
		if ((tempString[i] - '0') < 0 || (tempString[i] - '0') > 9) {
			MessageBox(_T("Input must be a positive integer."), _T("Error"), MB_ICONERROR | MB_OK);
			matchFile1.SetWindowTextW(_T(""));
			return;
		}
	int matchColumn = std::stoi(tempString);
	if (matchColumn > numColumns) {
		MessageBox(_T("Not in range."), _T("Error"), MB_ICONERROR | MB_OK);
		matchFile1.SetWindowTextW(_T(""));
		return;
	}

}


void CMFCApplication3Dlg::OnEnKillfocusskipcolumnsfile1()
{
	// TODO: Add your control notification handler code here
	CString getText = _T("");
	std::string tempString;
	skipFile1.GetWindowTextW(getText);
	tempString = CT2A(getText);
	if (tempString.length() == 0)
		return;
	for (int i = 0; i < tempString.length(); i++) {
		if ((tempString[i] - '0') < 0 || (tempString[i] - '0') > 9)
			if (tempString[i] != ',' && tempString[i] != ' ') {
				MessageBox(_T("Use comma separeted list, e.g.: 1,52, 7,612"), _T("Error"), MB_ICONERROR | MB_OK);
				skipFile1.SetWindowTextW(_T(""));
				return;
			}
	}
	std::vector<std::string> splitString;
	std::stringstream splitStream(tempString);
	std::string temp;
	tempString.erase(std::remove_if(tempString.begin(), tempString.end(), std::isspace), tempString.end());
	while (std::getline(splitStream, temp, ','))
		splitString.push_back(temp);
	std::vector<int> numbers;
	columnsFile1.GetWindowTextW(getText);
	tempString = CT2A(getText);
	if (tempString.length() == 0) {
		MessageBox(_T("Fill in the other input first."), _T("Error"), MB_ICONERROR | MB_OK);
		skipFile1.SetWindowTextW(_T(""));
		return;
	}
	int numColumns = std::stoi(tempString);
	for (int i = 0; i < splitString.size(); i++) {
		numbers.push_back(stoi(splitString[i]));
		if (numbers[i] < 0 || numbers[i] > numColumns) {
			MessageBox(_T("Not in range."), _T("Error"), MB_ICONERROR | MB_OK);
			skipFile1.SetWindowTextW(_T(""));
		}
	}
}


void CMFCApplication3Dlg::OnEnKillfocusnumcolumnsfile2()
{
	// TODO: Add your control notification handler code here
	CString getText = _T("");
	columnsFile2.GetWindowTextW(getText);
	std::string tempString = CT2A(getText);

	if (tempString.length() == 0)
		return;

	for (int i = 0; i < tempString.size(); i++)
		if ((tempString[i] - '0') < 0 || (tempString[i] - '0') > 9) {
			MessageBox(_T("Input must be a positive integer."), _T("Error"), MB_ICONERROR | MB_OK);
			columnsFile2.SetWindowTextW(_T(""));
			return;
		}
}


void CMFCApplication3Dlg::OnEnKillfocusmatchcolumnfile2()
{
	// TODO: Add your control notification handler code here
	CString getText = _T("");
	matchFile2.GetWindowTextW(getText);
	std::string tempString = CT2A(getText);
	if (tempString.length() == 0)
		return;
	columnsFile2.GetWindowTextW(getText);
	tempString = CT2A(getText);
	if (tempString.length() == 0) {
		MessageBox(_T("Input must be a positive integer."), _T("Error"), MB_ICONERROR | MB_OK);
		matchFile2.SetWindowTextW(_T(""));
		return;
	}
	int numColumns = std::stoi(tempString);
	matchFile2.GetWindowTextW(getText);
	tempString = CT2A(getText);
	if (tempString.length() == 0)
		return;
	for (int i = 0; i < tempString.size(); i++)
		if ((tempString[i] - '0') < 0 || (tempString[i] - '0') > 9) {
			MessageBox(_T("Input must be a positive integer."), _T("Error"), MB_ICONERROR | MB_OK);
			matchFile2.SetWindowTextW(_T(""));
			return;
		}
	int matchColumn = std::stoi(tempString);
	if (matchColumn > numColumns) {
		MessageBox(_T("Not in range."), _T("Error"), MB_ICONERROR | MB_OK);
		matchFile2.SetWindowTextW(_T(""));
		return;
	}

}


void CMFCApplication3Dlg::OnEnKillfocusskipcolumnsfile2()
{
	// TODO: Add your control notification handler code here
	CString getText = _T("");
	std::string tempString;
	skipFile2.GetWindowTextW(getText);
	tempString = CT2A(getText);
	if (tempString.length() == 0)
		return;
	for (int i = 0; i < tempString.length(); i++) {
		if ((tempString[i] - '0') < 0 || (tempString[i] - '0') > 9)
			if (tempString[i] != ',' && tempString[i] != ' ') {
				MessageBox(_T("Use comma separeted list, e.g.: 1,52, 7,612"), _T("Error"), MB_ICONERROR | MB_OK);
				skipFile2.SetWindowTextW(_T(""));
				return;
			}
	}
	std::vector<std::string> splitString;
	std::stringstream splitStream(tempString);
	std::string temp;
	tempString.erase(std::remove_if(tempString.begin(), tempString.end(), std::isspace), tempString.end());
	while (std::getline(splitStream, temp, ','))
		splitString.push_back(temp);
	std::vector<int> numbers;
	columnsFile2.GetWindowTextW(getText);
	tempString = CT2A(getText);
	if (tempString.length() == 0) {
		MessageBox(_T("Fill in the other input first."), _T("Error"), MB_ICONERROR | MB_OK);
		skipFile2.SetWindowTextW(_T(""));
		return;
	}
	int numColumns = std::stoi(tempString);
	for (int i = 0; i < splitString.size(); i++) {
		numbers.push_back(stoi(splitString[i]));
		if (numbers[i] < 0 || numbers[i] > numColumns) {
			MessageBox(_T("Not in range."), _T("Error"), MB_ICONERROR | MB_OK);
			skipFile2.SetWindowTextW(_T(""));
		}
	}
}


void CMFCApplication3Dlg::OnEnKillfocusnumcolumnsfile3()
{
	// TODO: Add your control notification handler code here
	CString getText = _T("");
	columnsFile3.GetWindowTextW(getText);
	std::string tempString = CT2A(getText);

	if (tempString.length() == 0)
		return;

	for (int i = 0; i < tempString.size(); i++)
		if ((tempString[i] - '0') < 0 || (tempString[i] - '0') > 9) {
			MessageBox(_T("Input must be a positive integer."), _T("Error"), MB_ICONERROR | MB_OK);
			columnsFile3.SetWindowTextW(_T(""));
			return;
		}
}


void CMFCApplication3Dlg::OnEnKillfocusmatchcolumnfile3()
{
	// TODO: Add your control notification handler code here
	CString getText = _T("");
	matchFile3.GetWindowTextW(getText);
	std::string tempString = CT2A(getText);
	if (tempString.length() == 0)
		return;
	columnsFile3.GetWindowTextW(getText);
	tempString = CT2A(getText);
	if (tempString.length() == 0) {
		MessageBox(_T("Input must be a positive integer."), _T("Error"), MB_ICONERROR | MB_OK);
		matchFile3.SetWindowTextW(_T(""));
		return;
	}
	int numColumns = std::stoi(tempString);
	matchFile3.GetWindowTextW(getText);
	tempString = CT2A(getText);
	if (tempString.length() == 0)
		return;
	for (int i = 0; i < tempString.size(); i++)
		if ((tempString[i] - '0') < 0 || (tempString[i] - '0') > 9) {
			MessageBox(_T("Input must be a positive integer."), _T("Error"), MB_ICONERROR | MB_OK);
			matchFile3.SetWindowTextW(_T(""));
			return;
		}
	int matchColumn = std::stoi(tempString);
	if (matchColumn > numColumns) {
		MessageBox(_T("Not in range."), _T("Error"), MB_ICONERROR | MB_OK);
		matchFile3.SetWindowTextW(_T(""));
		return;
	}

}


void CMFCApplication3Dlg::OnEnKillfocusskipcolumnsfile3()
{
	// TODO: Add your control notification handler code here
	CString getText = _T("");
	std::string tempString;
	skipFile3.GetWindowTextW(getText);
	tempString = CT2A(getText);
	if (tempString.length() == 0)
		return;
	for (int i = 0; i < tempString.length(); i++) {
		if ((tempString[i] - '0') < 0 || (tempString[i] - '0') > 9)
			if (tempString[i] != ',' && tempString[i] != ' ') {
				MessageBox(_T("Use comma separeted list, e.g.: 1,52, 7,612"), _T("Error"), MB_ICONERROR | MB_OK);
				skipFile3.SetWindowTextW(_T(""));
				return;
			}
	}
	std::vector<std::string> splitString;
	std::stringstream splitStream(tempString);
	std::string temp;
	tempString.erase(std::remove_if(tempString.begin(), tempString.end(), std::isspace), tempString.end());
	while (std::getline(splitStream, temp, ','))
		splitString.push_back(temp);
	std::vector<int> numbers;
	columnsFile3.GetWindowTextW(getText);
	tempString = CT2A(getText);
	if (tempString.length() == 0) {
		MessageBox(_T("Fill in the other input first."), _T("Error"), MB_ICONERROR | MB_OK);
		skipFile3.SetWindowTextW(_T(""));
		return;
	}
	int numColumns = std::stoi(tempString);
	matchFile3.GetWindowTextW(getText);
	tempString = CT2A(getText);
	if (tempString.length() == 0) {
		MessageBox(_T("Fill in the other input first."), _T("Error"), MB_ICONERROR | MB_OK);
		skipFile3.SetWindowTextW(_T(""));
		return;
	}
	int matchColumn = std::stoi(tempString);
	for (int i = 0; i < splitString.size(); i++) {
		numbers.push_back(stoi(splitString[i]));
		if (numbers[i] < 0 || numbers[i] > numColumns) {
			MessageBox(_T("Not in range."), _T("Error"), MB_ICONERROR | MB_OK);
			skipFile3.SetWindowTextW(_T(""));
		}
		if (numbers[i] == matchColumn) {
			MessageBox(_T("Can't be the same as match column."), _T("Error"), MB_ICONERROR | MB_OK);
			skipFile3.SetWindowTextW(_T(""));
		}
	}	
}


void CMFCApplication3Dlg::OnEnKillfocusnumcolumnsfile4()
{
	// TODO: Add your control notification handler code here
	CString getText = _T("");
	columnsFile4.GetWindowTextW(getText);
	std::string tempString = CT2A(getText);

	if (tempString.length() == 0)
		return;

	for (int i = 0; i < tempString.size(); i++)
		if ((tempString[i] - '0') < 0 || (tempString[i] - '0') > 9) {
			MessageBox(_T("Input must be a positive integer."), _T("Error"), MB_ICONERROR | MB_OK);
			columnsFile4.SetWindowTextW(_T(""));
			return;
		}
}


void CMFCApplication3Dlg::OnEnKillfocusmatchcolumnfile4()
{
	// TODO: Add your control notification handler code here
	CString getText = _T("");
	matchFile4.GetWindowTextW(getText);
	std::string tempString = CT2A(getText);
	if (tempString.length() == 0)
		return;
	columnsFile4.GetWindowTextW(getText);
	tempString = CT2A(getText);
	if (tempString.length() == 0) {
		MessageBox(_T("Input must be a positive integer."), _T("Error"), MB_ICONERROR | MB_OK);
		matchFile4.SetWindowTextW(_T(""));
		return;
	}
	int numColumns = std::stoi(tempString);
	matchFile4.GetWindowTextW(getText);
	tempString = CT2A(getText);
	if (tempString.length() == 0)
		return;
	for (int i = 0; i < tempString.size(); i++)
		if ((tempString[i] - '0') < 0 || (tempString[i] - '0') > 9) {
			MessageBox(_T("Input must be a positive integer."), _T("Error"), MB_ICONERROR | MB_OK);
			matchFile4.SetWindowTextW(_T(""));
			return;
		}
	int matchColumn = std::stoi(tempString);
	if (matchColumn > numColumns) {
		MessageBox(_T("Not in range."), _T("Error"), MB_ICONERROR | MB_OK);
		matchFile4.SetWindowTextW(_T(""));
		return;
	}

}


void CMFCApplication3Dlg::OnEnKillfocusskipcolumnsfile4()
{
	// TODO: Add your control notification handler code here
	CString getText = _T("");
	std::string tempString;
	skipFile4.GetWindowTextW(getText);
	tempString = CT2A(getText);
	if (tempString.length() == 0)
		return;
	for (int i = 0; i < tempString.length(); i++) {
		if ((tempString[i] - '0') < 0 || (tempString[i] - '0') > 9)
			if (tempString[i] != ',' && tempString[i] != ' ') {
				MessageBox(_T("Use comma separeted list, e.g.: 1,52, 7,612"), _T("Error"), MB_ICONERROR | MB_OK);
				skipFile4.SetWindowTextW(_T(""));
				return;
			}
	}
	std::vector<std::string> splitString;
	std::stringstream splitStream(tempString);
	std::string temp;
	tempString.erase(std::remove_if(tempString.begin(), tempString.end(), std::isspace), tempString.end());
	while (std::getline(splitStream, temp, ','))
		splitString.push_back(temp);
	std::vector<int> numbers;
	columnsFile4.GetWindowTextW(getText);
	tempString = CT2A(getText);
	if (tempString.length() == 0) {
		MessageBox(_T("Fill in the other input first."), _T("Error"), MB_ICONERROR | MB_OK);
		skipFile4.SetWindowTextW(_T(""));
		return;
	}
	int numColumns = std::stoi(tempString);
	matchFile4.GetWindowTextW(getText);
	tempString = CT2A(getText);
	if (tempString.length() == 0) {
		MessageBox(_T("Fill in the other input first."), _T("Error"), MB_ICONERROR | MB_OK);
		skipFile4.SetWindowTextW(_T(""));
		return;
	}
	int matchColumn = std::stoi(tempString);
	for (int i = 0; i < splitString.size(); i++) {
		numbers.push_back(stoi(splitString[i]));
		if (numbers[i] < 0 || numbers[i] > numColumns) {
			MessageBox(_T("Not in range."), _T("Error"), MB_ICONERROR | MB_OK);
			skipFile4.SetWindowTextW(_T(""));
		}
		if (numbers[i] == matchColumn) {
			MessageBox(_T("Can't be the same as match column."), _T("Error"), MB_ICONERROR | MB_OK);
			skipFile4.SetWindowTextW(_T(""));
		}
	}
}


void CMFCApplication3Dlg::OnEnKillfocusnumcolumnsfile5()
{
	// TODO: Add your control notification handler code here
	CString getText = _T("");
	columnsFile5.GetWindowTextW(getText);
	std::string tempString = CT2A(getText);

	if (tempString.length() == 0)
		return;

	for (int i = 0; i < tempString.size(); i++)
		if ((tempString[i] - '0') < 0 || (tempString[i] - '0') > 9) {
			MessageBox(_T("Input must be a positive integer."), _T("Error"), MB_ICONERROR | MB_OK);
			columnsFile5.SetWindowTextW(_T(""));
			return;
		}
}


void CMFCApplication3Dlg::OnEnKillfocusmatchcolumnfile5()
{
	// TODO: Add your control notification handler code here
	CString getText = _T("");
	matchFile5.GetWindowTextW(getText);
	std::string tempString = CT2A(getText);
	if (tempString.length() == 0)
		return;
	columnsFile5.GetWindowTextW(getText);
	tempString = CT2A(getText);
	if (tempString.length() == 0) {
		MessageBox(_T("Input must be a positive integer."), _T("Error"), MB_ICONERROR | MB_OK);
		matchFile5.SetWindowTextW(_T(""));
		return;
	}
	int numColumns = std::stoi(tempString);
	matchFile5.GetWindowTextW(getText);
	tempString = CT2A(getText);
	if (tempString.length() == 0)
		return;
	for (int i = 0; i < tempString.size(); i++)
		if ((tempString[i] - '0') < 0 || (tempString[i] - '0') > 9) {
			MessageBox(_T("Input must be a positive integer."), _T("Error"), MB_ICONERROR | MB_OK);
			matchFile5.SetWindowTextW(_T(""));
			return;
		}
	int matchColumn = std::stoi(tempString);
	if (matchColumn > numColumns) {
		MessageBox(_T("Not in range."), _T("Error"), MB_ICONERROR | MB_OK);
		matchFile5.SetWindowTextW(_T(""));
		return;
	}

}


void CMFCApplication3Dlg::OnEnKillfocusskipcolumnsfile5()
{
	// TODO: Add your control notification handler code here
	CString getText = _T("");
	std::string tempString;
	skipFile5.GetWindowTextW(getText);
	tempString = CT2A(getText);
	if (tempString.length() == 0)
		return;
	for (int i = 0; i < tempString.length(); i++) {
		if ((tempString[i] - '0') < 0 || (tempString[i] - '0') > 9)
			if (tempString[i] != ',' && tempString[i] != ' ') {
				MessageBox(_T("Use comma separeted list, e.g.: 1,52, 7,612"), _T("Error"), MB_ICONERROR | MB_OK);
				skipFile5.SetWindowTextW(_T(""));
				return;
			}
	}
	std::vector<std::string> splitString;
	std::stringstream splitStream(tempString);
	std::string temp;
	tempString.erase(std::remove_if(tempString.begin(), tempString.end(), std::isspace), tempString.end());
	while (std::getline(splitStream, temp, ','))
		splitString.push_back(temp);
	std::vector<int> numbers;
	columnsFile5.GetWindowTextW(getText);
	tempString = CT2A(getText);
	if (tempString.length() == 0) {
		MessageBox(_T("Fill in the other input first."), _T("Error"), MB_ICONERROR | MB_OK);
		skipFile5.SetWindowTextW(_T(""));
		return;
	}
	int numColumns = std::stoi(tempString);
	matchFile5.GetWindowTextW(getText);
	tempString = CT2A(getText);
	if (tempString.length() == 0) {
		MessageBox(_T("Fill in the other input first."), _T("Error"), MB_ICONERROR | MB_OK);
		skipFile5.SetWindowTextW(_T(""));
		return;
	}
	int matchColumn = std::stoi(tempString);
	for (int i = 0; i < splitString.size(); i++) {
		numbers.push_back(stoi(splitString[i]));
		if (numbers[i] < 0 || numbers[i] > numColumns) {
			MessageBox(_T("Not in range."), _T("Error"), MB_ICONERROR | MB_OK);
			skipFile5.SetWindowTextW(_T(""));
		}
		if (numbers[i] == matchColumn) {
			MessageBox(_T("Can't be the same as match column."), _T("Error"), MB_ICONERROR | MB_OK);
			skipFile5.SetWindowTextW(_T(""));
		}
	}
}


void CMFCApplication3Dlg::OnEnKillfocusnumcolumnsfile6()
{
	// TODO: Add your control notification handler code here
	CString getText = _T("");
	columnsFile6.GetWindowTextW(getText);
	std::string tempString = CT2A(getText);

	if (tempString.length() == 0)
		return;

	for (int i = 0; i < tempString.size(); i++)
		if ((tempString[i] - '0') < 0 || (tempString[i] - '0') > 9) {
			MessageBox(_T("Input must be a positive integer."), _T("Error"), MB_ICONERROR | MB_OK);
			columnsFile6.SetWindowTextW(_T(""));
			return;
		}
}


void CMFCApplication3Dlg::OnEnKillfocusmatchcolumnfile6()
{
	// TODO: Add your control notification handler code here
	CString getText = _T("");
	matchFile6.GetWindowTextW(getText);
	std::string tempString = CT2A(getText);
	if (tempString.length() == 0)
		return;
	columnsFile6.GetWindowTextW(getText);
	tempString = CT2A(getText);
	if (tempString.length() == 0) {
		MessageBox(_T("Input must be a positive integer."), _T("Error"), MB_ICONERROR | MB_OK);
		matchFile6.SetWindowTextW(_T(""));
		return;
	}
	int numColumns = std::stoi(tempString);
	matchFile6.GetWindowTextW(getText);
	tempString = CT2A(getText);
	if (tempString.length() == 0)
		return;
	for (int i = 0; i < tempString.size(); i++)
		if ((tempString[i] - '0') < 0 || (tempString[i] - '0') > 9) {
			MessageBox(_T("Input must be a positive integer."), _T("Error"), MB_ICONERROR | MB_OK);
			matchFile6.SetWindowTextW(_T(""));
			return;
		}
	int matchColumn = std::stoi(tempString);
	if (matchColumn > numColumns) {
		MessageBox(_T("Not in range."), _T("Error"), MB_ICONERROR | MB_OK);
		matchFile6.SetWindowTextW(_T(""));
		return;
	}

}


void CMFCApplication3Dlg::OnEnKillfocusskipcolumnsfile6()
{
	// TODO: Add your control notification handler code here
	CString getText = _T("");
	std::string tempString;
	skipFile6.GetWindowTextW(getText);
	tempString = CT2A(getText);
	if (tempString.length() == 0)
		return;
	for (int i = 0; i < tempString.length(); i++) {
		if ((tempString[i] - '0') < 0 || (tempString[i] - '0') > 9)
			if (tempString[i] != ',' && tempString[i] != ' ') {
				MessageBox(_T("Use comma separeted list, e.g.: 1,52, 7,612"), _T("Error"), MB_ICONERROR | MB_OK);
				skipFile6.SetWindowTextW(_T(""));
				return;
			}
	}
	std::vector<std::string> splitString;
	std::stringstream splitStream(tempString);
	std::string temp;
	tempString.erase(std::remove_if(tempString.begin(), tempString.end(), std::isspace), tempString.end());
	while (std::getline(splitStream, temp, ','))
		splitString.push_back(temp);
	std::vector<int> numbers;
	columnsFile6.GetWindowTextW(getText);
	tempString = CT2A(getText);
	if (tempString.length() == 0) {
		MessageBox(_T("Fill in the other input first."), _T("Error"), MB_ICONERROR | MB_OK);
		skipFile6.SetWindowTextW(_T(""));
		return;
	}
	int numColumns = std::stoi(tempString);
	matchFile6.GetWindowTextW(getText);
	tempString = CT2A(getText);
	if (tempString.length() == 0) {
		MessageBox(_T("Fill in the other input first."), _T("Error"), MB_ICONERROR | MB_OK);
		skipFile6.SetWindowTextW(_T(""));
		return;
	}
	int matchColumn = std::stoi(tempString);
	for (int i = 0; i < splitString.size(); i++) {
		numbers.push_back(stoi(splitString[i]));
		if (numbers[i] < 0 || numbers[i] > numColumns) {
			MessageBox(_T("Not in range."), _T("Error"), MB_ICONERROR | MB_OK);
			skipFile6.SetWindowTextW(_T(""));
		}
		if (numbers[i] == matchColumn) {
			MessageBox(_T("Can't be the same as match column."), _T("Error"), MB_ICONERROR | MB_OK);
			skipFile6.SetWindowTextW(_T(""));
		}
	}
}


void CMFCApplication3Dlg::OnEnKillfocusnumcolumnsfile7()
{
	// TODO: Add your control notification handler code here
	CString getText = _T("");
	columnsFile7.GetWindowTextW(getText);
	std::string tempString = CT2A(getText);

	if (tempString.length() == 0)
		return;

	for (int i = 0; i < tempString.size(); i++)
		if ((tempString[i] - '0') < 0 || (tempString[i] - '0') > 9) {
			MessageBox(_T("Input must be a positive integer."), _T("Error"), MB_ICONERROR | MB_OK);
			columnsFile7.SetWindowTextW(_T(""));
			return;
		}
}


void CMFCApplication3Dlg::OnEnKillfocusmatchcolumnfile7()
{
	// TODO: Add your control notification handler code here
	CString getText = _T("");
	matchFile7.GetWindowTextW(getText);
	std::string tempString = CT2A(getText);
	if (tempString.length() == 0)
		return;
	columnsFile7.GetWindowTextW(getText);
	tempString = CT2A(getText);
	if (tempString.length() == 0) {
		matchFile7.SetWindowTextW(_T(""));
		return;
	}
	int numColumns = std::stoi(tempString);
	matchFile7.GetWindowTextW(getText);
	tempString = CT2A(getText);
	if (tempString.length() == 0)
		return;
	for (int i = 0; i < tempString.size(); i++)
		if ((tempString[i] - '0') < 0 || (tempString[i] - '0') > 9) {
			MessageBox(_T("Input must be a positive integer."), _T("Error"), MB_ICONERROR | MB_OK);
			matchFile7.SetWindowTextW(_T(""));
			return;
		}
	int matchColumn = std::stoi(tempString);
	if (matchColumn > numColumns) {
		MessageBox(_T("Not in range."), _T("Error"), MB_ICONERROR | MB_OK);
		matchFile7.SetWindowTextW(_T(""));
		return;
	}

}


void CMFCApplication3Dlg::OnEnKillfocusskipcolumnsfile7()
{
	// TODO: Add your control notification handler code here
	CString getText = _T("");
	std::string tempString;
	skipFile7.GetWindowTextW(getText);
	tempString = CT2A(getText);
	if (tempString.length() == 0)
		return;
	for (int i = 0; i < tempString.length(); i++) {
		if ((tempString[i] - '0') < 0 || (tempString[i] - '0') > 9)
			if (tempString[i] != ',' && tempString[i] != ' ') {
				MessageBox(_T("Use comma separeted list, e.g.: 1,52, 7,612"), _T("Error"), MB_ICONERROR | MB_OK);
				skipFile7.SetWindowTextW(_T(""));
				return;
			}
	}
	std::vector<std::string> splitString;
	std::stringstream splitStream(tempString);
	std::string temp;
	tempString.erase(std::remove_if(tempString.begin(), tempString.end(), std::isspace), tempString.end());
	while (std::getline(splitStream, temp, ','))
		splitString.push_back(temp);
	std::vector<int> numbers;
	columnsFile7.GetWindowTextW(getText);
	tempString = CT2A(getText);
	if (tempString.length() == 0) {
		MessageBox(_T("Fill in the other input first."), _T("Error"), MB_ICONERROR | MB_OK);
		skipFile7.SetWindowTextW(_T(""));
		return;
	}
	int numColumns = std::stoi(tempString);
	for (int i = 0; i < splitString.size(); i++) {
		numbers.push_back(stoi(splitString[i]));
		if (numbers[i] < 0 || numbers[i] > numColumns) {
			MessageBox(_T("Not in range."), _T("Error"), MB_ICONERROR | MB_OK);
			skipFile7.SetWindowTextW(_T(""));
		}
	}
}


void CMFCApplication3Dlg::OnEnKillfocusnumcolumnsfile8()
{
	// TODO: Add your control notification handler code here
	CString getText = _T("");
	columnsFile8.GetWindowTextW(getText);
	std::string tempString = CT2A(getText);

	if (tempString.length() == 0)
		return;

	for (int i = 0; i < tempString.size(); i++)
		if ((tempString[i] - '0') < 0 || (tempString[i] - '0') > 9) {
			MessageBox(_T("Input must be a positive integer."), _T("Error"), MB_ICONERROR | MB_OK);
			columnsFile8.SetWindowTextW(_T(""));
			return;
		}
}


void CMFCApplication3Dlg::OnEnKillfocusmatchcolumnfile8()
{
	// TODO: Add your control notification handler code here
	CString getText = _T("");
	matchFile8.GetWindowTextW(getText);
	std::string tempString = CT2A(getText);
	if (tempString.length() == 0)
		return;
	columnsFile8.GetWindowTextW(getText);
	tempString = CT2A(getText);
	if (tempString.length() == 0) {
		MessageBox(_T("Input must be a positive integer."), _T("Error"), MB_ICONERROR | MB_OK);
		matchFile8.SetWindowTextW(_T(""));
		return;
	}
	int numColumns = std::stoi(tempString);
	matchFile8.GetWindowTextW(getText);
	tempString = CT2A(getText);
	if (tempString.length() == 0)
		return;
	for (int i = 0; i < tempString.size(); i++)
		if ((tempString[i] - '0') < 0 || (tempString[i] - '0') > 9) {
			MessageBox(_T("Input must be a positive integer."), _T("Error"), MB_ICONERROR | MB_OK);
			matchFile8.SetWindowTextW(_T(""));
			return;
		}
	int matchColumn = std::stoi(tempString);
	if (matchColumn > numColumns) {
		MessageBox(_T("Not in range."), _T("Error"), MB_ICONERROR | MB_OK);
		matchFile8.SetWindowTextW(_T(""));
		return;
	}

}


void CMFCApplication3Dlg::OnEnKillfocusskipcolumnsfile8()
{
	// TODO: Add your control notification handler code here
	CString getText = _T("");
	std::string tempString;
	skipFile8.GetWindowTextW(getText);
	tempString = CT2A(getText);
	if (tempString.length() == 0)
		return;
	for (int i = 0; i < tempString.length(); i++) {
		if ((tempString[i] - '0') < 0 || (tempString[i] - '0') > 9)
			if (tempString[i] != ',' && tempString[i] != ' ') {
				MessageBox(_T("Use comma separeted list, e.g.: 1,52, 7,612"), _T("Error"), MB_ICONERROR | MB_OK);
				skipFile8.SetWindowTextW(_T(""));
				return;
			}
	}
	std::vector<std::string> splitString;
	std::stringstream splitStream(tempString);
	std::string temp;
	tempString.erase(std::remove_if(tempString.begin(), tempString.end(), std::isspace), tempString.end());
	while (std::getline(splitStream, temp, ','))
		splitString.push_back(temp);
	std::vector<int> numbers;
	columnsFile8.GetWindowTextW(getText);
	tempString = CT2A(getText);
	if (tempString.length() == 0) {
		MessageBox(_T("Fill in the other input first."), _T("Error"), MB_ICONERROR | MB_OK);
		skipFile8.SetWindowTextW(_T(""));
		return;
	}
	int numColumns = std::stoi(tempString);
	for (int i = 0; i < splitString.size(); i++) {
		numbers.push_back(stoi(splitString[i]));
		if (numbers[i] < 0 || numbers[i] > numColumns) {
			MessageBox(_T("Not in range."), _T("Error"), MB_ICONERROR | MB_OK);
			skipFile8.SetWindowTextW(_T(""));
		}
	}
}


void CMFCApplication3Dlg::OnEnKillfocusnumcolumnsfile9()
{
	// TODO: Add your control notification handler code here
	CString getText = _T("");
	columnsFile9.GetWindowTextW(getText);
	std::string tempString = CT2A(getText);

	if (tempString.length() == 0)
		return;

	for (int i = 0; i < tempString.size(); i++)
		if ((tempString[i] - '0') < 0 || (tempString[i] - '0') > 9) {
			MessageBox(_T("Input must be a positive integer."), _T("Error"), MB_ICONERROR | MB_OK);
			columnsFile9.SetWindowTextW(_T(""));
			return;
		}
}


void CMFCApplication3Dlg::OnEnKillfocusmatchcolumnfile9()
{
	// TODO: Add your control notification handler code here
	CString getText = _T("");
	matchFile9.GetWindowTextW(getText);
	std::string tempString = CT2A(getText);
	if (tempString.length() == 0)
		return;
	columnsFile9.GetWindowTextW(getText);
	tempString = CT2A(getText);
	if (tempString.length() == 0) {
		MessageBox(_T("Input must be a positive integer."), _T("Error"), MB_ICONERROR | MB_OK);
		matchFile9.SetWindowTextW(_T(""));
		return;
	}
	int numColumns = std::stoi(tempString);
	matchFile9.GetWindowTextW(getText);
	tempString = CT2A(getText);
	if (tempString.length() == 0)
		return;
	for (int i = 0; i < tempString.size(); i++)
		if ((tempString[i] - '0') < 0 || (tempString[i] - '0') > 9) {
			MessageBox(_T("Input must be a positive integer."), _T("Error"), MB_ICONERROR | MB_OK);
			matchFile9.SetWindowTextW(_T(""));
			return;
		}
	int matchColumn = std::stoi(tempString);
	if (matchColumn > numColumns) {
		MessageBox(_T("Not in range."), _T("Error"), MB_ICONERROR | MB_OK);
		matchFile9.SetWindowTextW(_T(""));
		return;
	}

}


void CMFCApplication3Dlg::OnEnKillfocusskipcolumnsfile9()
{
	// TODO: Add your control notification handler code here
	CString getText = _T("");
	std::string tempString;
	skipFile9.GetWindowTextW(getText);
	tempString = CT2A(getText);
	if (tempString.length() == 0)
		return;
	for (int i = 0; i < tempString.length(); i++) {
		if ((tempString[i] - '0') < 0 || (tempString[i] - '0') > 9)
			if (tempString[i] != ',' && tempString[i] != ' ') {
				MessageBox(_T("Use comma separeted list, e.g.: 1,52, 7,612"), _T("Error"), MB_ICONERROR | MB_OK);
				skipFile9.SetWindowTextW(_T(""));
				return;
			}
	}
	std::vector<std::string> splitString;
	std::stringstream splitStream(tempString);
	std::string temp;
	tempString.erase(std::remove_if(tempString.begin(), tempString.end(), std::isspace), tempString.end());
	while (std::getline(splitStream, temp, ','))
		splitString.push_back(temp);
	std::vector<int> numbers;
	columnsFile9.GetWindowTextW(getText);
	tempString = CT2A(getText);
	if (tempString.length() == 0) {
		MessageBox(_T("Fill in the other input first."), _T("Error"), MB_ICONERROR | MB_OK);
		skipFile9.SetWindowTextW(_T(""));
		return;
	}
	int numColumns = std::stoi(tempString);
	matchFile9.GetWindowTextW(getText);
	tempString = CT2A(getText);
	if (tempString.length() == 0) {
		MessageBox(_T("Fill in the other input first."), _T("Error"), MB_ICONERROR | MB_OK);
		skipFile9.SetWindowTextW(_T(""));
		return;
	}
	int matchColumn = std::stoi(tempString);
	for (int i = 0; i < splitString.size(); i++) {
		numbers.push_back(stoi(splitString[i]));
		if (numbers[i] < 0 || numbers[i] > numColumns) {
			MessageBox(_T("Not in range."), _T("Error"), MB_ICONERROR | MB_OK);
			skipFile9.SetWindowTextW(_T(""));
		}
		if (numbers[i] == matchColumn) {
			MessageBox(_T("Can't be the same as match column."), _T("Error"), MB_ICONERROR | MB_OK);
			skipFile9.SetWindowTextW(_T(""));
		}
	}
}


void CMFCApplication3Dlg::OnEnKillfocusnumcolumnsfile10()
{
	// TODO: Add your control notification handler code here
	CString getText = _T("");
	columnsFile10.GetWindowTextW(getText);
	std::string tempString = CT2A(getText);

	if (tempString.length() == 0)
		return;

	for (int i = 0; i < tempString.size(); i++)
		if ((tempString[i] - '0') < 0 || (tempString[i] - '0') > 9) {
			MessageBox(_T("Input must be a positive integer."), _T("Error"), MB_ICONERROR | MB_OK);
			columnsFile10.SetWindowTextW(_T(""));
			return;
		}
}


void CMFCApplication3Dlg::OnEnKillfocusmatchcolumnfile10()
{
	// TODO: Add your control notification handler code here
	CString getText = _T("");
	matchFile10.GetWindowTextW(getText);
	std::string tempString = CT2A(getText);
	if (tempString.length() == 0)
		return;
	columnsFile10.GetWindowTextW(getText);
	tempString = CT2A(getText);
	if (tempString.length() == 0) {
		MessageBox(_T("Input must be a positive integer."), _T("Error"), MB_ICONERROR | MB_OK);
		matchFile10.SetWindowTextW(_T(""));
		return;
	}
	int numColumns = std::stoi(tempString);
	matchFile10.GetWindowTextW(getText);
	tempString = CT2A(getText);
	if (tempString.length() == 0)
		return;
	for (int i = 0; i < tempString.size(); i++)
		if ((tempString[i] - '0') < 0 || (tempString[i] - '0') > 9) {
			MessageBox(_T("Input must be a positive integer."), _T("Error"), MB_ICONERROR | MB_OK);
			matchFile10.SetWindowTextW(_T(""));
			return;
		}
	int matchColumn = std::stoi(tempString);
	if (matchColumn > numColumns) {
		MessageBox(_T("Not in range."), _T("Error"), MB_ICONERROR | MB_OK);
		matchFile10.SetWindowTextW(_T(""));
		return;
	}

}


void CMFCApplication3Dlg::OnEnKillfocusskipcolumnsfile10()
{
	// TODO: Add your control notification handler code here
	CString getText = _T("");
	std::string tempString;
	skipFile10.GetWindowTextW(getText);
	tempString = CT2A(getText);
	if (tempString.length() == 0)
		return;
	for (int i = 0; i < tempString.length(); i++) {
		if ((tempString[i] - '0') < 0 || (tempString[i] - '0') > 9)
			if (tempString[i] != ',' && tempString[i] != ' ') {
				MessageBox(_T("Use comma separeted list, e.g.: 1,52, 7,612"), _T("Error"), MB_ICONERROR | MB_OK);
				skipFile10.SetWindowTextW(_T(""));
				return;
			}
	}
	std::vector<std::string> splitString;
	std::stringstream splitStream(tempString);
	std::string temp;
	tempString.erase(std::remove_if(tempString.begin(), tempString.end(), std::isspace), tempString.end());
	while (std::getline(splitStream, temp, ','))
		splitString.push_back(temp);
	std::vector<int> numbers;
	columnsFile10.GetWindowTextW(getText);
	tempString = CT2A(getText);
	if (tempString.length() == 0) {
		MessageBox(_T("Fill in the other input first."), _T("Error"), MB_ICONERROR | MB_OK);
		skipFile10.SetWindowTextW(_T(""));
		return;
	}
	int numColumns = std::stoi(tempString);
	matchFile10.GetWindowTextW(getText);
	tempString = CT2A(getText);
	if (tempString.length() == 0) {
		MessageBox(_T("Fill in the other input first."), _T("Error"), MB_ICONERROR | MB_OK);
		skipFile10.SetWindowTextW(_T(""));
		return;
	}
	int matchColumn = std::stoi(tempString);
	for (int i = 0; i < splitString.size(); i++) {
		numbers.push_back(stoi(splitString[i]));
		if (numbers[i] < 0 || numbers[i] > numColumns) {
			MessageBox(_T("Not in range."), _T("Error"), MB_ICONERROR | MB_OK);
			skipFile10.SetWindowTextW(_T(""));
		}
		if (numbers[i] == matchColumn) {
			MessageBox(_T("Can't be the same as match column."), _T("Error"), MB_ICONERROR | MB_OK);
			skipFile10.SetWindowTextW(_T(""));
		}
	}
}


void CMFCApplication3Dlg::OnEnKillfocusnumcolumnsfile11()
{
	// TODO: Add your control notification handler code here
	CString getText = _T("");
	columnsFile11.GetWindowTextW(getText);
	std::string tempString = CT2A(getText);

	if (tempString.length() == 0)
		return;

	for (int i = 0; i < tempString.size(); i++)
		if ((tempString[i] - '0') < 0 || (tempString[i] - '0') > 9) {
			MessageBox(_T("Input must be a positive integer."), _T("Error"), MB_ICONERROR | MB_OK);
			columnsFile11.SetWindowTextW(_T(""));
			return;
		}
}


void CMFCApplication3Dlg::OnEnKillfocusmatchcolumnfile11()
{
	// TODO: Add your control notification handler code here
	CString getText = _T("");
	matchFile11.GetWindowTextW(getText);
	std::string tempString = CT2A(getText);
	if (tempString.length() == 0)
		return;
	columnsFile11.GetWindowTextW(getText);
	tempString = CT2A(getText);
	if (tempString.length() == 0) {
		MessageBox(_T("Input must be a positive integer."), _T("Error"), MB_ICONERROR | MB_OK);
		matchFile11.SetWindowTextW(_T(""));
		return;
	}
	int numColumns = std::stoi(tempString);
	matchFile11.GetWindowTextW(getText);
	tempString = CT2A(getText);
	if (tempString.length() == 0)
		return;
	for (int i = 0; i < tempString.size(); i++)
		if ((tempString[i] - '0') < 0 || (tempString[i] - '0') > 9) {
			MessageBox(_T("Input must be a positive integer."), _T("Error"), MB_ICONERROR | MB_OK);
			matchFile11.SetWindowTextW(_T(""));
			return;
		}
	int matchColumn = std::stoi(tempString);
	if (matchColumn > numColumns) {
		MessageBox(_T("Not in range."), _T("Error"), MB_ICONERROR | MB_OK);
		matchFile11.SetWindowTextW(_T(""));
		return;
	}

}


void CMFCApplication3Dlg::OnEnKillfocusskipcolumnsfile11()
{
	// TODO: Add your control notification handler code here
	CString getText = _T("");
	std::string tempString;
	skipFile11.GetWindowTextW(getText);
	tempString = CT2A(getText);
	if (tempString.length() == 0)
		return;
	for (int i = 0; i < tempString.length(); i++) {
		if ((tempString[i] - '0') < 0 || (tempString[i] - '0') > 9)
			if (tempString[i] != ',' && tempString[i] != ' ') {
				MessageBox(_T("Use comma separeted list, e.g.: 1,52, 7,612"), _T("Error"), MB_ICONERROR | MB_OK);
				skipFile11.SetWindowTextW(_T(""));
				return;
			}
	}
	std::vector<std::string> splitString;
	std::stringstream splitStream(tempString);
	std::string temp;
	tempString.erase(std::remove_if(tempString.begin(), tempString.end(), std::isspace), tempString.end());
	while (std::getline(splitStream, temp, ','))
		splitString.push_back(temp);
	std::vector<int> numbers;
	columnsFile11.GetWindowTextW(getText);
	tempString = CT2A(getText);
	if (tempString.length() == 0) {
		MessageBox(_T("Fill in the other input first."), _T("Error"), MB_ICONERROR | MB_OK);
		skipFile11.SetWindowTextW(_T(""));
		return;
	}
	int numColumns = std::stoi(tempString);
	matchFile11.GetWindowTextW(getText);
	tempString = CT2A(getText);
	if (tempString.length() == 0) {
		MessageBox(_T("Fill in the other input first."), _T("Error"), MB_ICONERROR | MB_OK);
		skipFile11.SetWindowTextW(_T(""));
		return;
	}
	int matchColumn = std::stoi(tempString);
	for (int i = 0; i < splitString.size(); i++) {
		numbers.push_back(stoi(splitString[i]));
		if (numbers[i] < 0 || numbers[i] > numColumns) {
			MessageBox(_T("Not in range."), _T("Error"), MB_ICONERROR | MB_OK);
			skipFile11.SetWindowTextW(_T(""));
		}
		if (numbers[i] == matchColumn) {
			MessageBox(_T("Can't be the same as match column."), _T("Error"), MB_ICONERROR | MB_OK);
			skipFile11.SetWindowTextW(_T(""));
		}
	}
}


void CMFCApplication3Dlg::OnEnKillfocusnumcolumnsfile12()
{
	// TODO: Add your control notification handler code here
	CString getText = _T("");
	columnsFile12.GetWindowTextW(getText);
	std::string tempString = CT2A(getText);

	if (tempString.length() == 0)
		return;

	for (int i = 0; i < tempString.size(); i++)
		if ((tempString[i] - '0') < 0 || (tempString[i] - '0') > 9) {
			MessageBox(_T("Input must be a positive integer."), _T("Error"), MB_ICONERROR | MB_OK);
			columnsFile12.SetWindowTextW(_T(""));
			return;
		}
}


void CMFCApplication3Dlg::OnEnKillfocusmatchcolumnfile12()
{
	// TODO: Add your control notification handler code here
	CString getText = _T("");
	matchFile12.GetWindowTextW(getText);
	std::string tempString = CT2A(getText);
	if (tempString.length() == 0)
		return;
	columnsFile12.GetWindowTextW(getText);
	tempString = CT2A(getText);
	if (tempString.length() == 0) {
		MessageBox(_T("Input must be a positive integer."), _T("Error"), MB_ICONERROR | MB_OK);
		matchFile12.SetWindowTextW(_T(""));
		return;
	}
	int numColumns = std::stoi(tempString);
	matchFile12.GetWindowTextW(getText);
	tempString = CT2A(getText);
	if (tempString.length() == 0)
		return;
	for (int i = 0; i < tempString.size(); i++)
		if ((tempString[i] - '0') < 0 || (tempString[i] - '0') > 9) {
			MessageBox(_T("Input must be a positive integer."), _T("Error"), MB_ICONERROR | MB_OK);
			matchFile12.SetWindowTextW(_T(""));
			return;
		}
	int matchColumn = std::stoi(tempString);
	if (matchColumn > numColumns) {
		MessageBox(_T("Not in range."), _T("Error"), MB_ICONERROR | MB_OK);
		matchFile12.SetWindowTextW(_T(""));
		return;
	}

}


void CMFCApplication3Dlg::OnEnKillfocusskipcolumnsfile12()
{
	// TODO: Add your control notification handler code here
	CString getText = _T("");
	std::string tempString;
	skipFile12.GetWindowTextW(getText);
	tempString = CT2A(getText);
	if (tempString.length() == 0)
		return;
	for (int i = 0; i < tempString.length(); i++) {
		if ((tempString[i] - '0') < 0 || (tempString[i] - '0') > 9)
			if (tempString[i] != ',' && tempString[i] != ' ') {
				MessageBox(_T("Use comma separeted list, e.g.: 1,52, 7,612"), _T("Error"), MB_ICONERROR | MB_OK);
				skipFile12.SetWindowTextW(_T(""));
				return;
			}
	}
	std::vector<std::string> splitString;
	std::string temp;
	tempString.erase(std::remove_if(tempString.begin(), tempString.end(), std::isspace), tempString.end());
	std::stringstream splitStream(tempString);
	while (std::getline(splitStream, temp, ','))
		splitString.push_back(temp);
	std::vector<int> numbers;
	columnsFile12.GetWindowTextW(getText);
	tempString = CT2A(getText);
	if (tempString.length() == 0) {
		MessageBox(_T("Fill in the other input first."), _T("Error"), MB_ICONERROR | MB_OK);
		skipFile12.SetWindowTextW(_T(""));
		return;
	}
	int numColumns = std::stoi(tempString);
	matchFile12.GetWindowTextW(getText);
	tempString = CT2A(getText);
	if (tempString.length() == 0) {
		MessageBox(_T("Fill in the other input first."), _T("Error"), MB_ICONERROR | MB_OK);
		skipFile12.SetWindowTextW(_T(""));
		return;
	}
	int matchColumn = std::stoi(tempString);
	for (int i = 0; i < splitString.size(); i++) {
		numbers.push_back(stoi(splitString[i]));
		if (numbers[i] < 0 || numbers[i] > numColumns) {
			MessageBox(_T("Not in range."), _T("Error"), MB_ICONERROR | MB_OK);
			skipFile12.SetWindowTextW(_T(""));
		}
		if (numbers[i] == matchColumn) {
			MessageBox(_T("Can't be the same as match column."), _T("Error"), MB_ICONERROR | MB_OK);
			skipFile12.SetWindowTextW(_T(""));
		}
	}
}

void CMFCApplication3Dlg::OnEnKillfocusnumfiles()
{
	// TODO: Add your control notification handler code here
	CString getText = _T("");
	numofFiles.GetWindowTextW(getText);
	std::string tempString = CT2A(getText);
	if (tempString.length() == 0)
		return;

	for (int i = 0; i < tempString.size(); i++)
		if ((tempString[i] - '0') < 0 || (tempString[i] - '0') > 9) {
			MessageBox(_T("Input must be a positive integer."), _T("Error"), MB_ICONERROR | MB_OK);
			numofFiles.SetWindowTextW(_T(""));
			return;
		}
}


void CMFCApplication3Dlg::OnBnClickedMatch()
{
	// TODO: Add your control notification handler code here

	/// Add call to match program here

	//MessageBox(_T("Not yet implemented."), _T("Error"), MB_ICONERROR | MB_OK);

	CString getText = _T("");
	numofFiles.GetWindowTextW(getText);
	std::string tempString = CT2A(getText);
	if (tempString.length() == 0)
		return;

	for (int i = 0; i < tempString.size(); i++)
		if ((tempString[i] - '0') < 0 || (tempString[i] - '0') > 9) {
			MessageBox(_T("Number of files must be a positive integer."), _T("Error"), MB_ICONERROR | MB_OK);
			numofFiles.SetWindowTextW(_T(""));
			return;
		}
	int numbofFiles = std::stoi(tempString);
	if (numbofFiles > 12) {
		MessageBox(_T("Max number of files is 12."), _T("Error"), MB_ICONERROR | MB_OK);
		//numofFiles.SetWindowTextW(_T("12"));
		return;
	}
	std::vector<std::string> splitString;
	std::string temp;
	std::stringstream splitStream;
		
	std::string paths[14] = { "" };
	int noColumns[13] = { 0 };
	int matchNo[13] = { 0 };
	char matchtype;
	std::vector<int> skipcolumns[13];
	std::string names[12] = { "" };
	
	switch (numbofFiles) {
	case 12:
		pathToFile12.GetWindowTextW(getText);
		paths[12] = CT2A(getText);
		columnsFile12.GetWindowTextW(getText);
		tempString = CT2A(getText);
		noColumns[12] = std::stoi(tempString);
		matchFile12.GetWindowTextW(getText);
		tempString = CT2A(getText);
		matchNo[12] = std::stoi(tempString);
		skipFile12.GetWindowTextW(getText);
		tempString = CT2A(getText);
		sheetName12.GetWindowTextW(getText);
		names[11] = CT2A(getText);
		tempString.erase(std::remove_if(tempString.begin(), tempString.end(), std::isspace), tempString.end());
		splitStream.clear();
		splitStream.str(tempString);
		while (std::getline(splitStream, temp, ','))
			splitString.push_back(temp);
		for (int i = 0; i < splitString.size(); i++)
			skipcolumns[12].push_back(std::stoi(splitString[i]));
	case 11:
		pathToFile11.GetWindowTextW(getText);
		paths[11] = CT2A(getText);
		sheetName11.GetWindowTextW(getText);
		names[10] = CT2A(getText);
		columnsFile11.GetWindowTextW(getText);
		tempString = CT2A(getText);
		noColumns[11] = std::stoi(tempString);
		matchFile11.GetWindowTextW(getText);
		tempString = CT2A(getText);
		matchNo[11] = std::stoi(tempString);
		skipFile11.GetWindowTextW(getText);
		tempString = CT2A(getText);
		tempString.erase(std::remove_if(tempString.begin(), tempString.end(), std::isspace), tempString.end());
		splitStream.clear();
		splitStream.str(tempString);
		while (std::getline(splitStream, temp, ','))
			splitString.push_back(temp);
		for (int i = 0; i < splitString.size(); i++)
			skipcolumns[11].push_back(std::stoi(splitString[i]));
	case 10:
		pathToFile10.GetWindowTextW(getText);
		paths[10] = CT2A(getText);
		sheetName10.GetWindowTextW(getText);
		names[9] = CT2A(getText);
		columnsFile10.GetWindowTextW(getText);
		tempString = CT2A(getText);
		noColumns[10] = std::stoi(tempString);
		matchFile10.GetWindowTextW(getText);
		tempString = CT2A(getText);
		matchNo[10] = std::stoi(tempString);
		skipFile10.GetWindowTextW(getText);
		tempString = CT2A(getText);
		tempString.erase(std::remove_if(tempString.begin(), tempString.end(), std::isspace), tempString.end());
		splitStream.clear();
		splitStream.str(tempString);
		while (std::getline(splitStream, temp, ','))
			splitString.push_back(temp);
		for (int i = 0; i < splitString.size(); i++)
			skipcolumns[10].push_back(std::stoi(splitString[i]));
	case 9:
		pathToFile9.GetWindowTextW(getText);
		paths[9] = CT2A(getText);
		sheetName9.GetWindowTextW(getText);
		names[8] = CT2A(getText);
		columnsFile9.GetWindowTextW(getText);
		tempString = CT2A(getText);
		noColumns[9] = std::stoi(tempString);
		matchFile9.GetWindowTextW(getText);
		tempString = CT2A(getText);
		matchNo[9] = std::stoi(tempString);
		skipFile9.GetWindowTextW(getText);
		tempString = CT2A(getText);
		tempString.erase(std::remove_if(tempString.begin(), tempString.end(), std::isspace), tempString.end());
		splitStream.clear();
		splitStream.str(tempString);
		while (std::getline(splitStream, temp, ','))
			splitString.push_back(temp);
		for (int i = 0; i < splitString.size(); i++)
			skipcolumns[9].push_back(std::stoi(splitString[i]));
	case 8:
		pathToFile8.GetWindowTextW(getText);
		paths[8] = CT2A(getText);
		sheetName8.GetWindowTextW(getText);
		names[7] = CT2A(getText);
		columnsFile8.GetWindowTextW(getText);
		tempString = CT2A(getText);
		noColumns[8] = std::stoi(tempString);
		matchFile8.GetWindowTextW(getText);
		tempString = CT2A(getText);
		matchNo[8] = std::stoi(tempString);
		skipFile8.GetWindowTextW(getText);
		tempString = CT2A(getText);
		tempString.erase(std::remove_if(tempString.begin(), tempString.end(), std::isspace), tempString.end());
		splitStream.clear();
		splitStream.str(tempString);
		while (std::getline(splitStream, temp, ','))
			splitString.push_back(temp);
		for (int i = 0; i < splitString.size(); i++)
			skipcolumns[8].push_back(std::stoi(splitString[i]));
	case 7:
		pathToFile7.GetWindowTextW(getText);
		paths[7] = CT2A(getText);
		sheetName7.GetWindowTextW(getText);
		names[6] = CT2A(getText);
		columnsFile7.GetWindowTextW(getText);
		tempString = CT2A(getText);
		noColumns[7] = std::stoi(tempString);
		matchFile7.GetWindowTextW(getText);
		tempString = CT2A(getText);
		matchNo[7] = std::stoi(tempString);
		skipFile7.GetWindowTextW(getText);
		tempString = CT2A(getText);
		tempString.erase(std::remove_if(tempString.begin(), tempString.end(), std::isspace), tempString.end());
		splitStream.clear();
		splitStream.str(tempString);
		while (std::getline(splitStream, temp, ','))
			splitString.push_back(temp);
		for (int i = 0; i < splitString.size(); i++)
			skipcolumns[7].push_back(std::stoi(splitString[i]));
	case 6:
		pathToFile6.GetWindowTextW(getText);
		paths[6] = CT2A(getText);
		sheetName6.GetWindowTextW(getText);
		names[5] = CT2A(getText);
		columnsFile6.GetWindowTextW(getText);
		tempString = CT2A(getText);
		noColumns[6] = std::stoi(tempString);
		matchFile6.GetWindowTextW(getText);
		tempString = CT2A(getText);
		matchNo[6] = std::stoi(tempString);
		skipFile6.GetWindowTextW(getText);
		tempString = CT2A(getText);
		tempString.erase(std::remove_if(tempString.begin(), tempString.end(), std::isspace), tempString.end());
		splitStream.clear();
		splitStream.str(tempString);
		while (std::getline(splitStream, temp, ','))
			splitString.push_back(temp);
		for (int i = 0; i < splitString.size(); i++)
			skipcolumns[6].push_back(std::stoi(splitString[i]));
	case 5:
		pathToFile5.GetWindowTextW(getText);
		paths[5] = CT2A(getText);
		sheetName5.GetWindowTextW(getText);
		names[4] = CT2A(getText);
		columnsFile5.GetWindowTextW(getText);
		tempString = CT2A(getText);
		noColumns[5] = std::stoi(tempString);
		matchFile5.GetWindowTextW(getText);
		tempString = CT2A(getText);
		matchNo[5] = std::stoi(tempString);
		skipFile5.GetWindowTextW(getText);
		tempString = CT2A(getText);
		tempString.erase(std::remove_if(tempString.begin(), tempString.end(), std::isspace), tempString.end());
		splitStream.clear();
		splitStream.str(tempString);
		while (std::getline(splitStream, temp, ','))
			splitString.push_back(temp);
		for (int i = 0; i < splitString.size(); i++)
			skipcolumns[5].push_back(std::stoi(splitString[i]));
	case 4:
		pathToFile4.GetWindowTextW(getText);
		paths[4] = CT2A(getText);
		sheetName4.GetWindowTextW(getText);
		names[3] = CT2A(getText);
		columnsFile4.GetWindowTextW(getText);
		tempString = CT2A(getText);
		noColumns[4] = std::stoi(tempString);
		matchFile4.GetWindowTextW(getText);
		tempString = CT2A(getText);
		matchNo[4] = std::stoi(tempString);
		skipFile4.GetWindowTextW(getText);
		tempString = CT2A(getText);
		tempString.erase(std::remove_if(tempString.begin(), tempString.end(), std::isspace), tempString.end());
		splitStream.clear();
		splitStream.str(tempString);
		while (std::getline(splitStream, temp, ','))
			splitString.push_back(temp);
		for (int i = 0; i < splitString.size(); i++)
			skipcolumns[4].push_back(std::stoi(splitString[i]));
	case 3:
		pathToFile3.GetWindowTextW(getText);
		paths[3] = CT2A(getText);
		sheetName3.GetWindowTextW(getText);
		names[2] = CT2A(getText);
		columnsFile3.GetWindowTextW(getText);
		tempString = CT2A(getText);
		noColumns[3] = std::stoi(tempString);
		matchFile3.GetWindowTextW(getText);
		tempString = CT2A(getText);
		matchNo[3] = std::stoi(tempString);
		skipFile3.GetWindowTextW(getText);
		tempString = CT2A(getText);
		tempString.erase(std::remove_if(tempString.begin(), tempString.end(), std::isspace), tempString.end());
		splitStream.clear();
		splitStream.str(tempString);
		while (std::getline(splitStream, temp, ','))
			splitString.push_back(temp);
		for (int i = 0; i < splitString.size(); i++)
			skipcolumns[3].push_back(std::stoi(splitString[i]));
	case 2:
		pathToFile2.GetWindowTextW(getText);
		paths[2] = CT2A(getText);
		sheetName2.GetWindowTextW(getText);
		names[1] = CT2A(getText);
		columnsFile2.GetWindowTextW(getText);
		tempString = CT2A(getText);
		noColumns[2] = std::stoi(tempString);
		matchFile2.GetWindowTextW(getText);
		tempString = CT2A(getText);
		matchNo[2] = std::stoi(tempString);
		skipFile2.GetWindowTextW(getText);
		tempString = CT2A(getText);
		tempString.erase(std::remove_if(tempString.begin(), tempString.end(), std::isspace), tempString.end());
		splitStream.clear();
		splitStream.str(tempString);
		while (std::getline(splitStream, temp, ','))
			splitString.push_back(temp);
		for (int i = 0; i < splitString.size(); i++)
			skipcolumns[2].push_back(std::stoi(splitString[i]));
	case 1:
		pathToFile1.GetWindowTextW(getText);
		paths[1] = CT2A(getText); 
		sheetName1.GetWindowTextW(getText);
		names[0] = CT2A(getText);
		columnsFile1.GetWindowTextW(getText);
		tempString = CT2A(getText);
		noColumns[1] = std::stoi(tempString);
		matchFile1.GetWindowTextW(getText);
		tempString = CT2A(getText);
		matchNo[1] = std::stoi(tempString);
		skipFile1.GetWindowTextW(getText);
		tempString = CT2A(getText);
		tempString.erase(std::remove_if(tempString.begin(), tempString.end(), std::isspace), tempString.end());
		splitStream.clear();
		splitStream.str(tempString);
		while (std::getline(splitStream, temp, ','))
			splitString.push_back(temp);
		for (int i = 0; i < splitString.size(); i++)
			skipcolumns[1].push_back(std::stoi(splitString[i]));
		break;
	default:
		MessageBox(_T("Unknown number of files."), _T("Error"), MB_ICONERROR | MB_OK);
	}
	pathToFile0.GetWindowTextW(getText);
	paths[0] = CT2A(getText);
	columnsFile0.GetWindowTextW(getText);
	tempString = CT2A(getText);
	noColumns[0] = std::stoi(tempString);
	matchFile0.GetWindowTextW(getText);
	tempString = CT2A(getText);
	matchNo[0] = std::stoi(tempString);
	typeFile0.GetWindowTextW(getText);
	tempString = CT2A(getText);
	if (tempString == "Date" || tempString == "date")
		matchtype = 't';
	if (tempString == "Number" || tempString == "number")
		matchtype = 'f';
	skipFile0.GetWindowTextW(getText);
	tempString = CT2A(getText);
	tempString.erase(std::remove_if(tempString.begin(), tempString.end(), std::isspace), tempString.end());
	splitStream.clear();
	splitStream.str(tempString);
	while (std::getline(splitStream, temp, ','))
		splitString.push_back(temp);
	for (int i = 0; i < splitString.size(); i++)
		skipcolumns[0].push_back(std::stoi(splitString[i]) - 1);
	destinationPath.GetWindowTextW(getText);
	paths[13] = CT2A(getText);
	
	
	
	runMatchingProgram(paths, names, noColumns, matchNo, matchtype, skipcolumns);
}