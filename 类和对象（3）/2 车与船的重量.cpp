// 定义一boat与car两个类，二者都有weight属性，定义二者的一个友元函数totalweight()，计算二者的重量和。

// 测试程序样例：
// 在这里给出函数被调用进行测试的例子。例如：
// #include <iostream>
// using namespace std;

// /* 请在这里填写答案 */

// int main()
// {
//   int c,b;
//   cin>>c>>b;
//   car c1(c);
//   boat b1(b);
//   cout<<totalweight(b1,c1)<<endl;
// }
// 输入样例：
// 1000 2000
// 输出样例：
// 3000
//////////////////////////////////
class car;
class boat{
	private:
		int weight;
	public:
		boat(int w)
		{
			weight=w;
		}
	friend int totalweight(boat &x,car &y);
};
class car{
	private:
		int weight;
	public:
		car(int w)
		{
			weight=w;
		}
	friend int totalweight(boat &x,car &y);
};
int totalweight(boat &x,car &y)
{
	return x.weight+y.weight;
}
