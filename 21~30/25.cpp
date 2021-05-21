#include <iostream>
#include <string>

using namespace std;
int main() {
    char a[5];
    for (int i = 0; i < 5; i++) {
        cin >> a[i];
    }
    cout << '[' << (a[0] - '0') * 10000 << ']' << endl;
    cout << '[' << (a[1] - '0') * 1000 << ']' << endl;
    cout << '[' << (a[2] - '0') * 100 << ']' << endl;
    cout << '[' << (a[3] - '0') * 10 << ']' << endl;
    cout << '[' << (a[4] - '0') * 1 << ']' << endl;
}