#include <bits/stdc++.h>
using namespace std;

int main() {
    int amount_of_numbers_in_the_task;
    cin >> amount_of_numbers_in_the_task;

    int natural_numbers[amount_of_numbers_in_the_task];
    for (int i = 0; i < amount_of_numbers_in_the_task; ++i) {
        cin >> natural_numbers[i];
    }

    int amount_of_odd_numbers = 0;
    for (int i = 0; i < amount_of_numbers_in_the_task; ++i) {
        if (natural_numbers[i] % 2 != 0) {
            ++amount_of_odd_numbers;
        }
    }

    int amount_of_even_numbers = amount_of_numbers_in_the_task - amount_of_odd_numbers;

    if (amount_of_odd_numbers > amount_of_even_numbers) {
        for (int i = 0; i < amount_of_numbers_in_the_task; ++i) {
            if (natural_numbers[i] % 2 == 0) {
                cout << i + 1 << endl;
                break;
            }
        }
    } else {
        for (int i = 0; i < amount_of_numbers_in_the_task; ++i) {
            if (natural_numbers[i] % 2 != 0) {
                cout << i + 1 << endl;
                break;
            }
        }
    }
}