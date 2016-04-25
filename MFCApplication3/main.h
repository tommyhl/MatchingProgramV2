#pragma once
#define _SCL_SECURE_NO_WARNINGS
#include "fileio.h"
#include "LoggingData.h"
#include "ExcelHandler.h"
#include <vector>
#include <ctime>
#include <sstream>
#include <time.h>
#include <iomanip>
#include <thread>
//#include <boost\algorithm\string.hpp>


void writeDatatoXLS(LoggingDataHolder*); // write Excel file
void runMultithreaded(LoggingDataHolder*, LoggingDataHolder*, double*, int); // only matching
void runMultithreadedCSV(LoggingDataHolder*, LoggingDataHolder*, double*, int); // matching and writing CSV file
int runMatchingProgram(std::string[14], std::string[12], int[13], int[13], char, std::vector<int>[13]);