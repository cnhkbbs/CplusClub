// 设计一个名为Rectangle的矩形类，这个类包括：两个名为width和height的double数据域，它们分别表示矩形的宽和高。width和height的默认值都为1.该类包括矩形类的无参构造函数（默认构造函数）；一个width和height为指定值的矩形构造函数；一个名为getArea( )的函数返回矩形的面积；一个名为getPerimeter( )的函数返回矩形的周长。请实现这个类。编写一个测试程序，创建一个Rectangle对象，从键盘输入矩形的宽和高，然后输出矩形的面积和周长。

// 输入格式:
// 3.5 35.9（第一个数表示矩形的宽，第二个数表示矩形的高，中间是空间分隔。）

// 输出格式:
// 125.65 （第一行输出矩形的面积）
// 78.8 （第二行输出矩形的周长）

// 输入样例:
// 3.5 35.9
// 输出样例:
// 125.65
// 78.8
/////////////////////////////////////
#include<iostream>
using namespace std;
class Rectangle {
	public:
		Rectangle(double width = 1, double height = 1) {
			Width = width;
			Height = height;
		}
		double getArea() {
			return Width * Height;
		}
		double getPerimeter() {
			return 2 * (Width + Height);
		}
	private:
		double Width;
		double Height;
};
int main() {
	double x, y;
	cin >> x >> y;
	Rectangle a(x, y);
	cout << a.getArea() << endl;
	cout << a.getPerimeter() << endl;
	return 0;
}
