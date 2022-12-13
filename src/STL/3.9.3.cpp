
#include <iostream>
#include <map>

using namespace std;

void printMap(map<int, int>& m) {
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
		cout << "key = " << it->first << " value = " << it->second << endl;

}

void test01() {
	map<int, int> m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	
	if (m.empty())
		cout << "m is empty!" << endl;
	else
		cout << "m isn't empty!  The size of m is " << m.size() << endl;

	map<int, int> m1;
	m1.insert(pair<int, int>(1, 10));
	m1.insert(pair<int, int>(2, 20));
	m1.insert(pair<int, int>(3, 30));

	map<int, int> m2;
	m2.insert(pair<int, int>(4, 100));
	m2.insert(pair<int, int>(5, 200));
	m2.insert(pair<int, int>(6, 300));

	cout << "before sawp:" << endl;
	printMap(m1);
	printMap(m2);

	m1.swap(m2);
	cout << "after swap:" << endl;
	printMap(m1);
	printMap(m2);
}

int main()
{
	test01();
	system("pause");
	return 0;
}