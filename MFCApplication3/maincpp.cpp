#include "stdafx.h"
#include "main.h"

/// TODO: Add array access check before each vector access

/*
Return codes:
0 = all ok
-1 = error opening config.csv
-2 = only one type of data file



*/

/*
Readme:


config.csv formating in text editor:



TypeOfFile;CompareColumnID;Mode;SourcePath;DestinationPath;excelFilename;DataType_1;DataType_2;...;DataType_n;






TypeOfFile: 0 or 1, you can assign several type 1, but only one type 0. All type 1's will be matched with the type 0 file

CompareColumnID: Which column to use for matching (integer).

Mode: Mode of matching, "closest" currently only option, must still be included in config.csv.

SourcePath: Path to the file, relative to the executables position
DestinationPath: Path to the merged file, relative to the executables position

DataType_x 1 through n: Type of data in nth column:
		'i' = integer, for whole numbers
		'f' = double for decimal precision,
		't' = dd.mm.yyyy hh:mm:ss,
		'd' = dd.mm.yyyy,
		'\t' = hh:mm:ss,
		's' = string,
		'~' = skip
		All data is currently being loaded as a string, except the compare column.


*/


/* To do:
	Check if datatype of match columns are the same

	replace config.csv with GUI

	Extra:
	Support for .xlsx files
		generating plots in .xlsx files
	Check if it is feasible to read from all files at once using multithreading
*/



/// TODO: Remove old config loading and replace it with new

/*
std::string paths[14] = { "" };
int noColumns[13] = { 0 };
int matchNo[13] = { 0 };
char matchtype;
std::vector<int> skipcolumns[13];
*/

