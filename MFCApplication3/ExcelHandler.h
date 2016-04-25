#pragma once
#include "ExcelFormat.h"
#include <string>
#ifdef _WIN32

#define WIN32_LEAN_AND_MEAN
//#include <windows.h>
#include <shellapi.h>
#include <crtdbg.h>

#else // _WIN32

#define	FW_NORMAL	400
#define	FW_BOLD		700

#endif // _WIN32

using namespace ExcelFormat;

class ExcelHandler {
private:

	BasicExcel book;
	std::vector<BasicExcelWorksheet*> sheets;

public:
	ExcelHandler();
	~ExcelHandler();

	//CellFormat *formatGeneral, *formatDate;

	void createSheet(std::string);

	void writeToCell(int, int, int, std::string, char);

	void save(std::string);

};