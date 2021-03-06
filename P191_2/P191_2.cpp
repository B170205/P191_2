// P191_2.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

float fun(int a[], int n)
{
	int sum = 0;
	float ave;
	int i;
	for (i = 0; i < n; i++)
		sum += a[i];
	ave = (float)sum / n;
	i = 0;
	int j = n-1;
	int tmp;
	//仿照快速排序，从数组左边找到第一个大于ave的数，从右边找到第一个小于ave的数，交换，并移动位置
	while (i < j)
	{
		while (i < j&&a[i] < ave) i++;
		while (i<j&&a[j]>ave) j--;
		tmp = a[i]; a[i] = a[j]; a[j] = a[i];
		i++; j--;
	}
	return ave;
}
void output(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d", a[i]);
}
int main()
{
	int a[8] = { 1,-1,2,-2,3,-3,4,-4 };
	float ave=fun(a,8);
	printf("平均值为 %f\n",ave);
	output(a, 8);
	return 0;

}

