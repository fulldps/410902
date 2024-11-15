#include <iostream>
#include <cmath>
#include <locale.h>

using namespace std;

int main() {
    setlocale(0, "Russian");

    int x, y, z;
    cin >> x >> y >> z;

    if (fabs(x) - fabs(y) == 0 || fabs(x) - fabs(z) == 0 || fabs(z) - fabs(y) == 0) {
        cout << "Среди чисел ЕСТЬ взаимно противоположная пара";
    }

    else {
        cout << "Среди чисел НЕТ взаимно противоположной пары";
    }

    return 0;
}
