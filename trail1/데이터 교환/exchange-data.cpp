#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a = 5, b = 6, c = 7;
    int temp = 0;
    int temp2 = 0;
    temp = b;
    b = a;
    temp2 = c;
    c = temp;
    a = temp2;
    cout << a << endl;
    cout << b << endl;
    cout << c;
    return 0;
}