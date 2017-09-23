//算法测试
#include "stdafx.h"
#include "iostream"
using namespace std;
template <class T>
T ji(T a[], int n,int x)
{
	int y=a[n-1];

	for(int i = n; i > 1; i--) 
	{
		
		y = y* x + a[i - 2];
	}
	return y;
}
int main()
{
	int x = 2;
	int a[] = {1,2,3,4,5,6,7,8,9};
	cout << ji(a,size(a),x)<< endl;
	system("pause");
	return 0;

}


 