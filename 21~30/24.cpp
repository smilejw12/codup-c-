#include<iostream>
#include<string>
using namespace std;

int main() {
	char str[21];
	cin.getline(str, 21, '\n');
	for (int i = 0; i < 21; i++) {
		if (str[i] == NULL) {
			break;
		}
		cout << "\'" << str[i] << "\'" << endl;
	}
}