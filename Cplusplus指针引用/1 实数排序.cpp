/*
本题要求编写程序，输入n个实数，使用指针引用的方式将它们按从大到小的顺序排列。

输入格式:
输入第一行给出一个正整数n（2≤n≤10）,输入第二行给出n个实数，其间以空格分隔。

输出格式:
输出从大到小排好序的n个数（保留2位小数），每个数之间空一格，行末没有空格。

输入样例:
在这里给出一组输入。例如：

5
3.2 5.4 6.12 2.51 4.23
输出样例:
在这里给出相应的输出。例如：

6.12 5.40 4.23 3.20 2.51
*/
#include<iostream>
#include<algorithm>
#include<iomanip> 
using namespace std;
void sorts(float *p,int m)
{
	sort(p,p+m);
}
int main()
{
	int n;
	cin>>n;
	float a[n],*p=a;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sorts(p,n);
	for(int i=n-1;i>=0;i--){
		if(i!=n-1){
			cout<<" ";
		}
		cout<<fixed<<setprecision(2)<<a[i];
	}
}
