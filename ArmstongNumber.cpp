#include <iostream>
#include <cmath>   // for pow() function
using namespace std;

int main() {
    int num, originalNum, remainder, result = 0;
    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;

    // count digits
    int n = 0;
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        n++;
    }

    // calculate sum of powers of digits
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, n);
        temp /= 10;
    }

    if (result == originalNum)
        cout << originalNum << " is an Armstrong number.";
    else
        cout << originalNum << " is not an Armstrong number.";

    return 0;
}
