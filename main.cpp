#include <iostream>
using namespace std;

int main()
{
    int laba2;
    switch (laba2)
    {

    case 1:
        setlocale(0, "");
        int numb;
        cin >> numb;
        for (int i = 2; i <= sqrt(numb); i++)
        {
            if (numb % i == 0)
            {

                cout << "НЕПроостое число" << endl;
                return 0;
            }

        }
        cout << "Проостое число" << endl;
        break;


    case 2:
        setlocale(0, "");
        int num;
        cout << "Введите число \n";
        cin >> num;
        if (num < 0)
        {
            cout << "Число является отрицательным";
        }
        else if (num > 0)
        {
            cout << "Числo является положительным";
        }
        else if (num == 0)
        {
            cout << "Число равен нулю ";
        }
        break;


    case 3:
        setlocale(0, "");
        int year;
        cout << "Введите год : \n ";
        cin >> year;
        if (year % 4 == 0)
        {
            cout << "Год является високосным";
        }
        else
        {
            cout << "Год не является високосным";
        }
        break;

    case 4:
        setlocale(0, "");
        int kratos;
        cin >> kratos;
        if (kratos % 5 == 0 && kratos % 3 == 0)
        {
            cout << "число кратное 3 и 5" << endl;
        }
        else
        {
            cout << "число не кратное 3 и 5" << endl;
        }
        break;
    
    case 5:
        setlocale(0, "");
        int num;
        int sqr;
        cin >> num;
        int res;
        while (num % 2 == 0)
        {

            num = num / 2;
            sqr = sqr + 2;


        }
        cout << sqr / 2 << endl;
        break;

    case 6:
        setlocale(0, "");
        int num1;
        double num2;
        double num3 = 0;
        cout << "Введите число: ";
        cin >> num2;
        for (num1 = 1; num1 < num2; num1++)
            if (num2 / num1 == int(num2 / num1))
                num3 += num1;
        if (num3 == num2)
            cout << "Введеное число является совершенным";
        else
            cout << "Введеное число не является совершенным";

        break;

    case 7:
        setlocale(0, "");
        int century;
        cin >> century;
        if (century % 100 == 0)
        {
            cout << "Год являеться вековым";
        }
        else
        {
            cout << "Год не является вековым";
        }
        break;

    default:
        break;
    }
  
