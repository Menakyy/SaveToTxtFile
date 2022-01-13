#include "CSaveToTxtFile.h"


using namespace std;

void CSaveToTxtFile::saveStringToEndFile(std::string fileName, std::string content)
{
    ofstream myfile(fileName, ios::out | ios::app);
    if (myfile.is_open())
    {
        myfile << content << "\n";
        myfile.close();
    }
    else
    {
        cout << "Nie mozna otworzyc pliku!" << endl;
    }
}
