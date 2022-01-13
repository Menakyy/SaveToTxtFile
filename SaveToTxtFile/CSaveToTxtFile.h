#pragma once
#include <iostream>
#include <fstream>
#include <string>


class CSaveToTxtFile
{
	
	//ofstream myfile;

public:

	/*
		Funkcja zapisuje string do pliku tekstowego o nazwie 'fileName'
		Ponownie uzycie funkcji spowoduje zapis kolejnego string w nowej
		linijce
	*/
	void saveStringToEndFile(std::string fileName, std::string content);

	/*
	Funkcja zapisuje string do pliku tekstowego o nazwie 'fileName'
	Ponownie uzycie funkcji spowoduje usuniecie calej zawartosci pliku
	i wpisanie nowego stringa
*/
	void saveNewStringToFile(std::string fileName, std::string content);
};


