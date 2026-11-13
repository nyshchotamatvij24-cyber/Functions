#include <iostream>
using namespace std;

void drawRectangle(int n, int k) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int n, k;
    cout << "Введіть висоту N та ширину K: ";
    cin >> n >> k;

    drawRectangle(n, k);

    return 0;
}



#include <iostream>
using namespace std;

long long factorial(int n) {
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int num;
    cout << "Введіть число: ";
    cin >> num;

    if (num < 0) {
        cout << "Факторіал визначений лише для невід'ємних чисел" << endl;
    }
    else {
        cout << num << "! = " << factorial(num) << endl;
    }

    return 0;
}



#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num;
    cout << "Введіть число: ";
    cin >> num;

    cout << (isPrime(num) ? "Число просте" : "Число не є простим") << endl;

    return 0;
}



#include <iostream>
using namespace std;

void findMinMax(const int arr[], int size, int& minVal, int& minIdx, int& maxVal, int& maxIdx) {
    minVal = arr[0];
    minIdx = 0;
    maxVal = arr[0];
    maxIdx = 0;

    for (int i = 1; i < size; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
            minIdx = i;
        }
        if (arr[i] > maxVal) {
            maxVal = arr[i];
            maxIdx = i;
        }
    }
}

int main() {
    const int SIZE = 7;
    int numbers[SIZE] = { 14, -5, 28, 0, -19, 42, 7 };

    int minVal, minIdx, maxVal, maxIdx;
    findMinMax(numbers, SIZE, minVal, minIdx, maxVal, maxIdx);

    cout << "Мінімум: " << minVal << " (індекс " << minIdx << ")" << endl;
    cout << "Максимум: " << maxVal << " (індекс " << maxIdx << ")" << endl;

    return 0;
}


#include <iostream>
using namespace std;

double cube(double x) {
    return x * x * x;
}

int main() {
    double num;
    cout << "Введіть число: ";
    cin >> num;

    cout << "Куб числа: " << cube(num) << endl;

    return 0;
}


#include <iostream>
using namespace std;

bool isPositive(double x) {
    return x > 0;
}

int main() {
    double num;
    cout << "Введіть число: ";
    cin >> num;

    cout << boolalpha << isPositive(num) << endl;

    return 0;
}





