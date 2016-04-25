#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
//#include <Windows.h>


class FileIO {
public:
	FileIO();
	FileIO(std::string, bool);
	~FileIO();
	FileIO(const FileIO& old) {
		Path = old.Path;
		checkAllOutput = old.checkAllOutput;
	}
private:
	std::fstream theFile;
	std::string Path;
	bool checkAllOutput;
	std::streampos curGet, curPut, prevGet, prevPut, eof, startGet;
	
public:
	std::string getPath();
	std::string setPath(std::string, bool);

	bool checkEnabled();  //NYI
	void toggleCheck();   //NYI

	void writeToFile(std::string);
	std::string readFromFile(unsigned int);
	std::string readFromFile(char);
	std::string readFromFile();

	void closeFile();
	void reopenFile(bool);
	void reopenFileatStart();

};