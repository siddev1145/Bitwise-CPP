// Name - Siddhant Bedre
// PRN - 23070123037
// Aim - Performing Bitwise Operations

#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout << "Bitwise Operations on two numbers"<<endl;
    cout << "Enter the number 1:";
    cin >> a;
    cout << "Enter the number 2:";
    cin >> b;
    cout << "AND:"<< (a & b)<< endl;
    cout << "OR:" << (a|b)<< endl;
    cout << "NOT:" << (~a)<< endl;
    cout << "XOR:" << (a^b)<< endl;
    cout << "Left Shift:" << (a<<1)<< endl;
    cout << "Right Shift:" << (a>>2)<< endl;

    return 0;
}

/* Output :
Bitwise Operations on two numbers
Enter the number 1:5
Enter the number 2:3
AND:1
OR:7
NOT:-6
XOR:6
Left Shift:10
Right Shift:1
*/
