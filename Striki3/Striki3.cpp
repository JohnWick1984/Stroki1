// Striki3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
#include <string>
#include<Windows.h>

void InsertChar(string& str, int num, char simbol)
{
    str.insert(num, 1, simbol);
}

int main()
{
    int num;
    char simbol;
    string str("They have a number of helper cells, ranging from astrocytes, to microglia, to ependymal cells as well.");
    cout << "Введите номер позиции куда необходимо вставить символ: ";
    cin >> num;
    cout << "Введите символ для добовления в строку: "; 
    cin >> simbol; 
    cout << endl;
    InsertChar(str, num, simbol);

    cout << endl;
    cout << "Строка: " << str;
}

