#include "pch.h"
#include "iostream"

using namespace std;

/*�������� ���������, ������� ���������, ����� �� ������ ������� �������� ������ ������..*/

void task5() {
    int A, B, C, M, N, K;

    cout << "������� ������ ������ ������� (A, BC): ";
    cin >> A >> B >> C;

    cout << "������� ������ ������ ������� (M, N, K): ";
    cin >> M >> N >> K;

    if ((A <= M && B <= N && C <= K)
        || (A <= M && B <= K && C <= N)
        || (A <= N && B <= M && C <= K)
        || (A <= N && B <= K && C <= M)
        || (A <= K && B <= M && C <= N)
        || (A <= K && B <= N && C <= M)) {
        cout << "�����" << endl;
    }
    else {
        cout << "���" << endl;
    }
}