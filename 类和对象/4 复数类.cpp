// 已知一个名为Complex的复数类，这个类包含：
// （1）私有成员：实部、虚部，且均为int 型
// （2）公有的带默认形参值的构造函数、复制构造函数
// （3）公有成员函数Display，其作用为显示复数
// 要求：
// （1）实现满足上述属性和行为的Complex类定义；
// （2）设计函数AddComplex，函数AddComplex功能为实现两个复数相加，要求该函数的形参为复数类的常引用；
// （3）保证如下主函数能正确运行。
// 裁判测试程序样例：

// /* 请在这里填写答案 */

// int main(){
//     int x,y;
//     cin>>x>>y;
//         Complex  c0(x,y);
//         Complex  c1(c0);
//         cout<<"c1 is: "; 
//         c1.Display();
//         cin>>x>>y; 
//         Complex c2(x,y);
//         cout<<"c2 is: "; 
//         c2.Display();
//         Complex c3;
//         c3 = AddComplex(c1,c2); 
//         cout<<"c3 is: "; 
//         c3.Display();    
//         return 0;
// }


// 输入样例：
// 在这里给出一组输入。例如：

// 2 -3 
// 3 4
// 输出样例：
// 在这里给出相应的输出。例如：

// c1 is: 2-3i
// c2 is: 3+4i
// c3 is: 5+1i
///////////////////////////////////////
#include<iostream>
using namespace std;

class Complex {
	public:
		Complex(int x = 0, int y = 0) { //构造
			X = x;
			Y = y;
		}
		Complex(Complex &a) { //拷贝构造
			X = a.X;
			Y = a.Y;
		}
		int GetX() {
			return X;
		}
		int GetY() {
			return Y;
		}
		void Display() {
			if (X == 0) {
				cout << Y << "i" << endl;
			} else if (Y == 0) {
				cout << X << endl;
			} else {
				cout << X << (Y > 0 ? "+" : "") << Y << 'i' << endl;
			}
		}
	private:
		int X;
		int Y;
};
Complex AddComplex(Complex &c1,Complex &c2) {
	Complex c4(c1.GetX() + c2.GetX(), c1.GetY() + c2.GetY());
	return c4;
}
