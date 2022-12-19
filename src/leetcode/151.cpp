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
	s.resize(slow);
	return s;
}



int main() {

	string str1 = " abb asg   k   a sksd j   ";
	string str2 = removeSpace(str1);
	cout << str2 << endl;

	system("pause");
	return 0;

}