// 1、声明一个复数类Complex（类私有数据成员为double型的real和image）

// 2、定义构造函数，用于指定复数的实部与虚部。

// 3、定义取反成员函数，调用时能返回该复数的相反数（实部、虚部分别是原数的相反数）。

// 4、定义成员函数Print()，调用该函数时，以格式(real, image)输出当前对象。

// 5、编写加法友元函数，以复数对象c1，c2为参数，求两个复数对象相加之和。

// 6、主程序实现：

// （1）读入两个实数，用于初始化对象c1。

// （2）读入两个实数，用于初始化对象c2。

// （3）计算c1与c2相加结果，并输出。

// （4）计算c2的相反数与c1相加结果，并输出。

// 输入格式:
// 输入有两行：

// 第一行是复数c1的实部与虚部，以空格分隔；

// 第二行是复数c2的实部与虚部，以空格分隔。

// 输出格式:
// 输出共三行:

// 第一行是c1与c2之和；

// 第二行是c2的相反数与c1之和；

// 第三行是c2 。

// 输入样例:
// 在这里给出一组输入。例如：

// 2.5 3.7
// 4.2 6.5
// 输出样例:
// 在这里给出相应的输出。例如：

// (6.7, 10.2)
// (-1.7, -2.8)
// (4.2, 6.5)
////////////////////////////////////////
#include<iostream>
using namespace std;
class Complex{
	private:
		double real,image;
	public:
		Complex(double x=0,double y=0)
		{
			real=x;
			image=y;
		}
	
	void Point()
	{
		cout<<"("<<real<<", "<<image<<")"<<endl;
	}
	friend Complex Reverse(Complex &aa);
	friend Complex add(Complex &c1,Complex &c2);
};
Complex Reverse(Complex &aa)
	{
		Complex a(0-aa.real,0-aa.image);
		return a;
	}
Complex add(Complex &c1,Complex &c2)
{
	Complex b(c1.real+c2.real,c1.image+c2.image);
	return b;
}
int main()
{
	double a,b,c,d;
	cin>>a>>b>>c>>d;
	Complex c1(a,b);
	Complex c2(c,d);
	
	Complex c3;
	c3=add(c1,c2);
	c3.Point();
	
	Complex c4,c5;
	c4=Reverse(c2);
	c5=add(c4,c1);
	c5.Point();
	
	c2.Point();
}
