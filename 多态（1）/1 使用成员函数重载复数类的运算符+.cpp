// 类Complex声明了一个复数类，有两个数据成员realPart（代表复数的实部）和imgPart（代表复数的虚部），并定义了成员函数实现了重载运算符“+”以实现两个复数对象的相加操作。成员函数Show用来输出复数的实部和虚部。请完成对运算符“+”的重载操作。

// 函数接口定义：
// Complex& Complex::operator+(Complex& com);
// 参数com为复数类Complex的对象的引用，函数的返回值为当前对象与com对象相加后的值。

// 裁判测试程序样例：
// #include<iostream>
// using namespace std;

// class Complex {
// public:
//     Complex(double realPart = 0, double imgPart = 0) {
//         this->realPart = realPart;
//         this->imgPart = imgPart;
//     }
//     Complex& operator+(Complex& com);
//     void Show() {
//         cout << realPart << " " << imgPart << endl;
//     }
// private:
//     double realPart, imgPart;
// };
// int main() {
//     int r1, i1;            //第1个复数对象的实部和虚部
//     int r2, i2;            //第1个复数对象的实部和虚部
//     cin >> r1 >> i1;
//     cin >> r2 >> i2;
//     Complex c1(r1, i1);    //构造第1个复数对象c1
//     Complex c2(r2, i2);    //构造第2个复数对象c2
//     c1 = c1 + c2;
//     c1.Show();

//     return 0;
// }
// /* 你的代码将被嵌在这里 */
// 输入样例：
// 3 4
// 10 20
// 输出样例：
// 13 24
/////////////////////////////////////
Complex& Complex::operator+(Complex& com)
{
	 com.realPart=realPart+com.realPart;
	 com.imgPart=imgPart+com.imgPart;
	 return com;
}
