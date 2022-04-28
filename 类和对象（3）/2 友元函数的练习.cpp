// 定义Boat与Car两个类，两者都有私有的整型weight属性，定义两者的一个友元函数getTotalWeight()，计算二者的重量和。

// 参考主函数：
// int main()
// {
// int n,m;
// cin>>n>>m;
// Boat boat(n);
// Car car(m);
// cout<<"船和汽车共重"<<getTotalWeight(boat,car)<<"吨"<<endl;
// }

// 输入格式:
// 请在这里写输入格式。例如：输入在一行中给出2个整数m和n。

// 输出格式:
// 请在这里描述输出格式。例如：对每一组输入，在一行中输出:船和汽车共重M+n吨值。

// 输入样例:
// 在这里给出一组输入。例如：

// 40 30
// 输出样例:
// 在这里给出相应的输出。例如：

// 船和汽车共重70吨
///////////////////////////////////////////
#include<iostream>
using namespace std;
class Car;
class Boat{
	private:
		int weight;
	public:
		Boat(int w)
		{
			weight=w;
		}
	friend int getTotalWeight(Boat &a,Car &b);
};
class Car{
	private:
			int weight;
		public:
			Car(int w)
			{
				weight=w;
			}
		friend int getTotalWeight(Boat &a,Car &b);
};
int getTotalWeight(Boat &a,Car &b)
{
	return a.weight+b.weight;
}
int main()
{
int n,m;
cin>>n>>m;
Boat boat(n);
Car car(m);
cout<<"船和汽车共重"<<getTotalWeight(boat,car)<<"吨"<<endl;
}
