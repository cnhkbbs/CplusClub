// 本题要求声明和实现一个Car类，包括实现其成员函数。

// 要求如下：

// 类和函数接口定义：
// 1. 声明一个Car类;
// 2. 三个public成员函数:
// (1) disp_welcomemsg()，无返回类型;
// (2) get_wheels()，返回一个Car类的数据成员m_nWheels的值；
// (3) set_wheels(int)，用指定的形参初始化数据成员m_nWheels的值；
// 3. 一个私有数据成员m_nWheels，整数类型，代表汽车的车轮数量。
// 其中，成员函数disp_welcomemsg()显示一条欢迎信息“Welcome to the car world!”。
// 成员函数get_wheels()返回Car类的私有数据成员m_nWheels。
// 成员函数set_wheels(int)用指定的形参初始化数据成员m_nWheels。

// 裁判测试程序样例：
// #include <iostream>
// using namespace std;

// /* 请在这里填写答案 */

// int main()
// {
//     int n;
//     cin >> n;
//     Car myfstcar, myseccar;    //定义类对象
//     myfstcar.disp_welcomemsg();//访问成员函数，显示欢迎信息
//     myfstcar.set_wheels(n);    //访问成员函数，设置车轮数量
//     myseccar.set_wheels(n+4);  //访问成员函数，设置车轮数量
//     //访问成员函数，显示车轮数量
//     cout << "my first car wheels num = " << myfstcar.get_wheels() << endl;
//     cout << "my second car wheels num = " << myseccar.get_wheels() << endl;

//     return 0;
// }
// 输入样例：
// 4
// 输出样例：
// Welcome to the car world!
// my first car wheels num = 4
// my second car wheels num = 8
//////////////////////////////////////////////////
class Car{
	public:
		void disp_welcomemsg()
		{
			cout<<"Welcome to the car world!"<<endl;
		}
		int get_wheels()
		{
			return m_nWhells;
		}
		void set_wheels(int x=0)
		{
			m_nWhells=x;
		} 
	private:
		 int m_nWhells;
};
