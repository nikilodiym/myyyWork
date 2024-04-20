#include <iostream>

using namespace std;

double obchyslennya_vidstan(double v, double t, double a) {
    return v * t + (a * t * t) / 2;
}

int main() {
    double v, t, a;
    cout << "Enter speed (m/s): ";
    cin >> v;
    cout << "Enter the time (s):";
    cin >> t;
    cout << "Enter acceleration (m/s^2):";
    cin >> a;

    double S = obchyslennya_vidstan(v, t, a);
    cout << "Distance traveled:" << S << " ì" << endl;

    return 0;
}
