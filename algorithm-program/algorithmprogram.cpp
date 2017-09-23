//算法测试
#include "stdafx.h"
#include "iostream"
using namespace std;
template <class T>
T sum(T a[], int n)
{
	int i;
	T tsum = 0;
	for (i = 0; i < n; i++)
	{
		tsum += a[i];
		
	}
	return tsum;
}
int main()
{
	int a[] = {1,2,3,4,5,6,7,8,9};
	cout << sum(a,size(a))<< endl;
	system("pause");
	return 0;
}


 