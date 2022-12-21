#include <iostream>
#include <string>
using namespace std;

string replaceSpace(string& s) {
	int oldLength = s.size();
	int count = 0;
	for (char i : s) {
		if (i == ' ')
			count++;
	}

	s.resize(oldLength + 2 * count);
	int newLength = s.size();
	int i = newLength - 1;
	int j = oldLength - 1;
	for (; j < i; j--, i--) {
		if (s[j] != ' ')
			s[i] = s[j];
		else {
			s[i] = '0';
			s[i - 1] = '2';
			s[i - 2] = '%';
			i -= 2;
		}
	}
	return s;
}

int main() {

	string s = "We are happy.";
	cout << replaceSpace(s) << endl;
	system("pause");
	return 0;
}