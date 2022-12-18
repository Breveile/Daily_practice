#include <iostream>
#include <string>
#include <string.h>
using namespace std;

void test01() {
	string str1 = "ÎÒ";
	str1 += "°®ÍæÓÎÏ·:";
	cout << "str1:" << str1 << endl;

	string str2 = "LOL DNF";

	str1 += str2;
	cout << "str1:" << str1 << endl;

	string str3 = "I";
	str3.append("love");
	str3.append("game abcd", 4);
	str3.append(str2, 4, 3);

	cout << "str3:" << str3 << endl;

}

void test02() {
	string str = "abcdefgde";
	int pos = str.find("de");
	if (pos == -1)
		cout << "de is not exit!" << endl;
	else
		cout << "pos = " << pos << endl;
	int pos2 = str.rfind("de");
	if (pos2 == -1)
		cout << "de is not exit!" << endl;
	else
		cout << "pos2 = " << pos2 << endl;

	string str2 = "alibaba";
	str2.replace(1, 2, "123");
	cout << "str2: " << str2 << endl;
}

void test03() {
	string str1 = "aallo";
	string str2 = "aello";
	int k = str1.compare(str2);
	cout << k;
}

void test04() {
	string str = "hello";
	for (int i = 0; i < str.size(); i++) {
		cout << str[i] << " ";
	}
	cout << endl;

	for (int j = 0; j < str.size(); j++) {
		cout << str.at(j) << " ";
	}
}

void test05() {
	string str = "abc";
	str.insert(3,"def");
	cout << str << endl;
	str.insert(2, 2, 'm');
	cout << str << endl;
	str.erase(0, 2);
	cout << str << endl;

}

void test06() {
	string str1 = "hello";
	string substr = str1.substr(0, 3);
	cout << "substr: " << substr << endl;

	string email = "18763821496@163.com";
	int pos = email.find("@");
	string adr = email.substr(0, pos);
	cout << adr << endl;
}

int main()
{
	// test06();
	
	string str1 = "hello world";

	string str2;
	
	str2.insert(0, str1.substr(0, 5));
	cout << str2 << endl;

	system("pause");
	return 0;

}