#include <iostream>
#include <string>

using namespace std;
int main() {
    string a, b;
    getline(cin, a, '.');
    getline(cin, b, '\n');
    cout << a << endl;
    cout << b;
}