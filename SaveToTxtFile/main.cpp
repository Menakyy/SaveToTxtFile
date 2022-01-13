#include <iostream>
#include "CSaveToTxtFile.h"
using namespace std;


int main()
{

	CSaveToTxtFile save;
	save.saveStringToEndFile("example.txt", "test test");
	save.saveStringToEndFile("example.txt", "ads");

    system("pause");
	return 0;
}