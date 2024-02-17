// PR1!++.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
using std::cout;
using std::cin;


int main()
{
    setlocale(LC_ALL, "RUS");

    
    const int a = 3;
    const int b = 5;
    double arr[a][b];

    for (int i = 0; i < a; ++i) {
        std::cout << "ВВЕСТИ элементы "  << i + 1 << "  ";
       
        for (int j = 0; j < b; ++j) {
            std::cin >> arr[i][j];
        } 
    }

    for (int i = 0; i < a; ++i) {
        double sum = 0;

        for (int j = 0; j < b; ++j) {
            sum += arr[i][j];
        }
        double sredarifmetich = sum / b; 
        std::cout << "Среднее арифметическое " << i + 1 << "   " << sredarifmetich << std::endl;
    }
    return 0;

}


