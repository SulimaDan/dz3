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
//    cout << "Введіть значення a: ";
//    cin >> a;
//
//    for (int i = a; i <= 500; i++) {
//        sum += i;
//    }
//
//    cout << "Сума чисел від " << a << " до 500: " << sum << endl;
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
//    cout << "Введіть значення x та y: ";
//    cin >> x >> y;
//
//    long long result = pow(x, y);
//    cout << x << " у степені " << y << " = " << result << endl;
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
//    cout << "Середнє арифметичне чисел від 1 до 1000: " << average << endl;
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
//    cout << "Введіть значення a (1 <= a <= 20): ";
//    cin >> a;
//
//    for (int i = a; i <= 20; i++) {
//        product *= i;
//    }
//
//    cout << "Добуток чисел від " << a << " до 20: " << product << endl;
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
//    cout << "Введіть номер варіанта (k): ";
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
//    cout << "Кількість чисел з двома однаковими цифрами: " << count << endl;
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
//    cout << "Кількість чисел з усіма різними цифрами: " << count << endl;
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
//    cout << "Введіть ціле число: ";
//    cin >> num;
//
//    string result = "";
//    for (char c : num) {
//        if (c != '3' && c != '6') {
//            result += c;
//        }
//    }
//
//    cout << "Число без 3 і 6: " << result << endl;
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
//    cout << "Введіть число A: ";
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
//    cout << "Введіть ціле число A: ";
//    cin >> A;
//
//    int temp = A;
//    while (temp != 0) {
//        sum += temp % 10;
//        temp /= 10;
//    }
//
//    if (sum * sum * sum == A * A) {
//        cout << "Куб суми цифр дорівнює квадрату числа A" << endl;
//    }
//    else {
//        cout << "Куб суми цифр не дорівнює квадрату числа A" << endl;
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
//    cout << "Введіть число: ";
//    cin >> A;
//
//    cout << "Числа, на які " << A << " ділиться без залишку: ";
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
    cout << "Введіть два числа: ";
    cin >> x >> y;

    cout << "Числа, на які обидва числа діляться без залишку: ";
    for (int i = 1; i <= min(x, y); i++) {
        if (x % i == 0 && y % i == 0) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}
