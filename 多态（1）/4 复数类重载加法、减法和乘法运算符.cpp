// 以下定义了一个复数类及其部分实现，现要求将类的构造函数以及运算符+、- 和 * 函数重载补充完整。

// 复数类定义：
// 在这里描述复数类定义。具体如下：
// class complex {
//     public:
//         complex(float r=0,float i=0);                   // 构造函数
//         complex operator+(const complex &op2) const;    //重载运算符 +
//         complex operator-(const complex &op2) const;    //重载运算符 -
//         complex operator*(const complex &op2) const;    //重载运算符 *
//         void display() const;                           // 按数学写法输出复数
//     private:
//         float real;
//         float imag;
// };
// 裁判测试程序样例：
// 在这里给出复数类测试的例子。例如：
// #include <iostream>
// using namespace std;
// class complex {
//     public:
//         complex(float r=0,float i=0);                   // 构造函数
//         complex operator+(const complex &op2) const;    //重载运算符 +
//         complex operator-(const complex &op2) const;    //重载运算符 -
//         complex operator*(const complex &op2) const;    //重载运算符 *
//         void display() const;                           // 按数学写法输出复数
//     private:
//         float real;
//         float imag;
// };


// /* ------------------- 请在这里填写答案--------------------  */


// void complex::display() const {
//     if(real&&imag)
//         if(imag==1||imag==-1)
//             cout<<real<<(imag>0?"+":"-")<<"i"<<endl;
//         else
//             cout<<real<<(imag>0?"+":"")<<imag<<"i"<<endl;
//     else if(real)
//         cout<<real<<endl;
//     else if (imag)
//         if(imag==1||imag==-1)
//             cout<<(imag>0?"":"-")<<"i"<<endl;
//         else
//             cout<<imag<<"i"<<endl;
//     else
//         cout<<0<<endl;
// }

// int main() {
//     double real,imag;
//     complex c,d,e;

//     cin>>real>>imag;
//     complex c1(real,imag);
//     cin>>real>>imag;
//     complex c2(real,imag);

//     c=c1+c2;
//     d=c1-c2;
//     e=c1*c2;
//     c.display() ;
//     d.display() ;
//     e.display();

//     return 0;
// }
// 输入样例：
// 在这里给出一组输入。例如：

// 2 3
// -4 -5
// 输出样例：
// 在这里给出相应的输出。例如：

// -2-2i
// 6+8i
// 7-22i
/////////////////////////////////////////////////
complex::complex(float r,float i)
{
	real=r;
	imag=i;
}
complex complex::operator+(const complex &op2) const
{
	complex t(real+op2.real,imag+op2.imag);
	return t;
}
complex complex::operator-(const complex &op2) const
{
	complex t(real-op2.real,imag-op2.imag);
	return t;
}
complex complex::operator*(const complex &op2) const
{
	complex t(real*op2.real-imag*op2.imag,imag*op2.real+real*op2.imag);
	return t;
}
