/*
从键盘输入三个数，用来表示三角形的三条边长。如果能构成三角形就输出三角形的面积，否则就输出No。

输入格式:
请在这里写输入三角形的三条边长，例如： 3.1 4.2 5.3

输出格式:
请在这里输出三角形的面积，例如：

6.50661

输入样例:
3.0 4.0 5.0
输出样例:
6
*/
#include<iostream>
#include<math.h>
using namespace std;
int main(void)
{
	float a,b,c,s;
	cin>>a>>b>>c;
	if(a+b>c&&a+c>b&&b+c>a){
		s=sqrt(((a+b+c)/2)*(((a+b+c)/2)-a)*(((a+b+c)/2)-b)*(((a+b+c)/2)-c));
		cout<<s<<endl;
	}
	else
	{
		cout<<"No"<<endl;
	}
}
