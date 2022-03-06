/*
倒序输出从控制台输入的n个整数

输入格式:
第一行输入一个数n，代表行数
依次输入n个整数

输出格式:
将n个整数倒序输出

输入样例:
3
1 2 3
输出样例:
321
*/
#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cin>>n;
	int num[n];
	for(i=0;i<n;i++){
		cin>>num[i];
	}
	for(j=n-1;j>=0;j--){
		cout<<num[j];
	}
	return 0;
}
