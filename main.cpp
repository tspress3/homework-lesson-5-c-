#include <Windows.h>
#include <iostream>
#include <time.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    srand(time(NULL));

    // ----------------- Задание 1 -----------------

    cout << "----------------- Задание 1 -----------------\n";
    const int a = 10;
    int arr1[a];

    cout << "Массив: ";
    for (int i = 0; i < a; i++) {
        arr1[i] = rand() % 100;
        cout << arr1[i] << " ";
    }
    cout << "\n";

    int mn = arr1[0];
    int mx = arr1[0];
    for (int i = 1; i < a; i++) {
        if (arr1[i] < mn) mn = arr1[i];
        if (arr1[i] > mx) mx = arr1[i];
    }

    cout << "Минимальный элемент: " << mn << "\n";
    cout << "Максимальный элемент: " << mx << "\n";

    // ----------------- Задание 2 -----------------

    Sleep(2000);
    system("cls");
    cout << "----------------- Задание 2 -----------------\n";
    const int N = 9;
    int arr2[N];
    int d, b, x;
    int sum = 0;

    cout << "Введите начало диапазона: ";
    cin >> d;
    cout << "Введите конец диапазона: ";
    cin >> b;

    if (d > b) {
        int t = d;
        d = b;
        b = t;
    }

    cout << "Массив: ";
    for (int i = 0; i < N; i++) {
        arr2[i] = d + rand() % (b - d + 1);
        cout << arr2[i] << " ";
    }
    cout << "\n";

    cout << "Введите число: ";
    cin >> x;

    for (int i = 0; i < N; i++) {
        if (arr2[i] < x) {
            sum += arr2[i];
        }
    }

    cout << "Сумма меньших " << x << ": " << sum << "\n";

    // ----------------- Задание 3 -----------------

    Sleep(2000);
    system("cls");
    cout << "----------------- Задание 3 -----------------\n";
    const int W = 12;
    double doxod[W];
    int j, r;

    for (int i = 0; i < W; i++) {
        cout << "Введите прибыль за " << i + 1 << " месяц: ";
        cin >> doxod[i];
    }

    cout << "Введите начало диапазона (месяц): ";
    cin >> j;
    cout << "Введите конец диапазона (месяц): ";
    cin >> r;

    if (j > r) {
        int t = j;
        j = r;
        r = t;
    }

    if (j < 1) j = 1;
    if (r > W) r = W;

    int maxMonth = j;
    int minMonth = j;

    for (int i = j; i <= r; i++) {
        if (doxod[i - 1] > doxod[maxMonth - 1]) maxMonth = i;
        if (doxod[i - 1] < doxod[minMonth - 1]) minMonth = i;
    }

    cout << "Максимальная прибыль в " << maxMonth << " месяце: " << doxod[maxMonth - 1] << "\n";
    cout << "Минимальная прибыль в " << minMonth << " месяце: " << doxod[minMonth - 1] << "\n";

    return 0;
}