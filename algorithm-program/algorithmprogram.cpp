//算法测试
#include "stdafx.h"
#include "iostream"
using namespace std;
template <class T>
T rsum(T a[], int n)
{
	if (n > 0)
	{
		return  rsum(a, n - 1) + a[n - 1];
	}
	return 0;
}
int main()
{
	int a[] = {1,2,3,4,5,6,7,8,9};
	cout <<rsum(a,size(a))<< endl;
	system("pause");
	return 0;

}


 