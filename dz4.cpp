#include <iostream>
//
//
//
//
//
//
//
using namespace std;
//
//int zad1() {
//    int a, sum = 0;
//    cout << "������ �������� a: ";
//    cin >> a;
//
//    for (int i = a; i <= 500; i++) {
//        sum += i;
//    }
//
//    cout << "���� ����� �� " << a << " �� 500: " << sum << endl;
//    return 0;
//}
//
//
//
//
#include <cmath>
//
//
//int zad2() {
//    int x, y;
//    cout << "������ �������� x �� y: ";
//    cin >> x >> y;
//
//    long long result = pow(x, y);
//    cout << x << " � ������ " << y << " = " << result << endl;
//    return 0;
//}
//
//
//
//
//
//
//int zad3() {
//    int sum = 0;
//    for (int i = 1; i <= 1000; i++) {
//        sum += i;
//    }
//
//    double average = sum / 1000.0;
//    cout << "������ ����������� ����� �� 1 �� 1000: " << average << endl;
//    return 0;
//}
//
//
//
//
//
//
//
//int zad4() {
//    int a, product = 1;
//    cout << "������ �������� a (1 <= a <= 20): ";
//    cin >> a;
//
//    for (int i = a; i <= 20; i++) {
//        product *= i;
//    }
//
//    cout << "������� ����� �� " << a << " �� 20: " << product << endl;
//    return 0;
//}
//
//
//
//
//
//
//
//
//
//
//int zad5() {
//    int k;
//    cout << "������ ����� ������� (k): ";
//    cin >> k;
//
//    for (int i = 2; i <= 10; i++) {
//        cout << k << " x " << i << " = " << k * i << endl;
//    }
//
//    return 0;
//}
//
//
//
//
//
//
//
//int zad6() {
//    int count = 0;
//    for (int i = 100; i <= 999; i++) {
//        int a = i / 100;
//        int b = (i / 10) % 10;
//        int c = i % 10;
//
//        if (a == b || b == c || a == c) {
//            count++;
//        }
//    }
//
//    cout << "ʳ������ ����� � ����� ���������� �������: " << count << endl;
//    return 0;
//}
//
//
//
//
//
//
//
//int zad7() {
//    int count = 0;
//    for (int i = 100; i <= 999; i++) {
//        int a = i / 100;
//        int b = (i / 10) % 10;
//        int c = i % 10;
//
//        if (a != b && b != c && a != c) {
//            count++;
//        }
//    }
//
//    cout << "ʳ������ ����� � ���� ������ �������: " << count << endl;
//    return 0;
//}
//
//
//
//
//
//
//
//
//
//
//
//int zad8() {
//    string num;
//    cout << "������ ���� �����: ";
//    cin >> num;
//
//    string result = "";
//    for (char c : num) {
//        if (c != '3' && c != '6') {
//            result += c;
//        }
//    }
//
//    cout << "����� ��� 3 � 6: " << result << endl;
//    return 0;
//}
//
//
//
//
//
//
//
//
//int zad9() {
//    int A;
//    cout << "������ ����� A: ";
//    cin >> A;
//
//    for (int B = 1; B * B <= A; B++) {
//        if (A % (B * B) == 0 && A % (B * B * B) != 0) {
//            cout << B << " ";
//        }
//    }
//
//    cout << endl;
//    return 0;
//}
//
//
//
//
//
//
//
//
//
//
//int zad10() {
//    int A, sum = 0;
//    cout << "������ ���� ����� A: ";
//    cin >> A;
//
//    int temp = A;
//    while (temp != 0) {
//        sum += temp % 10;
//        temp /= 10;
//    }
//
//    if (sum * sum * sum == A * A) {
//        cout << "��� ���� ���� ������� �������� ����� A" << endl;
//    }
//    else {
//        cout << "��� ���� ���� �� ������� �������� ����� A" << endl;
//    }
//
//    return 0;
//}
//
//
//
//
//
//
//


//int zad11() {
//    int A;
//    cout << "������ �����: ";
//    cin >> A;
//
//    cout << "�����, �� �� " << A << " ������� ��� �������: ";
//    for (int i = 1; i <= A; i++) {
//        if (A % i == 0) {
//            cout << i << " ";
//        }
//    }
//
//    cout << endl;
//    return 0;
//}











int zad12() {
    int x, y;
    cout << "������ ��� �����: ";
    cin >> x >> y;

    cout << "�����, �� �� ������ ����� ������� ��� �������: ";
    for (int i = 1; i <= min(x, y); i++) {
        if (x % i == 0 && y % i == 0) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}
