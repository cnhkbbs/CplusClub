// 现有一个类Point表示二维空间中的点，包含私有数据成员double x和double y，x表示该点的x坐标，y表示该点的y坐标。要求编写一个友元函数，输出两点之间的距离。
// 输入说明：
// 每一行四个数值，前两个数是第一个坐标点的x坐标和y坐标，后两个数是第二个坐标点的x坐标和y坐标。当输入四个0时表示输入结束。
// 输出说明：
// 输出两点距离必须保留两位小数。

// 函数接口定义：
// 输出两个点p1和p2之间的距离，要求输出结果必须保留两位小数。
// void pointDis（Point& p1, Point& p2）;
// 其中p1 和 p2 都是用户传入的参数。函数须计算p1和p2的距离并输出，要求输出结果必须保留两位小数。

// 裁判测试程序样例：

// #include<iostream>
// #include<cmath>
// #include<iomanip>
// using namespace std;
// class Point {
//     public:
//         Point() {
//         }
//         Point(double px,double py) {
//             x=px;
//             y=py;
//         }
//         friend void pointDis(Point &p1,Point &p2);
//     private:
//         double x;
//         double y;
// };
// /* 请在这里填写答案 */

// int main() {
//     double x1,y1,x2,y2;
//     cin>>x1>>y1>>x2>>y2;
//     Point p1,p2;
//     while(!(x1==0&&y1==0&&x2==0&&y2==0)) {
//         p1=Point(x1,y1);
//         p2=Point(x2,y2);
//         pointDis(p1,p2);
//         cin>>x1>>y1>>x2>>y2;
//     }
//     return 0;
// }

// 输入样例：
// 1.5  3.8  4.2  8.5
// 1  3  4  7
// 0  0  0  0
// 输出样例：
// 5.42
// 5.00
/////////////////////////////////////
void pointDis(Point &p1,Point &p2)
{
	double d;
	d=sqrt(pow(p1.x-p2.x,2)+pow(p1.y-p2.y,2));
	cout<<fixed<<setprecision(2)<<d<<endl;
}
