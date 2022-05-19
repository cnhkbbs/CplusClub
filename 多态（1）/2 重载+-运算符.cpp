// 请根据程序的输出结果，重载类A的+和-运算符。

// 类和函数接口定义：
// class A {
// public:
//     A(int x = 0, int y = 0) : x(x), y(y) {}
//     void show() const;
//     A operator+(A& a);    //重载+运算符
//     A operator-(A& a);    //重载-运算符
// private:
//     int x, y;
// };
// 裁判测试程序样例：
// #include <iostream>
// using namespace std;

// class A {
// public:
//     A(int x = 0, int y = 0) : x(x), y(y) {}
//     void show() const;
//     A operator+(A& a);
//     A operator-(A& a);
// private:
//     int x, y;
// };

// void A::show() const {
//     cout << "(x,y) = " << "(" << x << "," << y << ")" << endl;
// }

// /* 请在这里填写答案 */

// int main() {
//     A a1(1, 2);
//     A a2(4, 5);
//     A a;
//     cout << "a1:";    a1.show();
//     cout << "a2:";    a2.show();
//     a = a1 + a2;
//     cout << "a:";    a.show();
//     a = a1 - a2;
//     cout << "a:";    a.show();
//     return 0;
// }
// 输入样例：
// 本题无输入。

// 输出样例：
// a1:(x,y) = (1,2)
// a2:(x,y) = (4,5)
// a:(x,y) = (5,7)
// a:(x,y) = (-3,-3)
///////////////////////////////
A A::operator+ (A &a)
{
	A t(x+a.x,y+a.y);
	return t;
}
A A::operator- (A &a)
{
	A t(x-a.x,y-a.y);
	return t;
}
