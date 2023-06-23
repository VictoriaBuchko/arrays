#include <iostream>
using namespace std;

int main() {
    cout << "1 Task--------------------------------------\n\n";
    //Задание 1. Написать, программу, которая вычисляет прибыль фирмы за 6 месяцев.
    //Пользователь вводит прибыль фирмы за каждый месяц.
    const int months = 6;
    int profits[months];

    for (int i = 0; i < months; i++) {
        cout << "Enter profit for " << (i + 1) << " months: ";
        cin >> profits[i];
    }

    int finalProfit = 0;
    for (int i = 0; i < months; i++) {
        finalProfit += profits[i];
    }

    cout << "Profit for 6 months = " << finalProfit << endl;

    cout << "\n\n2 Task--------------------------------------\n\n";
    //Задание 2. Написать программу, которая выводит одномерный массив в обратном порядке.
    const int size = 5;
    int arr[size];

    cout << "Enter array elements:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Enter " << (i + 1) << " array element: ";
        cin >> arr[i];
    }

    cout << "Array in reverse order:" << endl;
    for (int i = size - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    cout << "\n\n3 Task--------------------------------------\n\n";
    //Задание 3. Пользователь вводит длину сторон пятиугольника, каждая сторона заноситься в массив, необходимо
    //вычислить периметр пятиугольника(периметр — сумма всех сторон).
    const int side = 5;
    double sides[side];

    cout << "Enter the lengths of the sides of the pentagon: \n";
    for (int i = 0; i < side; i++) {
        cout << "Side " << (i + 1) << " length: ";
        cin >> sides[i];
    }

    double perimeter = 0;
    for (int i = 0; i < side; i++) {
        perimeter += sides[i];
    }

    cout << "Perimeter of a pentagon: " << perimeter << endl;

    cout << "\n\n4 Task--------------------------------------\n\n";
    //Задание 4. Пользователь вводит прибыль фирмы за год
    //(12 месяцев).Необходимо определить месяц, в котором
    //прибыль была максимальна и месяц, в котором прибыль была минимальна.
    const int month = 12;
    double profits2[month];

    
    for (int i = 0; i < month; i++) {
        cout << "Enter profit for " << (i + 1) << " months: ";
        cin >> profits2[i];
    }


    int max = 0;
    int min = 0;

    for (int i = 1; i < month; i++) {
        if (profits2[i] > profits2[max]) {
            max = i;
        }
        if (profits2[i] < profits2[min]) {
            min = i;
        }
    }

    cout << "\nMonth with maximum profit: " << (max + 1) << endl;
    cout << "Month with minimum profit: " << (min + 1) << endl;

    return 0;
}




