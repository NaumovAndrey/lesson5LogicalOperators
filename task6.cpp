#include "pch.h"
#include "iostream"
using namespace std;

/*Напишите программу для бармена, который не умеет считать.*/

void task6() {
    int currentDay, currentMonth, currentYear, birthDay, birthMonth, birthYear;

    cout << "Введите текущую дату (день месяц год): ";
    cin >> currentDay >> currentMonth >> currentYear;

    cout << "Введите дату вашего рождения (день месяц год): ";
    cin >> birthDay >> birthMonth >> birthYear;

    int age = currentYear - birthYear;
    if (currentMonth < birthMonth || (currentMonth == birthMonth && currentDay < birthDay)) {
        age--;
    }

    if (age < 18) {
        cout << "Нельзя" << endl;
    } else if (age == 18) {
        cout << "Приходите завтра, севодня Вы еще ребёнок" << endl;
    } else {
        cout << "Можно" << endl;
    }
}