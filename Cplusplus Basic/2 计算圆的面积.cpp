/*
从键盘输入圆的半径，计算圆的面积并输出。圆周率PI=3.1415926。

输入格式:
在这里写输入圆的半径，例如： 3.6

输出格式:
在这里输出圆的面积，例如： 40.715

输入样例:
1.5
输出样例:
7.06858
*/
#include<iostream>
const double PI=3.1415926;
using namespace std;
int main()
{
	float r,s;
	cin>>r;
	s=PI*r*r;
	cout<<s; 
}
