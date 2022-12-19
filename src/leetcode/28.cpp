#include <iostream>
#include <string>
using namespace std;

int* getnext(string & s,int *next) {
	int i = 1;
	next[1] = 0;
	int j = 0;
	while (i < s.size()) {
		if (j == 0 || s[i] == s[j]) {
			i++; j++;
			next[i] = j;
		}
		else
			j = next[j];
	}
	return next;
}
int main() {

	string str1 = "aabaaf";
	int next[] = { 0 };
	getnext(str1,next);
	cout << str1 << endl;

	system("pause");
	return 0;

	//aabaabaaf

	//aabaaf
	//010120

}