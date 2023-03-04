// Stroki2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
#include <string>
#include<Windows.h>


void DelAllChar(string& str, char simbol)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == simbol)
        {
            str.erase(i, 1);
        }
    }
}
int main()
{
    setlocale(0, "");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    
    char simbol;

    string str = "Hello my dear friends";

    cout << "Введите символ для удаления из строки: "; 
    cin >> simbol; 
    cout << endl;
    DelAllChar(str, simbol);

    cout << endl;
    cout << "Строка: " << str;
}

