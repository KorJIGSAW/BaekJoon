#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char str[101];
	cin >> str;
	int len = strlen(str);
	int count = 0;
	int i = 0;
	while(i < len) {
		if (str[i] == 'c') {
			if (str[i + 1] == '=' || str[i + 1] == '-') {
				i += 2;
			}
			else {
				i++;
			}
		}
		else if (str[i] == 'd') {
			if (str[i + 1] == 'z' && str[i + 2] == '=') {
				i += 3;
			}
			else if (str[i + 1] == '-') {
				i += 2;
			}
			else {
				i++;
			}
		}
		else if (str[i] == 'l') {
			if (str[i + 1] == 'j') {
				i += 2;
			}
			else {
				i++;
			}
		}
		else if (str[i] == 'n') {
			if (str[i + 1] == 'j') {
				i += 2;
			}
			else {
				i++;
			}
		}
		else if (str[i] == 's') {
			if (str[i + 1] == '=') {
				i += 2;
			}
			else {
				i++;
			}
		}
		else if (str[i] == 'z') {
			if (str[i + 1] == '=') {
				i += 2;
			}
			else {
				i++;
			}
		}
		else {
			i++;
		}
		count++;
	}
	cout << count;
}