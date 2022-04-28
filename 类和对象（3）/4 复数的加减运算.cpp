// 复数加减（友元的应用）

// 声明一个复数类CComplex（类私有数据成员为double型的real和image）
// 定义构造函数，用于指定复数的实部与虚部。
// 定义成员函数，调用该函数时，以格式real+image i的格式输出当前对象（当虚部为正数时，实部虚部中间用+号连接，当虚部为复数时，实部虚部用-号连接）。
// 编写加法友元函数，以复数对象c1, c2为参数，求两个复数对象之和（实部虚部分别相加）。
// 编写减法友元函数，以复数对象c1, c2为参数，求两个复数对象的差（实部虚部分别相减）
// 输入格式:
// 输入有两行：
// 第一行是复数c1的实部与虚部，以空格分隔；
// 第二行是复数c2的实部与虚部，以空格分隔。

// 输出格式:
// 输出共四行:
// 第一行是c1；
// 第二行是c2；
// 第三行是c1与c2之和；
// 第四行是c1与c2之差；

// 函数接口定义：
// 在这里描述类定义
// class CComplex{...}
// 裁判测试程序样例：
// int main()
// {
//   double r1,r2,i1,i2;
//     cin>>r1>>i1;
//     cin>>r2>>i2;
//     CComplex c1(r1,i1),c2(r2,i2),c3,c4;
//     c1.display();
//     c2.display();
//     c3=add(c1,c2);
//     c3.display();
//     c4=    sub(c1,c2);
//     c4.display();
// }

// /* 请在这里填写答案 */
// ####输入样例：

// 10 20
// 30 40
// 输出样例：
// 10+20i
// 30+40i
// 40+60i
// -20-20i
///////////////////////////////////////////////
#include<iostream>
using namespace std;
class CComplex{
	private:
		double real,image;
	public:
		CComplex(double r=0,double i=0)
		{
			real=r;
			image=i;
		}
		void display()
		{
				cout<<real<<(image>=0?"+":"")<<image<<"i"<<endl; 
		}
		friend CComplex add(CComplex &c1,CComplex &c2);
		friend CComplex sub(CComplex &c1,CComplex &c2);
};
CComplex add(CComplex &c1,CComplex &c2)
{
	CComplex c;
	c.real=c1.real+c2.real;
	c.image=c1.image+c2.image;
	return c;
}
CComplex sub(CComplex &c1,CComplex &c2)
{
	CComplex c;
	c.real=c1.real-c2.real;
	c.image=c1.image-c2.image;
	return c;
}
