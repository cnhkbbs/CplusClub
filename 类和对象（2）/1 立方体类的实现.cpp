// 立方体类Box的实现，完成计算体积、计算表面积、输出结果等功能。其中给定的主函数为：

// int  main( ){
//     float ab;
//     cin>>ab;
//     Box  obj;
//     obj.seta( ab );
//     obj.getvolume( );
//     obj.getarea( );
//     obj.disp( );
//     return 0;
// }
// 输入格式:
// 立方体的边长，可以是float类型的数据。

// 输出格式:
// 立方体的体积和表面积，中间用一个空格隔开，末尾换行。

// 输入样例:
// 3
// 输出样例:
// 27 54
////////////////////////
#include<iostream>
using namespace std;
class Box {
	public:
		void seta(int a) {
			x = a;
		}
		void getvolume() {
			volume = x * x * x;
		}
		void getarea() {
			area = x * x * 6;
		}
		void disp() {
			cout << volume << " " << area << endl;
		}
	private:
		int x;
		int volume;
		int area;
};
int  main( ) {
	float ab;
	cin >> ab;
	Box  obj;
	obj.seta(ab);
	obj.getvolume( );
	obj.getarea( );
	obj.disp( );
	return 0;
}