int runMatchingProgram(std::string paths[14], std::string names[12], int noofColumns[13], int matchNo[13], char matchtype, std::vector<int> skipcolumns[13]) {

	//FileIO pathList("config.csv", false);
	std::vector<std::string> splitString;
	std::string temp = "";
	std::vector<LoggingDataHolder> readData;
	int id0Pos = 0;
	bool WRITE_CSV = false;

	/*
	temp = pathList.readFromFile();
	if (temp == "eof" || temp == "") { // error if paths file is empty
		std::cout << "\nNo config.csv file found, the file is empty, or it has a wrong format.\nSee readme.txt\n\nAutomatically closing in 5s.";
		Sleep(5000);
		return -1;
	}*/
	// load all paths from config file
	for (int i = 0; i < 13; i++) {
		if (paths[i] == "")
			continue;

		//splitString.clear();
		readData.resize(readData.size() + 1);

		readData[i].config.path = paths[i];
		if (i == 0) {
			readData[i].config.dPath = paths[13];
			readData[i].config.ID = 0;
		}
		else {
			readData[i].config.ID = 1;
			readData[i].config.sheetName = names[i - 1];
		}
		readData[i].config.mode = "closest";
		readData[i].config.compColumn = matchNo[i];
		readData[i].config.columnDataType.resize(noofColumns[i], 's');
		for (int l = 0; l < skipcolumns[i].size(); l++)
			readData[i].config.columnDataType[skipcolumns[i][l]] = '~';
		readData[i].config.columnDataType[readData[i].config.compColumn] = matchtype;
	

	}
		//std::stringstream splitStream(temp);
		//std::string temp2;
		/*
		while (std::getline(splitStream, temp2, ';'))
			splitString.push_back(temp2);
			
//		boost::split(splitString, temp, boost::is_any_of(";")); // split the line into an array of each column
		if (splitString.size() < 1)
			return -1;
		std::istringstream(splitString[0]) >> readData[readData.size() - 1].config.ID;
		if (readData[readData.size() - 1].config.ID == 0)
			id0Pos = (readData.size() - 1);
			
		std::istringstream(splitString[1]) >> readData[readData.size() - 1].config.compColumn;
		readData[readData.size() - 1].config.compColumn--;
		readData[readData.size() - 1].config.mode = splitString[2];
		readData[readData.size() - 1].config.path = splitString[3];
		readData[readData.size() - 1].config.dPath = splitString[4];
		readData[readData.size() - 1].config.sheetName = splitString[5];
		if (splitString[6] == "excel")
			WRITE_CSV = false;
		for (unsigned int i = 7; i < splitString.size(); i++) {  // read column type, this also gives the number of columns to read from the data file
			if (splitString[i] == "")
				break;
			readData[readData.size() - 1].config.columnDataType.resize(readData[readData.size() - 1].config.columnDataType.size() + 1);
			readData[readData.size() - 1].config.columnDataType[i - 7] = splitString[i][0];
		}
		temp = pathList.readFromFile(); // get next line
		}
		if (id0Pos == -1) {
			std::cout << "\nOnly 1 type of data file found, 2 is required for matching.\nSee readme.txt\n\nAutomatically closing in 5s.";
			Sleep(5000);
			return -2;
	}
	pathList.closeFile(); // close file after reading
	//*/
	for (unsigned int i = 0; i < readData.size(); i++) {
		readData[i].file.setPath(readData[i].config.path, false); // open the file
		temp = readData[i].file.readFromFile();
		for (int l = 0; temp != "eof" && temp != ""; l++) {
			readData[i].data.resize(readData[i].data.size() + 1);
			if(l > 0)
				temp = readData[i].file.readFromFile();
			splitString.clear();
			std::stringstream splitStream(temp);
			std::string temp2;
			while (std::getline(splitStream, temp2, ';'))
				splitString.push_back(temp2);
			if (splitString.size() < 1 || splitString[0] == "")
				break;
			for (unsigned int n = 0; n < readData[i].config.columnDataType.size(); n++) {
				if (i < readData.size() && l < readData[i].data.size() && n < readData[i].config.columnDataType.size() && n < splitString.size())
					if (n == readData[i].config.compColumn/* && /*Insert header check here l != 0*/) { 
						switch (readData[i].config.columnDataType[n]) {  // i = integer, f = double (handles scientific notation), t = dd.mm.yyyy hh:mm:ss, d = dd.mm.yyyy, \t = hh:mm:ss, s = string, ~ = skip
						case 'i':
							if (splitString[n].size() < 1)
								break;
							std::istringstream(splitString[n]) >> readData[i].data[l].matchColumn;
							break;
						case 'f':
							if (splitString[n].size() < 1)
								break;
							std::istringstream(splitString[n]) >> readData[i].data[l].matchColumn;
							if (splitString[n][splitString[n].size() - 1] == 'k')
								readData[i].data[l].matchColumn *= 1000;
							if (splitString[n][splitString[n].size() - 1] == 'u')
								readData[i].data[l].matchColumn *= 0.000001;
							if (splitString[n][splitString[n].size() - 1] == 'm')
								readData[i].data[l].matchColumn *= 0.001;
							if (splitString[n][splitString[n].size() - 1] == 'M')
								readData[i].data[l].matchColumn *= 1000000;
							if (splitString[n][splitString[n].size() - 1] == 'G')
								readData[i].data[l].matchColumn *= 1000000000;
							if (splitString[n][splitString[n].size() - 1] == 'n')
								readData[i].data[l].matchColumn *= 0.000000001;
							break;
						case 't':
							if (splitString[n].size() < 1)
								break;
							if(splitString[n].size() >= 2)
								readData[i].data[l].DateTime.tm_mday = (splitString[n][0] - '0') * 10 + (splitString[n][1] - '0');
							if (splitString[n].size() >= 5)
								readData[i].data[l].DateTime.tm_mon = ((splitString[n][3] - '0') * 10 + (splitString[n][4] - '0')) - 1;
							if (splitString[n].size() >= 10)
								readData[i].data[l].DateTime.tm_year = ((splitString[n][6] - '0') * 1000 + (splitString[n][7] - '0') * 100 + (splitString[n][8] - '0') * 10 + (splitString[n][9] - '0')) - 1900;
							if (splitString[n].size() >= 13)
								readData[i].data[l].DateTime.tm_hour = (splitString[n][11] - '0') * 10 + (splitString[n][12] - '0');
							if (splitString[n].size() >= 16)
								readData[i].data[l].DateTime.tm_min = (splitString[n][14] - '0') * 10 + (splitString[n][15] - '0');
							if (splitString[n].size() >= 19)
								readData[i].data[l].DateTime.tm_sec = (splitString[n][17] - '0') * 10 + (splitString[n][18] - '0');
							break;
						case 'd':
							if (splitString[n].size() < 10)
								break;
							if (splitString[n].size() >= 2)
								readData[i].data[l].DateTime.tm_mday = (splitString[n][0] - '0') * 10 + (splitString[n][1] - '0');
							if (splitString[n].size() >= 5)
								readData[i].data[l].DateTime.tm_mon = ((splitString[n][3] - '0') * 10 + (splitString[n][4] - '0')) - 1;
							if (splitString[n].size() >= 10)
								readData[i].data[l].DateTime.tm_year = ((splitString[n][6] - '0') * 1000 + (splitString[n][7] - '0') * 100 + (splitString[n][8] - '0') * 10 + (splitString[n][9] - '0')) - 1900;
							break;
						case '\t':
							if (splitString[n].size() >= 2)
								readData[i].data[l].DateTime.tm_hour = (splitString[n][0] - '0') * 10 + (splitString[n][1] - '0');
							if (splitString[n].size() >= 5)
								readData[i].data[l].DateTime.tm_min = (splitString[n][3] - '0') * 10 + (splitString[n][4] - '0');
							if (splitString[n].size() >= 8)
								readData[i].data[l].DateTime.tm_sec = (splitString[n][6] - '0') * 10 + (splitString[n][7] - '0');
							break;
						case 's':

							break;
						case '~':
							break;
						}
					}
					else {
						if(readData[i].config.columnDataType[n] != '~')
							readData[i].data[l].column.push_back(splitString[n]);
					}
			}
			//if(readData[i].config.ID == 0) debug loading
				//std::cout << 100 * (double)l / (double)227 << "%" << std::endl;
		}
		readData[i].file.closeFile();
	}
	/*/ Debug - Output all data that was read
	for (int n = 0; n < readData.size(); n++) {
		for (int i = 0; i < readData[n].data.size(); i++) {
			std::cout << i << "\t";
			for (int l = 0; l < readData[n].data[i].column.size(); l++) {
				std::cout << readData[n].data[i].column[l] << "\t";
			}
			std::cout << readData[n].data[i].day << "." << readData[n].data[i].month << "." <<
				readData[n].data[i].year << "  " << readData[n].data[i].hour << ":" << readData[n].data[i].minute <<
				":" << readData[n].data[i].second << std::endl;
			Sleep(5);
		}
	}//*/

	if (readData.size() > 2) {

		std::vector<std::thread*> threads;
		std::vector<double> threadProgress;

		threads.resize(readData.size() - 1);
		threadProgress.resize(threads.size());

		bool id0Passed = false;

		for (unsigned int i = 0; i < threads.size(); i++) {
			if (!id0Passed && readData[i].config.ID == 0) {
				id0Passed = true;
				i--;
				continue;
			}
			if (WRITE_CSV) {
				if (id0Passed)
					threads[i] = new std::thread(runMultithreadedCSV, &readData[i + 1], &readData[id0Pos], &threadProgress[i], i);
				else
					threads[i] = new std::thread(runMultithreadedCSV, &readData[i], &readData[id0Pos], &threadProgress[i], i);
			}
			else {
				if (id0Passed)
					threads[i] = new std::thread(runMultithreaded, &readData[i + 1], &readData[id0Pos], &threadProgress[i], i);
				else
					threads[i] = new std::thread(runMultithreaded, &readData[i], &readData[id0Pos], &threadProgress[i], i);
			}
		}

		unsigned int joined = 0;
		double matchProgress = 0.0;
		// Use this to make progress bar stuff
		while (joined < threads.size()) {
			Sleep(1100);
			//system("cls");
			//std::cout << "Matching progress: " << matchProgress / threads.size() << "%" << std::endl;
			matchProgress = 0.0;
			for (unsigned int i = 0; i < threads.size(); i++) {
				matchProgress += threadProgress[i];
				if (threads[i]) {
					if (threads[i]->joinable() && threadProgress[i] > 98.0) {
						threads[i]->join();
						joined++;
						threads[i] = nullptr;
						delete threads[i];
					}
				}
			}
		}
	}
	else {
 		runMultithreaded(&readData[1], &readData[0], nullptr, 0);
	}

	ExcelHandler excel;
	std::stringstream tempStream;

	for (int n = 0; n < readData.size(); n++) {
		if (readData[n].config.ID == 0)
			continue;
		excel.createSheet(readData[n].config.sheetName);
		for (int i = 0; i < readData[n].data.size() - 1; i++) {
			tempStream.str(std::string());
			tempStream.clear(); //clear stream to be ready for data
			tempStream << std::scientific;
			if (readData[n].data[i].DateTime.tm_mday < 10)
				tempStream << "0";
			tempStream << std::to_string(readData[n].data[i].DateTime.tm_mday) + ".";
			if (readData[n].data[i].DateTime.tm_mon < 9)
				tempStream << "0";
			tempStream << std::to_string(readData[n].data[i].DateTime.tm_mon + 1) + "." + std::to_string(readData[n].data[i].DateTime.tm_year + 1900) + " ";
			if (readData[n].data[i].DateTime.tm_hour < 10)
				tempStream << "0";
			tempStream << std::to_string(readData[n].data[i].DateTime.tm_hour) + ":" + std::to_string(readData[n].data[i].DateTime.tm_min) + ":";
			if (readData[n].data[i].DateTime.tm_sec < 10)
				tempStream << "0";
			tempStream << std::to_string(readData[n].data[i].DateTime.tm_sec);
			excel.writeToCell(n-1, i, 0, tempStream.str(), 's');
			for (int l = 0; l < readData[n].data[i].column.size(); l++) {
				excel.writeToCell(n-1, i, l + 1, readData[n].data[i].column[l], 's');
			}
			
			tempStream.str(std::string());
			tempStream.clear(); //clear stream to be ready for data
			tempStream << std::scientific;
			if (readData[n].data[i].matchedLog) {
				if (readData[n].data[i].matchedLog->DateTime.tm_mday < 10)
					tempStream << "0";
				tempStream << std::to_string(readData[n].data[i].matchedLog->DateTime.tm_mday) + ".";
				if (readData[n].data[i].matchedLog->DateTime.tm_mon < 9)
					tempStream << "0";
				tempStream << std::to_string(readData[n].data[i].matchedLog->DateTime.tm_mon + 1) + "." + std::to_string(readData[n].data[i].matchedLog->DateTime.tm_year + 1900) + " ";
				if (readData[n].data[i].matchedLog->DateTime.tm_hour < 10)
					tempStream << "0";
				tempStream << std::to_string(readData[n].data[i].matchedLog->DateTime.tm_hour) + ":" + std::to_string(readData[n].data[i].matchedLog->DateTime.tm_min) + ":";
				if (readData[n].data[i].matchedLog->DateTime.tm_sec < 10)
					tempStream << "0";
				tempStream << std::to_string(readData[n].data[i].matchedLog->DateTime.tm_sec);
				excel.writeToCell(n-1, i, readData[n].data[i].column.size() + 1, tempStream.str(), 's');
				for (int l = 0; l < readData[n].data[i].matchedLog->column.size(); l++) 
					excel.writeToCell(n-1, i, l + 2 + readData[n].data[i].column.size(), readData[n].data[i].matchedLog->column[l], 's');
				
			}
		}
	}
	excel.save(readData[0].config.dPath + ".xls");
	
return 0;
}



