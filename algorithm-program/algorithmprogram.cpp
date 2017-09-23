//算法测试
#include "stdafx.h"
#include "iostream"
using namespace std;
template <class T>
int  max(T a[], int n)
{
	int pose = 0;
	for (int i = 1; i < n; i++)
	{
		if (a[pose] < a[i])
			pose = i;


	}
	return pose;
}
int main()
{
	int a[] = {1,2,3,4,5,6,7,8,9};
	cout <<max(a,size(a))<< endl;
	system("pause");
	return 0;

}


 