#include <iostream>
#include <string>
using namespace std;

string removeSpace(string& s) {
	int slow = 0;
	for (int fast = 0; fast < s.size(); fast++) {
		if (s[fast] != ' ') {
			if (s[fast + 1] == ' ') {
				s[slow++] = s[fast];
				s[slow++] = ' ';
			}
			else
				s[slow++] = s[fast];		
		}
	}
	if (s[slow - 1] == ' ')
		s.resize(slow - 1);
	else
		s.resize(slow);
	return s;
}

string reverse(string& s, int start, int end) {
	for (start; start < end; start++, end--) {
		swap(s[start], s[end]);
	}
	return s;
}

string reverseWord(string& s) {
	removeSpace(s);// 去除多余空格
	reverse(s, 0, s.size() - 1); // 整个字符串翻转

	int slow = 0;
	for (int fast = 0; fast <= s.size(); fast++) {
		if (s[fast] == ' ' || fast == s.size()) {
			reverse(s, slow, fast - 1);
			slow = fast + 1;
		}
	}
	return s;
}

int main() {

	string str1 = " the sky is blue ";
	/*string str2 = removeSpace(str1);
	cout << str2 << endl;
	string str3 = reverse(str2, 0, str2.size() - 1);
	cout << str3 << endl;
	string str4 = reverseWord(str3);
	cout << str4 << endl;*/
	cout << reverseWord(str1) << endl;

	system("pause");
	return 0;

}