// 给出下面的一个基类框架：

// class Point_1D

// { protected:

//     float x;//1D 点的x坐标

// public:

//     Point_1D(float p = 0.0);

//     float distance(const Point_1D & p2);
// }

// 以Point_1D为基类建立一个派生类Point_2D，增加一个保护数据成员：

//     float y;//2D平面上点的y坐标
// 以Point_2D为直接基类再建立一个派生类Point_3D，增加一个保护数据成员：

//     float z;//3D立体空间中点的z坐标
// 生成上述类并编写主函数，根据输入的点的基本信息，建立点对象，并能计算该点到原点的距离。

// 输入格式： 测试输入包含若干测试用例，每个测试用例占一行（点的类型（1表示1D点，2表示2D点，3表示3D点） 第一个点坐标信息（与点的类型相关） 第二个点坐标信息（与点的类型相关））。当读入0时输入结束，相应的结果不要输出。

// 输入样例：

// 1 -1 0

// 2 3 4 0 0

// 3 1 2 2 0 0 0

// 0

// 输出样例：

// Distance from Point -1 to Point 0 is 1

// Distance from Point(3,4) to Point(0,0) is 5

// Distance from Point(3,3,3) to Point(0,0,0) is 3
//////////////////////////////////////////////////
#include<iostream>
#include<cmath>
using namespace std;
class Point_1D {
	protected:
		float x, tx;
	public:
		Point_1D(float p, float tx) {
			x = p;
			this->tx = tx;
		}
		float distance(const Point_1D & p2);
};
class Point_2D: public Point_1D {
	protected:
		float y, ty;
	public:
		Point_2D(float p, float pp, float tx, float ty): Point_1D(p, tx) {
			y = pp;
			this->ty = ty;
		}
		float distance(const Point_2D & p2);
};
class Point_3D: public Point_2D {
	protected:
		float z, tz;
	public:
		Point_3D(float p, float pp , float ppp, float tx, float ty, float tz): Point_2D(p, pp, tx, ty) {
			z = ppp;
			this->tz = tz;
		}
		float distance(const Point_3D &p2);
};
int main() {
	float x, y, z, tx, ty, tz;
	int t = 1;
	cin >> t;
	while (t) {
		if (t == 1) {
			cin >> x >> tx;
			Point_1D p1(x, tx);
			cout << "Distance from Point " << x << " to Point " << tx << " is " << p1.distance(p1) << endl;
		}else if(t==2)
		{
			cin>>x>>y>>tx>>ty;
			Point_2D p2(x,y,tx,ty);
			cout<<"Distance from Point("<<x<<","<<y<<") to Point("<<tx<<","<<ty<<") is "<<p2.distance(p2) <<endl;
		}else if(t==3)
		{
			cin>>x>>y>>z>>tx>>ty>>tz;
			Point_3D p2(x,y,z,tx,ty,tz);
			cout<<"Distance from Point("<<x<<","<<y<<","<<z<<") to Point("<<tx<<","<<ty<<","<<tz<<") is "<<p2.distance(p2) <<endl;
		}
		cin >> t;
	}
	return 0;
}
float Point_1D::distance(const Point_1D & p2) {
	return fabs(tx - p2.x); //注意绝对值！！！！！！！！！！
}
float Point_2D::distance(const Point_2D & p2) {
	return fabs(sqrt(pow(tx-p2.x, 2) + pow(ty-p2.y, 2)));
}
float Point_3D::distance(const Point_3D & p2) {
	return fabs(sqrt(pow(tx-p2.x, 2) + pow(ty-p2.y, 2) + pow(tz-p2.z, 2)));
}////////////////////////////////////
