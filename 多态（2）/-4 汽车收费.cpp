// 现在要开发一个系统，管理对多种汽车的收费工作。
// 给出下面的一个基类框架

// class Vehicle

// {
// protected:

// string NO;//编号

// public:

// virtual void display()=0;//输出应收费用

// }

// 以Vehicle为基类，构建出Car、Truck和Bus三个类。

// Car的收费公式为： 载客数8+重量2

// Truck的收费公式为：重量*5

// Bus的收费公式为： 载客数*3

// 生成上述类并编写主函数，要求主函数中有一个基类Vehicle指针数组，数组元素不超过10个。

// Vehicle *pv[10];

// 主函数根据输入的信息，相应建立Car,Truck或Bus类对象，对于Car给出载客数和重量，Truck给出重量，Bus给出载客数。假设载客数和重量均为整数

// 输入格式：每个测试用例占一行，每行给出汽车的基本信息，每一个为当前汽车的类型1为car，2为Truck，3为Bus。接下来为它的编号，接下来Car是载客数和重量，Truck给出重量，Bus给出载客数。最后一行为0，表示输入的结束。
// 要求输出各车的编号和收费。

// 提示：应用虚函数实现多态

// 输入样例

// 1 002 20 5

// 3 009 30

// 2 003 50

// 1 010 17 6

// 0

// 输出样例

// 002 170

// 009 90

// 003 250

// 010 148
//////////////////////////////////////////////////////////
#include<iostream>
using namespace std;
class Vehicle {
	protected:
		string NO;//编号
	public:
		virtual void display() = 0; //输出应收费用
};
class Car: public Vehicle{
	public:
		Car(string no,int weight,int members){
			NO=no;
			this->weight=weight;
			this->members=members;
		}
		void display(){
			cout<<NO<<" "<<members*8+weight*2<<endl;
		}
	private:
		int weight,members;
};
class Truck: public Vehicle{
	public:
		Truck(string no,int weight){
			NO=no;
			this->weight=weight;
		}
		void display()
		{
			cout<<NO<<" "<<weight*5<<endl; 
		}
	private:
		int weight;
};
class Bus: public Vehicle{
	public:
		Bus(string no,int members){
			NO=no;
			this->members=members;
		}
		void display(){
			cout<<NO<<" "<<members*3<<endl; 
		}
	private:
		int members;
}; 
int main()
{
	int kind;
	int weight,members;
	string name;
	Vehicle *pp[10];
	cin>>kind;
	for(int i=0;kind>0;i++){
		if(kind==1){
			cin>>name>>members>>weight;
			pp[i]=new Car(name,weight,members);
			pp[i]->display();
		}else if(kind==2){
			cin>>name>>weight;
			pp[i]=new Truck(name,weight);
			pp[i]->display();
		}else if(kind==3){
			cin>>name>>members;
			pp[i]=new Bus(name,members);
			pp[i]->display();
		}
		cin>>kind;
	}
	return 0;
}
