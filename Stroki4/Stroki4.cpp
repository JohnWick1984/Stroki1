// Stroki4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
#include <string>
#include<Windows.h>

void ReplaceChar(string& str)
{
    int simbol1 = ',';
    int simbol2 = '!';

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == simbol1)
        {
            str[i] = simbol2;
        }
    }
}
int main()
{
    setlocale(0, "");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    string str("They have a number of helper cells, ranging from astrocytes, to microglia, to ependymal cells as well.");
    ReplaceChar(str);

    cout << endl;
    cout << "Строка: " << str;


}