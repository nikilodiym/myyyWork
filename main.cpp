#include <iostream>
#include <Windows.h>
using namespace std;


int main () {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	cout << "\t\t\tName       : ";
	SetConsoleTextAttribute(hConsole, 0x0E);
	cout << "The war and the peace" << endl;
	SetConsoleTextAttribute(hConsole, 0x07);
	cout << "\t\t\tAvtor      :   L.N. Tolstoj" << endl;
	cout << "\t\t\tIzdatelstvo: Piter" << endl;
	cout << "\t\t\tName       : ";
	SetConsoleTextAttribute(hConsole, 0x0D);
	cout << "500" << endl;
	SetConsoleTextAttribute(hConsole, 0x07);

	system("pause");
	return 0;
}