#include <iostream>
#include <Windows.h>

int main() {
    SetConsoleOutputCP(1251); // ������������ ��������� ������� CP1251 ��� ����������� ����������� �������
    cout << "\n" << (char)201 << (char)205 << (char)205 << (char)205 << (char)187 << endl;
    cout << symbol_201 << endl;
    cout << symbol_205 << endl;
    cout << symbol_187 << endl;

    char symbol_201 = 201;

    system("pause");
    return 0;
}
