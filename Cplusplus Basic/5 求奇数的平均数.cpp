/*
输入若干个整数，求其中所有奇数之和。

输入格式:
输入一列数据，其中第一个整数n(n≤50)表示这列数据的总个数，后面是n个整数。

输出格式:
输出n个整数中所有奇数的平均数，要求输出结果精确到小数点后3位。

输入样例:
在这里给出一组输入。例如：

5 6 5 18 -1 7
输出样例:
在这里给出相应的输出。例如：

3.667
*/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n,num;
	cin>>n;
	float sum=0,ave,j=0;
	for(int i=0;i<n;i++){
		cin>>num;
		if(num%2!=0){
			sum+=num;
			j++;
		}
	}
	ave=sum/j;
	cout<<fixed<<setprecision(3)<<ave<<endl; 
}
