#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    bool runs = true;
    int op;
    int fact = 1;
    double a, b, res;
    while (runs) {
        cout << "Выберите операцию:\n\
             1. Сложение.\n\
             2. Вычитание.\n\
             3. Умножение.\n\
             4. Деление. \n\
             5. Возведение в степень. \n\
             6. Нахождения квадратного корня. \n\
             7. Нахождение 1 процента от числа. \n\
             8. Найти факториал числа. \n\
             9. Выйти из программы." << endl;
        cin >> op;
        switch (op) {
        case 1:
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            res = a + b;
            cout << "Результат: " << res << endl;
            break;
        case 2:
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            res = a - b;
            cout << "Результат: " << res << endl;
            break;
        case 3:
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            res = a * b;
            cout << "Результат: " << res << endl;
            break;
        case 4:
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            if (b == 0) {
                cout << "На ноль делить нельзя!" << endl;
            }
            else {
                res = a / b;
                cout << "Результат: " << res << endl;
            }
            break;
        case 5:
            cout << "Введите число, возводимое в степень: ";
            cin >> a;
            cout << "Введите степень: ";
            cin >> b;
            res = pow(a, b);
            cout << "Результат: " << res << endl;
            break;
        case 6:
            cout << "Введите число: ";
            cin >> a;
            if (a < 0) {
                cout << "Корня из отрицательного числа нет.";
            }
            else {
                res = sqrt(a);
                cout << "Результат: " << res << endl;
            }
            break;
        case 7:
            cout << "Введите число: ";
            cin >> a;
            res = a / 100;
            cout << "Результат: " << res << endl;
            break;
        case 8:
            cout << "Введите число: ";
            cin >> a;
            if (a == 1) {
                res = 1;
                cout << "Результат: " << res << endl;
                break;
            }
            if (a < 0) {
                cout << "Факториала отрицательного числа нет." << endl;
            }
            else {
                for (int i = 1; i <= a; i++) {
                    fact = fact * i;
                }
                res = fact;
                cout << "Результат: " << res << endl;
            }
            break;
        case 9:
            runs = false;
            break;
        }
    }
}