// 请编写一个抽象类Shape，包括两个纯虚函数，分别为计算面积getArea()和计算周长getPerim()。通过Shape类派生出矩形类Rectangle和圆类Circle，并计算各自的面积和周长。

// 测试用例具体要求：输入1表示测试矩形类，之后输入矩形长和宽。输入2表示测试圆类，之后输入圆半径。

// Shape类定义如下：
// class Shape {
//     public:
//         virtual double getArea()=0;
//         virtual double getPerim()=0;
// };
// 裁判测试程序样例：
// #include <iostream>
// using namespace std;
// const double PI=3.14;

// class Shape {
//     public:
//         virtual double getArea()=0;
//         virtual double getPerim()=0;
// };

// /* ------请在这里填写答案 ------*/

// int main() {
//     Shape *p;
//     int n;
//     double w,h,r;
//     scanf("%d",&n);
//     switch(n) {
//         case 1: {
//             cin>>w>>h;
//             Rectangle rect(w,h);
//             cout<<"area="<<rect.getArea()<<endl;
//             cout<<"perim="<<rect.getPerim()<<endl;
//             break;
//         }
//         case 2: {
//             cin>>r;
//             Circle c(r);
//             cout<<"area="<<c.getArea()<<endl;
//             cout<<"perim="<<c.getPerim()<<endl;
//             break;
//         }
//     }

//     return 0;
// }
// 输入样例1：
// 在这里给出一组输入。例如：

// 1
// 4 5
// 输出样例1：
// 在这里给出相应的输出。例如：

// area=20
// perim=18
// 输入样例2：
// 在这里给出一组输入。例如：

// 2
// 5
// 输出样例2：
// 在这里给出相应的输出。例如：

// area=78.5
// perim=31.4
////////////////////////////////////////////////
class Rectangle: public Shape{
	private:
		double x,y; 
	public:
		Rectangle(double x,double y){
			this->x=x;
			this->y=y;
		}
	double getArea(){
		return x*y;
	}
	double getPerim(){
		return (x+y)*2;
	}
};
class Circle: public Shape{
	private:
		double r;
	public:
		Circle(double R){
			r=R;
		}
		double getArea(){
			return PI*r*r;
		}
		double getPerim(){
			return 2*PI*r;
		}
};
