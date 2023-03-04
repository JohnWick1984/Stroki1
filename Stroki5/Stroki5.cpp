// Stroki5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
#include <string>
#include<Windows.h>

int CountChar(string& str, char simbol)
{
    int count = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == simbol)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    setlocale(0, "");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char simbol;

    string str("They have a number of helper cells, ranging from astrocytes, to microglia, to ependymal cells as well.");

    cout << "Введите символ: "; 
    cin >> simbol; 
    cout << endl;
    cout << "Количество символов " << simbol << " в строке: " << CountChar(str, simbol);


}

