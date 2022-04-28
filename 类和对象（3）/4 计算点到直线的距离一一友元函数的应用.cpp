// 计算点到直线的距离。首先设计一个点类Point,它有2 个私有数据成员x和y,表示点的坐标。另一个类为直线类Line,它有3 个私有数据成员a,b和c，表示直线方程ax+by+c= 0。这两个类中都说明了一个友元函数dist,用于计算一个点到直线的距离。点(x.y)到直线ax+by+c=0的距离d的计算公式如下:

// 无标题.bmp

// 语法要点: 友元函数的特点。
// 这是一个编程题模板。请在这里写题目描述。例如：本题目要求读入2个整数A和B，然后输出它们的和。

// 输入格式:
// 输入两行，第一行输入两个整数，表示点坐标x,y的值
// 在第二行中输入直线三个参数，表示直线方程的三个洗漱a,b,c.

// 输出格式:
// 计算点到直线的距离保留两位小数。

// 输入样例:
// 在这里给出一组输入。例如：

// 5 5
// 2 4 3
// 输出样例:
// 在这里给出相应的输出。例如：

// The distance is: 7.38
////////////////////////////////////////////
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
class Line;
class Point{
	private:
		double X,Y;
	public:
		Point(double x=0,double y=0)
		{
			X=x;
			Y=y;
		}
	friend void  dist(Point &a,Line &b);
};
class Line{
	private:
		double a,b,c;
	public:
		Line(double x=0,double y=0,double z=0)
		{
			a=x;
			b=y;
			c=z;
		}
	friend void  dist(Point &a,Line &b);
}; 
void  dist(Point &p,Line &l)
{
	double result;
	result=fabs((l.a*p.X+l.b*p.Y+l.c)/sqrt(pow(l.a,2)+pow(l.b,2)));
	if(result==0){
		cout<<"The distance is: 0"; 
	}else{
	cout<<"The distance is: "<<fixed<<setprecision(2)<<result<<endl;	
	}
}
int main()
{
	double x,y,a,b,c;
	cin>>x>>y>>a>>b>>c;
	Point p1(x,y);
	Line l1(a,b,c);
	dist(p1,l1);
}
