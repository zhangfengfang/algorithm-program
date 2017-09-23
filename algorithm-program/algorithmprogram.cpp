//算法测试
#include "stdafx.h"
#include "iostream"
using namespace std;
template <class T>

int  seqsearch(T  a[],const T& x, int n)
{
	int i;
	for (i = 0; i < n && a[i] != x; i++);
	if (i == n) return -1;
	return i;
}
int main()
{
	int a[] = {1,2,3,4,5,6,7,8,9};
	int x = 10;
	
	cout << seqsearch(a,x,sizeof(a)) << endl;
	system("pause");
	return 0;
}


 