
//// C++提高编程 ----2.5.1
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void myPrint(int val) {
	cout << val << endl;
}

void test01() {
	vector <int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);

	vector<int>::iterator vBegin = v.begin();
	vector<int>::iterator vEnd = v.end();

	/// 第一种遍历方式
	while (vBegin != vEnd) {
		cout << *vBegin << " " << endl;
		vBegin++;
	}

	// 第二种遍历方式
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
		cout << *it << " " << endl;

	// 第三种遍历方式
	for_each(v.begin(), v.end(), myPrint);
}

int main() {

	test01();

	system("pause");
	return 0;
}