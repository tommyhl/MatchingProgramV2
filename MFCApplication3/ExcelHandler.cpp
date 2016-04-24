#include "ExcelHandler.h"

\

ExcelHandler::ExcelHandler()
{
	/*XLSFormatManager fmt_mgr(book);
	formatDate = new CellFormat(fmt_mgr);
	formatGeneral = new CellFormat(fmt_mgr);
	formatDate->set_format_string(XLS_FORMAT_DATETIMEC);
	formatGeneral->set_format_string(XLS_FORMAT_GENERAL);*/
}


ExcelHandler::~ExcelHandler()
{
	/*delete formatDate;
	delete formatGeneral;*/
}

void ExcelHandler::save(std::string path) {
	book.SaveAs(path.c_str());
}

void ExcelHandler::createSheet(std::string name) {
	book.AddWorksheet(name.c_str());
	BasicExcelWorksheet *tempPointer = book.GetWorksheet(book.GetTotalWorkSheets() - 1);
	sheets.push_back(&*tempPointer);
	tempPointer = nullptr;
}

void ExcelHandler::writeToCell(int sheetNumber, int row, int column, std::string text, char type) {
	sheets[sheetNumber]->Cell(row, column)->SetString(text.c_str());
}