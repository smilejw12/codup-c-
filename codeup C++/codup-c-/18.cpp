#include <iostream>
#include <string>

using namespace std;
int main() {
    string hour, min;
    getline(cin, hour, ':');
    getline(cin, min, '\n');
    cout << hour << ":" << min;
}