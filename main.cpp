#include <iostream>
using namespace std;

int main() {
    system("chcp 1251>nul");
    int R1 = 2;
    int R2 = 4;
    int R3 = 8;
    double R0;

    R0 = 1.0 / (1.0 / R1 + 1.0 / R2 + 1.0 / R3);

    cout << "Значення опору R0: " << R0 << endl;

    system("pause");
    return 0;
}
