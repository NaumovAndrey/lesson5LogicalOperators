#include "pch.h"
#include "iostream"


using namespace std;

/*¬ предыдущем задании вы написали программу-календарь дл€ ма€. “еперь добавьте возможность начать мес€ц с любого дн€ недели.
ƒл€ этого нужно ввести число Ч номер дн€ недели, с которого начинаетс€ мес€ц. ”бедитесь, что введЄнное число корректно.*/

void task3() {
    int startDay;
    int day;

    cout << "¬ведите номер дн€ недели, с которого начинаетс€ мес€ц (1 - понедельник, 7 - воскресенье): ";
    cin >> startDay;

    cout << "¬ведите день мес€ца: ";
    cin >> day;

    if (startDay < 1 || startDay > 7 || day < 1 || day > 31) {
        cout << "ќшибка: некорректный ввод!";
    }

    int currentDay = (startDay + day - 1) % 7;

    if (currentDay == 0 || currentDay == 6 || ((day >= 1 && day <= 5) || (day >= 8 && day <= 10))) {
        cout << day << " ма€ - выходной" << endl;
    } else {
        cout << day << " ма€ - рабочий" << endl;
    }
}