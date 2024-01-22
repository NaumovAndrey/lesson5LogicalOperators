#include "pch.h"
#include "iostream"
#include <conio.h>
#include <clocale>



using namespace std;

void task1();
void task2();
void task3();
void task4();
void task5();
void task6();

int main(){
    setlocale(LC_ALL, "Rus");

    cout << "Домашняя работа к пятой лекции. Логические операторы и сложные условия" << endl;


    while (true)
    {
        cout << "1: Полёт нормальный!" << endl;
        cout << "2: Майские!" << endl;
        cout << "3: Майские — усложнение." << endl;
        cout << "4: Банкомат — 2" << endl;
        cout << "5: Усложнение задачи про кирпич." << endl;
        cout << "6: Грустное совершеннолетие" << endl;
        cout << "Введите число от 1 до 6 или что-то другое для выхода: ";
        int task;
        cin >> task;

        if (task == 1) {
            system("cls");
            cout << "Задача №1: Напишите программу для аэропорта, проверяющую, правильным ли эшелоном летит самолёт." << endl;
            task1();
            _getch();
            system("cls");
        }
        
        else if (task == 2) {
            system("cls");
            cout << "Задача №2: Напишите программу-календарь для мая. Она должна проверять введённый номер дня и сообщать, выходной этот день или рабочий." << endl;
            task2();
            _getch();
            system("cls");;
        }
        
        else if (task == 3) {
            system("cls");
            cout << "Задача №3: Напишите программу-календарь для мая. Она должна проверять введённый номер дня и сообщать, выходной этот день или рабочий." << endl;
            task3();
            _getch();
            system("cls");
        }
        
        else if (task == 4) {
            system("cls");
            cout << "Задача №4: Напишите программу для банкомата." << endl;
            task4();
            _getch();
            system("cls");
        }
        
        else if (task == 5) {
            system("cls");
            cout << "Задача №5: Напишите программу, которая проверяет, можно ли первую коробку положить внутрь второй." << endl;
            task5();
            _getch();
            system("cls");
        }
        
        else if (task == 6) {
            system("cls");
            cout << "Задача №6: " << endl;
            task6();
            _getch();
            system("cls");
        }

        else
        {
            system("cls");
            cout << "некорректный ввод. Выход из программы";
            break;
        }
    }

}
