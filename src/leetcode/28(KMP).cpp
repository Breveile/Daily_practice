
// ����KMP�㷨�����ൺ��ѧ����׿��ʦ��Ƶ��next��������->CSDN�Ĳ���д�ıȽ����
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// ����next���飬i���ڱ�����j���ڻ��ˣ�Ҳ�Ǹ���ǰ׺���ʽ�����ʣ�
vector<int> getnext(string & s) {
	vector<int> next(s.size());
	next[0] = 0; // ��һ���ض�Ϊ0��ֱ�ӳ�ʼ��
	int j = 0; // j���ڻ��ˣ����п��ܵ���0��
	for (int i = 1; i < s.size(); i++) {

		while (j > 0 && s[i] != s[j]) {
			j = next[j - 1]; // �ݹ�Ĺؼ�����һ������ȣ�����ȥ��ǰ��ģ�
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
	// i���ڱ����ı�����j���ڱ���ģʽ����j�Ļ���ͨ������next��ʵ��
	// ��������˼���������next�Ĵ�������
	for (int i = 0; i < haystack.size(); i++) {
		while (j > 0 && haystack[i] != needle[j]) {
			j = next[j - 1];
		}

		if (haystack[i] == needle[j])
			j++;
		// ��j����ģʽ���ĳ��ȵ�ʱ��˵��ƥ�����
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