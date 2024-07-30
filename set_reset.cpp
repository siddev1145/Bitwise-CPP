// Name - Siddhant Bedre
// PRN - 23070123037
// Aim - Performing Bitwise Set and Reset

#include <iostream>
using namespace std;

int main() {
    int number, shiftPosition, setBit, resetBit;

    cout << "Enter the number: ";
    cin >> number;
    cout << "Enter the bit position to shift: ";
    cin >> shiftPosition;

    setBit = number | (1 << shiftPosition);

    resetBit = number & (~(1 << shiftPosition));

    cout << "Bit reset result: " << resetBit << endl;
    cout << "Bit set result: " << setBit << endl;

    return 0;
}

/* Output
Enter the number: 5
Enter the bit position to shift: 2
Bit reset result: 1
Bit set result: 5
*/
