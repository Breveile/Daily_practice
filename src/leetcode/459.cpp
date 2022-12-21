
// leetcode-459.KMP解法，看代码随想录的讲解
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// 计算next数组的方式不变
vector<int> getNext(string& s) {
	vector<int> next(s.size());
	next[0] = 0;
	int j = 0;
	for (int i = 1; i < s.size(); i++) {
		while (j > 0 && s[i] != s[j]) {
			j = next[j - 1];
		}
		if (s[i] == s[j])
			j++;
		next[i] = j;
	}
	return next;
}

// 利用的还是next数组的性质和规律

bool repeatedSubstringPattern(string& s) {
	vector<int> next = getNext(s);
	int l = s.size();
	if (l == 0)
		return false;
	// 
	if (next[l - 1] != 0 && l % (l - (next[l - 1])) == 0)
		return true;
	else
		return false;
}


int main() {

	string s = "abab";
	cout << repeatedSubstringPattern(s) << endl;

	system("pause");
	return 0;
}