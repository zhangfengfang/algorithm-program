//算法测试
#include "stdafx.h"
#include "iostream"
using namespace std;
template <class T>
T paixu(T a[], int n)
{
	int i = 0;
	int j=0;
	 
	for (int j = 1; j < n ; j++)
	{
		for (int i = 0; i < n - j; i++)
		{
			if (a[i] > a[i + 1])
			{
				a[i + 1] = a[i];
			}

			

		}
		cout << a[n-j-1]<<endl;
	}
	return 0;
	
}

int main()
{
	int a[] = {1,2,3,4,5,6,7,8,9};
	 paixu(a,size(a));
	system("pause");
	return 0;

}


 