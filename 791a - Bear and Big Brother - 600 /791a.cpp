#include <iostream>

using namespace std;

int main() {
    int weightLimak, weightBob;
    int year = 0;

    cin >> weightLimak >> weightBob;

    while (weightLimak <= weightBob) {
        weightLimak *= 3;
        weightBob *= 2;
        year += 1;
    }

    cout << year;
}