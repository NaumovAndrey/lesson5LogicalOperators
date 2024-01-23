#include "pch.h"
#include "iostream"


using namespace std;

/*В предыдущем задании вы написали программу-календарь для мая. Теперь добавьте возможность начать месяц с любого дня недели.
Для этого нужно ввести число — номер дня недели, с которого начинается месяц. Убедитесь, что введённое число корректно.*/

void task3() {
    int startDay;
    int day;

    cout << "Введите номер дня недели, с которого начинается месяц (1 - понедельник, 7 - воскресенье): ";
    cin >> startDay;

    cout << "Введите день месяца: ";
    cin >> day;

    if (startDay < 1 || startDay > 7 || day < 1 || day > 31) {
        cout << "Ошибка: некорректный ввод!";
    }

    int currentDay = (startDay + day - 1) % 7;

    if (currentDay == 0 || currentDay == 6 || ((day >= 1 && day <= 5) || (day >= 8 && day <= 10))) {
        cout << day << " мая - выходной" << endl;
    } else {
        cout << day << " мая - рабочий" << endl;
    }
}