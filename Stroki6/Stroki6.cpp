// Stroki6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
#include <string>
#include<Windows.h>

void NumberCharacters(string& str)
{
    int countNum = 0, temp, countLetter = 0, countSimbol = 0;

    for (int i = 0; i < str.length(); i++)
    {
        temp = (int)(str[i]);

        if (temp >= 48 && temp < 58)
        {
            countNum++;
        }
        if (temp >= 65 && temp < 91)
        {
            countLetter++;
        }
        if (temp >= 97 && temp < 123)
        {
            countLetter++;
        }
        if (temp >= 32 && temp < 48)
        {
            countSimbol++;
        }
        if (temp >= 58 && temp < 65)
        {
            countSimbol++;
        }
        if (temp >= 91 && temp < 97)
        {
            countSimbol++;
        }
        if (temp >= 123 && temp <= 126)
        {
            countSimbol++;
        }
    }
    cout << "Количество цифр в строке: " << countNum << endl;
    cout << "Количество букв в строке: " << countLetter << endl;
    cout << "Количество символов в строке: " << countSimbol << endl;
}


int main()
{
    setlocale(0, "");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string str("They have a number of helper cells, ranging from astrocytes, to microglia, to ependymal cells as well 12345.");

    cout << endl;
    NumberCharacters(str);


}

