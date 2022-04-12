// 根据main（）中的调用形式，定义一个点类（完成数据成员与成员函数的定义），将点的坐标显示在屏幕上。

// 类定义：
// 定义点类Point：
// class Point 
// {
//  ... 
// };
// 测试主函数样例：
// 在这里给出函数被调用进行测试的例子。例如：
// #include<iostream>
// using namespace std;
// int main()
// {
//     Point p1,p2;
//     p1.setXY(1,2);
//     p2.setXY(3,4);
//     cout<<"x of Point p1："<<p1.getX()<<endl;
//     cout<<"y of Point p2："<<p1.getY()<<endl;
//     cout<<"Point P2:("<<p2.getX()<<","<<p2.getY()<<")"<<endl;
//     return 0;
// }
// /* 请在这里填写答案 */
// 输入样例：
// 无
// 输出样例：
// 在这里给出相应的输出。例如：

// x of Point p1：1
// y of Point p2：2
// Point P2:(3,4)
/////////////////////////////////////////////////////////////
class Point {
	public:
		void setXY(int x, int y) {
			X = x;
			Y = y;
		}
		int getX() {
			return X;
		}
		int getY() {
			return Y;
		}
	private:
		int X;
		int Y;
};
