#include "pch.h"
#include "iostream"

using namespace std;

/*Напишите программу для банкомата. В банкомате есть купюры достоинством 100, 200, 500, 1 000, 2 000 и 5 000 рублей.*/

void task4() {
	int withdrawalAmount;

	cout << "Введите сумму: ";
	cin >> withdrawalAmount;

	if (withdrawalAmount % 100 != 0) cout << "выдать ровно " << withdrawalAmount << " рублей невозможно";
	else if (withdrawalAmount > 15000) cout << "Невозможно выдать более 150000 рублей за раз";

	int n5000 = withdrawalAmount / 5000;
	withdrawalAmount %= 5000;

	int n2000 = withdrawalAmount / 2000;
	withdrawalAmount %= 2000;

	int n1000 = withdrawalAmount / 1000;
	withdrawalAmount %= 1000;

	int n500 = withdrawalAmount / 500;
	withdrawalAmount %= 500;

	int n200 = withdrawalAmount / 200;
	withdrawalAmount %= 200;

	int n100 = withdrawalAmount / 100;

	string stroka;
	if (n5000 != 0) stroka += "купюр по 5000: " + to_string(n5000) + ", ";
	if (n2000 != 0) stroka += "купюр по 2000: " + to_string(n2000) + ", ";
	if (n1000 != 0) stroka += "купюр по 1000: " + to_string(n1000) + ", ";
	if (n500 != 0) stroka += "купюр по 500: " + to_string(n500) + ", ";
	if (n200 != 0) stroka += "купюр по 200: " + to_string(n200) + ", ";
	if (n100 != 0) stroka += "купюр по 100: " + to_string(n100) + ", ";

	if (!stroka.empty()) stroka.resize(stroka.size()-2);

	cout << "Банковат выдал: " << stroka;
}