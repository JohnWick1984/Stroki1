// Stroki1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
#include <string>
#include<Windows.h>

void DelChar(string& str, int num)
{
    str.erase(str.begin() + num);
}

int main()
{
    setlocale(0, "");
    
    int num;
    string str ("They say that good books cannot become old. I can say the same about the books of a unique English writer of the 19th century, Charlotte Bronte.");
    
    cout << str;
    cout << endl;
    cout << "Введите номер символа, после которого хотите удалить текст: \n"; 
    cin >> num; 
    
    str.erase( num );
     
    
    cout << "Строка после удаления символа: " << str ;
}

