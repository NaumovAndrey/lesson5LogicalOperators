#include "pch.h"
#include "iostream"
using namespace std;

/*�������� ��������� ��� �������, ������� �� ����� �������.*/

void task6() {
    int currentDay, currentMonth, currentYear, birthDay, birthMonth, birthYear;

    cout << "������� ������� ���� (���� ����� ���): ";
    cin >> currentDay >> currentMonth >> currentYear;

    cout << "������� ���� ������ �������� (���� ����� ���): ";
    cin >> birthDay >> birthMonth >> birthYear;

    int age = currentYear - birthYear;
    if (currentMonth < birthMonth || (currentMonth == birthMonth && currentDay < birthDay)) {
        age--;
    }

    if (age < 18) {
        cout << "������" << endl;
    } else if (age == 18) {
        cout << "��������� ������, ������� �� ��� ������" << endl;
    } else {
        cout << "�����" << endl;
    }
}