#include "pch.h"
#include "iostream"


using namespace std;

/*� ���������� ������� �� �������� ���������-��������� ��� ���. ������ �������� ����������� ������ ����� � ������ ��� ������.
��� ����� ����� ������ ����� � ����� ��� ������, � �������� ���������� �����. ���������, ��� �������� ����� ���������.*/

void task3() {
    int startDay;
    int day;

    cout << "������� ����� ��� ������, � �������� ���������� ����� (1 - �����������, 7 - �����������): ";
    cin >> startDay;

    cout << "������� ���� ������: ";
    cin >> day;

    if (startDay < 1 || startDay > 7 || day < 1 || day > 31) {
        cout << "������: ������������ ����!";
    }

    int currentDay = (startDay + day - 1) % 7;

    if (currentDay == 0 || currentDay == 6 || ((day >= 1 && day <= 5) || (day >= 8 && day <= 10))) {
        cout << day << " ��� - ��������" << endl;
    } else {
        cout << day << " ��� - �������" << endl;
    }
}