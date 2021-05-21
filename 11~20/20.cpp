#include <iostream>
#include <string>
using namespace std;
int main() {
	string first, second;
	getline(cin, first, '-');
	getline(cin, second, '\n');
	cout << first << second;
}