#pragma once
#include <vector> 
#include <cmath>
#include <time.h>
#include "fileio.h"

class configHolder {
public:
	configHolder() {  };
	~configHolder() {};
	std::string path = "", mode = "default";
	std::string dPath = "", sheetName;
	unsigned short ID = 0;
	unsigned long compColumn = 0;
	std::vector<char> columnDataType;   // i = integer, f = double, t = dd.mm.yyyy hh:mm:ss, d = dd.mm.yyyy, \t = hh:mm:ss, s = string
	configHolder(const configHolder& old) {
		path = old.path;
		dPath = old.dPath;
		ID = old.ID;
		compColumn = old.compColumn;
		columnDataType = old.columnDataType;
	};
};



class LoggingData {
public:
	LoggingData();
	~LoggingData();
	std::vector<std::string> column;
	double matchColumn;
	struct tm DateTime;
	LoggingData* matchedLog;
	configHolder* matchedLogConfig;
	int match(std::vector<LoggingData>, configHolder*, configHolder*);
	LoggingData(const LoggingData& old) {
		column = old.column;
		matchColumn = old.matchColumn;
		DateTime = old.DateTime;
		matchedLog = &*old.matchedLog;
		matchedLogConfig = &*old.matchedLogConfig;
	};
};

class LoggingDataHolder {
public:
	LoggingDataHolder() {};
	~LoggingDataHolder() {  };
	std::vector<LoggingData> data;
	configHolder config;
	FileIO file;
	LoggingDataHolder(const LoggingDataHolder& old) {
		data = old.data;
		config = old.config;
		//file = old.file;
	};
};