// 定义一个Point类，有两个数据成员：x和y, 分别代表x坐标和y坐标，并有若干成员函数。
// 定义一个函数Distance(), 用于求两点之间的距离。

// 输入格式:
// 输入有两行：
// 第一行是第一个点的x坐标和y坐标；
// 第二行是第二个点的x坐标和y坐标。

// 输出格式:
// 输出两个点之间的距离，保留两位小数。

// 输入样例:
// 0 9
// 3 -4

// 输出样例:
// 13.34
//////////////////////////////
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
class Point{
	private:
		double X,Y;
	public:
		Point(double x,double y)
		{
			X=x;
			Y=y;
		}
	friend double Distance(Point &p1,Point&p2);
};
double Distance(Point &p1,Point&p2)
	{
		return sqrt(pow(p1.X-p2.X,2)+pow(p1.Y-p2.Y,2));
	}
int main()
{
	double a,b;
	cin>>a>>b;
	Point c1(a,b);
	cin>>a>>b;
	Point c2(a,b);
	cout<<fixed<<setprecision(2)<<Distance(c1,c2);
}
