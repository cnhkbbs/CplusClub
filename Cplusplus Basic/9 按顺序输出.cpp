/*
本题目要求读入3个整数a,b,c，然后按从小到大的顺序输出。

输入格式:
输入在一行中给出2个绝对值不超过1000的整数a,b,c。

输出格式:
对每一组输入，按照从小到大的顺序在一行内输出两个数，中间用“<”分割（行尾无需换行）。

输入样例:
5 3 4
输出样例:
3<4<5
*/
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if(a>b&&a>c&&b>c){
		cout<<c<<"<"<<b<<"<"<<a<<endl;
	}else if(a>b&&a>c&&b<c){
		cout<<b<<"<"<<c<<"<"<<a<<endl;
	}else if(b>a&&b>c&&a>c){
		cout<<c<<"<"<<a<<"<"<<b<<endl;
	}else if(b>a&&b>c&&c>a){
		cout<<a<<"<"<<c<<"<"<<b<<endl;
	}else if(c>a&&c>b&&a>b){
		cout<<b<<"<"<<a<<"<"<<c<<endl;
	}else if(c>a&&c>b&&a<b){
		cout<<a<<"<"<<b<<"<"<<c<<endl;
	}
	return 0;
}
