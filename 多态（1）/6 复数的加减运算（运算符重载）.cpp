// 复数加减（运算符重载）

// 声明一个复数类CComplex（类私有数据成员为double型的real和image）
// 定义构造函数，用于指定复数的实部与虚部。
// 重载<<运算符，以格式real+image i的格式输出当前对象（当虚部为非负数时，实部虚部中间用+号连接，当虚部为负数时，实部虚部用-号连接：如3+4i，3-4i，3+0i）。
// 重载+运算符，实现两个复数对象之和（实部虚部分别相加）。
// 重载-运算符，实现两个复数对象的差（实部虚部分别相减）。
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
// #include <iostream>
// using namespace std;

// /* 请在这里填写答案 */

// int main() {
//     double r1,r2,i1,i2;
//     cin>>r1>>i1;
//     cin>>r2>>i2;
//     CComplex c1(r1,i1),c2(r2,i2),c3,c4;
//     cout<<c1;
//     cout<<c2;
//     c3=c1+c2;
//     cout<<c3;
//     c4=c1-c2;
//     cout<<c4;
//     return 0;
// }
// ####输入样例：

// 10 20
// 30 40
// 输出样例：
// 10+20i
// 30+40i
// 40+60i
// -20-20i
////////////////////////////////////////////
class CComplex {
	public:
		CComplex(double r=0, double i=0) {
			real = r, imag = i;
		}
		friend istream &operator <<(istream &, CComplex & );
		friend ostream &operator >>(ostream &, CComplex & );
		CComplex operator+(CComplex c)	{
			return CComplex(real + c.real, imag + c.imag);
		}
		CComplex operator-(CComplex c) {
			return CComplex(real - c.real, imag - c.imag);
		}
		double real, imag;
};
istream &operator >>(istream & is, CComplex &c) {
	is >> c.real >> c.imag;
	return is;
}
ostream &operator <<(ostream & os, CComplex& c ) {
	os << c.real << showpos << c.imag << "i" << noshowpos << endl;
	return os;
}
