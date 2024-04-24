#include <iostream>
#include <Windows.h>
using namespace std;


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(hConsole, 0x06);
	cout << "\"U lukomor'a dub zelenij," << endl;
	cout << " Zlataya zep na dupe tom," << endl;
	cout << " I dnem i nochju kot uchenij" << endl;
	cout << " vse hodit po cepi krugom\"" << endl;
	SetConsoleTextAttribute(hConsole, 0x07);
	

	system("pause");
	return 0;
}