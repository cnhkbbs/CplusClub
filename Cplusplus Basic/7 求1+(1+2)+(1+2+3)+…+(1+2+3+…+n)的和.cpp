/*
求1+(1+2)+(1+2+3)+…+(1+2+3+…+n)的和

输入格式:
输入一个整数。

输出格式:
输出所求的和。

输入样例:
在这里给出一组输入。例如：

3
输出样例:
在这里给出相应的输出。例如：

sum = 10
*/
#include<iostream>
using namespace std;
int main()
{
	int n,i,sum=0,t=0;
	cin>>n;
	for(i=1;i<=n;i++){
		t+=i;
		sum+=t;
	}
	cout<<"sum = "<<sum<<endl;
	return 0;
}
