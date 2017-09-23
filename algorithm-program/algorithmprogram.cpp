// 引用参数.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"
using namespace std;
template <class T>

T Abc(T& a, T& b, T& c) {
	return a + b + c + b*c + (a + b + c) / (a + b) + 4;
}
int main()
{
	int a = 1, b = 2, c = 3;

	cout << Abc(a, b, c) << endl;
	system("pause");
	return 0;
}


 