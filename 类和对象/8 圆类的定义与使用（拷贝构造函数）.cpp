// 本题要求完成一个圆类的定义，设计适当的函数：包括构造函数、拷贝构造函数以及析构函数，从而可以通过测试程序输出样例中的结果。（圆周率取值3.14）

// 函数接口定义：
// //定义一个圆类
// class Circle
// 裁判测试程序样例：
// #include<iostream>
// using namespace std; 
// /* 请在这里填写答案 */
// int main()
// {
//     float r;
//     cin>>r;
//     Circle c1(r);
//     Circle c2(c1);
//     cout<<c1.area()<<endl;//计算圆面积
//     cout<<c2.perimeter()<<endl;//计算圆周长
//     return 0;
// }
// 输入样例：
// 在这里给出一组输入。例如：

// 5
// 输出样例：
// 在这里给出相应的输出。例如：

// Constructor called
// Copy constructor called
// 78.5
// 31.4
// Destructor called
// Destructor called
///////////////////////////////////////////
class Circle {
	public:
		Circle(float x) { //构造
			cout << "Constructor called" << endl;
			R = x;
		}
		Circle(Circle &a) { //拷贝构造
			cout << "Copy constructor called" << endl;
			R = a.R;
		}
		float area() {
			return 3.14 * R * R;
		}
		float perimeter() {
			return 6.28 * R;
		}
		~Circle() { //析构
			cout << "Destructor called" << endl;
		}
	private:
		float R;
};
