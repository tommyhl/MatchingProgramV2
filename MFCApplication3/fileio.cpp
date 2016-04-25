#include "stdafx.h"
#include "fileio.h"

FileIO::FileIO() {
	
}

FileIO::FileIO(std::string path, bool truncate = false) {
	
	if(truncate)
		theFile.open(path, std::fstream::in | std::fstream::out | std::fstream::trunc);
	else
		theFile.open(path, std::fstream::in | std::fstream::out | std::fstream::app);
	Path = path;
	if (!theFile.is_open()) {
		Sleep(2000);
		theFile.open(path);
	}/*
	if (check) 
		checkAllOutput = true;
	else
		checkAllOutput = false; */
	curGet = theFile.tellg();
	curPut = theFile.tellp();
	prevGet = -1;
	prevPut = -1;
	startGet = curPut;
	eof = curPut;
}
FileIO::~FileIO()
{
	if (theFile.is_open())
		theFile.close();
}

std::string FileIO::getPath() {
	return Path;
}

std::string FileIO::setPath(std::string path, bool truncate = false) {
	if (theFile.is_open())
		theFile.close();
	Path = path;
	if (truncate)
		theFile.open(path, std::fstream::in | std::fstream::out | std::fstream::trunc);
	else
		theFile.open(path, std::fstream::in | std::fstream::out | std::fstream::app);
	Path = path;
	if(!theFile.is_open()) {
		Sleep(2000);
		theFile.open(path);
	}   /* NYI
	if (check)
		checkAllOutput = true;
	else
		checkAllOutput = false;*/
	curGet = theFile.tellg();
	curPut = theFile.tellp();
	prevGet = -1;
	prevPut = -1;
	startGet = curPut;
	eof = curPut;
	return Path;
}

bool FileIO::checkEnabled() {
	return checkAllOutput;
}

void FileIO::toggleCheck() {
	if (checkAllOutput)
		checkAllOutput = false;
	else
		checkAllOutput = true;
}

void FileIO::writeToFile(std::string text) {
	if (theFile.is_open()) {
		curPut = eof;
		theFile << text << std::endl;
		prevPut = curPut;
		curPut = theFile.tellg();
		eof = curPut;
		//std::cout << text << " succesfull" << std::endl; //debug
	}
	//std::cout << "Error writing to file: " << path << std::endl; //debug
}

std::string FileIO::readFromFile(unsigned int lineNumber = 0) {
	std::string temptext = "";
	if (theFile.is_open() && !theFile.eof()) {
		if (lineNumber == 0) {
			curGet = prevPut;
			getline(theFile, temptext);
		}
		else {			
			theFile.seekg(startGet);
			for (int i = 0; i < lineNumber; i++)
				std::getline(theFile, temptext);
			curGet = theFile.tellg();
			getline(theFile, temptext);
		}
	}
	return temptext;
}

std::string FileIO::readFromFile(char delim) {
	std::string temptext = "";
	if (theFile.is_open() && !theFile.eof()) {
		std::getline(theFile, temptext, delim);
	}
	else {
		return "eof";
		theFile.clear();
		theFile.seekg(0, std::ios::beg);
	}
	return temptext;
}

std::string FileIO::readFromFile() {
	std::string temptext = "";
	if (theFile.is_open() && !theFile.eof()) {
		std::getline(theFile, temptext);
	}
	else {
		return "eof";
		theFile.clear();
		theFile.seekg(0, std::ios::beg);
	}
	return temptext;
}

void FileIO::reopenFile(bool truncate = false)
{
	theFile.close();
	if (truncate)
		theFile.open(Path, std::fstream::in | std::fstream::out | std::fstream::trunc);
	else
		theFile.open(Path, std::fstream::in | std::fstream::out | std::fstream::app);
}

void FileIO::reopenFileatStart()
{	
	theFile.close();
	theFile.clear();
	theFile.open(Path, std::fstream::in | std::fstream::out | std::fstream::app);
	theFile.seekg(0, std::ios::beg);
}

void FileIO::closeFile() {
	if (theFile.is_open()) {
		theFile.close();
		theFile.clear();
	}
}