#define _CRT_SECURE_NO_WARNINGS 1

#include<cstdio>
#include<iostream>
#include<algorithm>
#include<string>
#include<sstream>
using namespace std;

void change(int* a);

struct Point {
	int x, y;
	Point(int x=0,int y=0):x(x),y(y) {}
};


void change(int* a)
{
	int temp;
	temp = a[0];
	a[0] = a[1];
	a[1] = temp;
}


int main()
{
#if 0
	string line;
	while (getline(cin,line))
	{
		int sum = 0, x;
		stringstream s(line);
		while (s >> x) sum += x;
		cout << sum << "\n";

	}
#endif

	int col[100] = { 1,2,3 };
	char a[100];
	int* p = col;
	cout << *p << " " << *(p+1) << " " << p[2];

}