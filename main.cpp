#include <iostream>
using namespace std;

int main() {
    double L;
    double pi = 3.14;

    cout << "Enter the length of the circle: " << endl;
    cin >> L;

    double R = L / (2 * pi);
    double S = pi * R * R;
    cout << "The radius of the circle: " << R << endl;
    cout << "Circle area: " << S << endl;

    system("pause");
    return 0;
}
