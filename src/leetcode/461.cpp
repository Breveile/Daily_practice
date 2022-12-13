#include <stdio.h>
#include <iostream>
using namespace std;

#define __builtin_popcount __popcnt

int hammingDistance(int x, int y) {
	return __builtin_popcount(x ^ y);
}

int hammingDistance2(int x, int y) {
	int s = x ^ y;
	int sum = 0;
	while (s) {
		sum += s & 1;
		s >> 1;
	}
	return sum;
}

int main()
{
	cout << "Please enter two numbers:" << endl;
	int x, y;
	cin >> x >> y;
	int hamin = hammingDistance(x, y);
	cout << "The hammingDistance between " << x << " and " << y << " is " << hamin << endl;

	system("pause");
	return 0;
}