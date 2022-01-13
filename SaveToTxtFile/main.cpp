#include <iostream>
#include "CSaveToTxtFile.h"
using namespace std;


int main()
{

	CSaveToTxtFile save;
	save.saveStringToEndFile("example.txt", "test test");
	save.saveStringToEndFile("example.txt", "ads");

	//save.saveNewStringToFile("example2.txt", "test test");
	save.saveNewStringToFile("example2.txt", "ads");


    system("pause");
	return 0;
}