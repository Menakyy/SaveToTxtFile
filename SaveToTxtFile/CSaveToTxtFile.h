#pragma once
#include <iostream>
#include <fstream>
#include <string>


class CSaveToTxtFile
{
	
	//ofstream myfile;

public:

	void saveStringToEndFile(std::string fileName, std::string content);
	void saveNewStringToFile(std::string fileName, std::string content);
};


