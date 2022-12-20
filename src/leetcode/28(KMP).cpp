
// 整个KMP算法看的青岛大学的王卓老师视频，next数组的求解->CSDN的博客写的比较清楚
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// 先求next数组，i用于遍历，j用于回退（也是根据前缀表达式的性质）
vector<int> getnext(string & s) {
	vector<int> next(s.size());
	next[0] = 0; // 第一个必定为0，直接初始化
	int j = 0; // j用于回退，是有可能等于0的
	for (int i = 1; i < s.size(); i++) {

		while (j > 0 && s[i] != s[j]) {
			j = next[j - 1]; // 递归的关键，（一旦不相等，就再去找前面的）
		}

		if (s[i] == s[j])
			j++;
		next[i] = j;
	}
	return next;
}

int strStr(string haystack, string needle) {
	vector<int> next = getnext(needle);
	int j = 0;
	// i用于遍历文本串，j用于遍历模式串，j的回退通过数组next来实现
	// 整个回退思想跟上面求next的代码类似
	for (int i = 0; i < haystack.size(); i++) {
		while (j > 0 && haystack[i] != needle[j]) {
			j = next[j - 1];
		}

		if (haystack[i] == needle[j])
			j++;
		// 当j等于模式串的长度的时候，说明匹配完毕
		if (j == needle.size())
			return (i - j + 1);
	}
	return -1;
}

int main() {

	string str1 = "leetcode";
	string str2 = "leeto";

	cout << strStr(str1, str2) << endl;


	system("pause");
	return 0;

}