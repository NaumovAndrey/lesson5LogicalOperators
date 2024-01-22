#include "pch.h"
#include "iostream"

using namespace std;

/*Напишите программу, которая проверяет, можно ли первую коробку положить внутрь второй..*/

void task5() {
    int A, B, C, M, N, K;

    cout << "Введите размер первой коробки (A, BC): ";
    cin >> A >> B >> C;

    cout << "Введите размер второй коробки (M, N, K): ";
    cin >> M >> N >> K;

    if ((A <= M && B <= N && C <= K)
        || (A <= M && B <= K && C <= N)
        || (A <= N && B <= M && C <= K)
        || (A <= N && B <= K && C <= M)
        || (A <= K && B <= M && C <= N)
        || (A <= K && B <= N && C <= M)) {
        cout << "Можно" << endl;
    }
    else {
        cout << "Нет" << endl;
    }
}