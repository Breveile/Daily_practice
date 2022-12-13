#include <iostream>
#include <set>

using namespace std;

void printSet(set<int>& s) {
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
		cout << *it << " ";
	cout << endl;
}

void test01() {
	set<int> s1;
	s1.insert(10);
	s1.insert(30);
	s1.insert(40);
	s1.insert(20);
	s1.insert(20);

	printSet(s1);

	set<int>::iterator it = s1.find(30);
	
	if (it != s1.end())
		cout << "找到了元素" << *it << endl;
	else
		cout << "元素不存在！" << endl;

	int num = s1.count(20);
	cout << "num=" << num << endl;

}

int main() {
	test01();
	system("pause");
	return 0;
}