/*
本题目要求读入2个整数num1和num2，然后输出它们的和。

输入格式:
输入:在一行中给出2个绝对值不超过1000的整数num1和num2。

输出格式:
对每一组输入，在一行中输出num1+num2的值。

输入样例:
1 2
输出样例:
3
*/
#include<iostream>
using namespace std;
int main()
{
	int num1,num2,sum;
	cin>>num1>>num2;
	if(num1<1000&&num2<1000){
		sum=num1+num2;
			cout<<sum<<endl;
	}
	return 0;
}
