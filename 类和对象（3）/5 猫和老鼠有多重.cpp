// 定义猫和老鼠：Cat与Mouse两个类，二者都有weight属性，定义二者的一个友元函数totalweight()，计算二者的重量和。

// 裁判测试程序样例：
// #include <iostream>
// using namespace std;

// /* 请在这里填写答案 */

// int main()
// {
//   int w1,w2;
//   cin>>w1>>w2;
//   Cat tom(w1);
//   Mouse jerry(w2);
//   cout<<totalWeight(tom,jerry)<<endl;
// }
// 输入样例：
// 100 200
// 输出样例：
// 300
/////////////////////////////////
class Cat;
class Mouse{
	private:
		int weight;
	public:
		Mouse(int w=0)
		{
			weight=w;
		}
	friend int totalWeight(Cat a,Mouse b);
};
class Cat{
	private:
		int weight;
	public:
		Cat(int w=0)
		{
			weight=w;
		}
	friend int totalWeight(Cat a,Mouse b);
};
int totalWeight(Cat a,Mouse b)
{
	return a.weight+b.weight;
}
