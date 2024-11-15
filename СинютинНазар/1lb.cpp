//Подключаю заголовочный файл для работы с вводом-выводом
#include <iostream>
//Подключаю библиотеку для работы с тригонометрическими функциями
#include <cmath>
//Использую пространство имен std
using namespace std;


int main() {
    double rad, degree, z1, z2, zmin2;
    //Ввод значения degree
    cin >> degree;
    //Выполняется, если значения введены в радианах
    rad = degree * M_PI / 180;
    z1 = 2 * ((1 - pow(tan(rad / 2), 2)) / (2 * tan(rad / 2)));
    z2 = (sqrt(1 - pow(sin(rad), 2))) / sin(rad);
    zmin2 = -(sqrt(1 - pow(sin(rad), 2))) / sin(rad);

    cout << z1 << endl << z2 << endl << zmin2;
    
    //Завершаю выполнение программы
    return 0;
}
