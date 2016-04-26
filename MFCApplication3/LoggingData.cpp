#include "stdafx.h"
#include "LoggingData.h"

LoggingData::LoggingData() {
	DateTime.tm_isdst = 1;
	matchedLog = nullptr;
	matchedLogConfig = nullptr;
}

LoggingData::~LoggingData() {
	//delete matchedLog;
	matchedLog = nullptr;
	matchedLogConfig = nullptr;
}

int LoggingData::match(std::vector<LoggingData> otherLog, configHolder *otherConfig, configHolder *thisConfig)
{
	/*LoggingData class data members:
	std::vector<double> column;
	short month;
	short day;
	short year;
	short hour;
	short minute;
	short second;
	LoggingData* matchedLog;
	configHolder* mathedLogConfig;
	*/
	int iDifference = 0, iTemp = 0, closestID = -1;
	int tempisd = 100;
	//int lastI = 0;
	double dDifference = 0.0, dTemp = 0.0;
	for (unsigned int i = 0; i < otherLog.size(); i++) {
		if(otherConfig->compColumn < otherConfig->columnDataType.size())
			switch(otherConfig->columnDataType[otherConfig->compColumn]) {
				// i = integer, f = double (handles scientific notation), t = dd.mm.yyyy hh:mm:ss, d = dd.mm.yyyy, \t = hh:mm:ss, s = string
			case 'i':
				if (closestID == -1) {
					iDifference = abs(otherLog[i].matchColumn - matchColumn);
					closestID = i;
				}
				else if ((iTemp = abs(otherLog[i].matchColumn - matchColumn)) < iDifference) {
					iDifference = iTemp;
					closestID = i;
				}
				break;
			case 'f':
				if (closestID == -1) {
					dDifference = abs(otherLog[i].matchColumn - matchColumn);
					closestID = i;
				}
				else if ((dTemp = abs(otherLog[i].matchColumn - matchColumn)) < dDifference) {
					dDifference = dTemp;
					closestID = i;
				}
				break;
			case 't': // calculate difference in seconds
				if (mktime(&otherLog[i].DateTime) < 0)
					break;

				iTemp = abs(difftime(mktime(&DateTime), mktime(&otherLog[i].DateTime)));
				if (closestID == -1) {
					iDifference = iTemp;
					closestID = i;
				}
				else if (iTemp < iDifference) {
					iDifference = iTemp;
					closestID = i;
				}
				break;
			case 'd':
				iTemp = abs(difftime(mktime(&DateTime), mktime(&otherLog[i].DateTime)));
				if (closestID == -1) {
					iDifference = iTemp;
					closestID = i;
				}
				else if (iTemp < iDifference) {
					iDifference = iTemp;
					closestID = i;
				}
				break;
			case '\t':
				iTemp = abs(difftime(mktime(&DateTime), mktime(&otherLog[i].DateTime)));
				if (closestID == -1) {
					iDifference = iTemp;
					closestID = i;
				}
				else if (iTemp < iDifference) {
					iDifference = iTemp;
					closestID = i;
				}
				break;
			case 's': // NYI
				break;
			}
		
		/*if ((i - lastI) > 1.0)
			Sleep(1);
		if (i >= 28794)
			Sleep(1);
		lastI = i;*/
	}
	matchedLogConfig = otherConfig;
	return closestID;
}