void runMultithreadedCSV(LoggingDataHolder* readData, LoggingDataHolder* compData, double* threadProg, int threadNumber) {
	std::stringstream tempStream;

	char compType = readData->config.columnDataType[readData->config.compColumn];

	readData->file.setPath(readData->config.dPath + ".csv", true);

	for (unsigned int l = 0; l < readData->data.size(); l++) { // loop through all rows in each data set
															   tempStream.str(std::string());
															   tempStream.clear(); //clear stream to be ready for data
															   tempStream << std::scientific;
		readData->data[l].matchedLog = &compData->data[(readData->data[l].match(compData->data, &compData->config, &readData->config))];
		if (compType == '\t' || compType == 't' || compType == 'd')
		tempStream << (std::to_string(readData->data[l].DateTime.tm_mday) + "." + std::to_string(readData->data[l].DateTime.tm_mon - 1) + "." + std::to_string(readData->data[l].DateTime.tm_year - 1900) +
		" " + std::to_string(readData->data[l].DateTime.tm_hour) + ":" + std::to_string(readData->data[l].DateTime.tm_min) + ":" + std::to_string(readData->data[l].DateTime.tm_sec)
		+ ";");
		else
		tempStream << std::to_string(readData->data[l].matchColumn);
		for (unsigned int n = 0; n < readData->data[l].column.size(); n++)
		tempStream << readData->data[l].column[n] + ";";
		if (compType == '\t' || compType == 't' || compType == 'd')
		tempStream << (std::to_string(readData->data[l].matchedLog->DateTime.tm_mday) + "." + std::to_string(readData->data[l].matchedLog->DateTime.tm_mon + 1) + "." + std::to_string(readData->data[l].matchedLog->DateTime.tm_year + 1900) +
		" " + std::to_string(readData->data[l].matchedLog->DateTime.tm_hour) + ":" + std::to_string(readData->data[l].matchedLog->DateTime.tm_min) + ":" + std::to_string(readData->data[l].matchedLog->DateTime.tm_sec)
		+ ";");
		else
		tempStream << std::to_string(readData->data[l].matchedLog->matchColumn);
		for (unsigned int n = 0; n < readData->data[l].matchedLog->column.size(); n++)
		tempStream << readData->data[l].matchedLog->column[n] + ";";
		readData->file.writeToFile(tempStream.str());
		*threadProg = 100 * (double)l / (double)readData->data.size();
	}
	readData->file.closeFile();
}

void runMultithreaded(LoggingDataHolder* readData, LoggingDataHolder* compData, double* threadProg, int threadNumber) {
	
	
	for (unsigned int l = 0; l < readData->data.size(); l++) { // loop through all rows in each data set
		int testNum;
		do {			
			 testNum = readData->data[l].match(compData->data, &compData->config, &readData->config);
		} while (testNum < 0 || testNum > compData->data.size());
		readData->data[l].matchedLog = &compData->data[testNum];
		if(threadProg != nullptr)
			*threadProg = 100 * (double)l / (double)readData->data.size();
	}
}
