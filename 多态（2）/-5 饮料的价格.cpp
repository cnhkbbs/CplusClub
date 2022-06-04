// 一个茶吧提供三类饮料：茶、咖啡和牛奶。其中本地茶要另加50%的服务费，其它茶要加20%的服务费；现磨咖啡要加100%的服务费，其它咖啡加20%的服务费；牛奶不加服务费，服务费精确到小数点一位。

// 给出下面的基类框架：

// Class Drink
// {
// protected:

// int NO; //编号

// int amount; //数量

// float price; //单价

// public:

// virtual void display()=0;//输出费用

// }

// 以Drink为基类，构建出Tea, Coffee和Milk三个类。

// 生成上述类，并编写主函数，要求主函数中有一个基类Drink指针数组，数组元素不超过10个。

// Drink *pd[10];

// 主函数根据输入的信息，相应建立Tea, Coffee或Milk类对象，并给出收费。

// 输入格式：每个测试用例占一行，每行给出饮料的基本信息，第一个为饮料的类型，茶为1，咖啡为2，牛奶为3。接下来是申请的编号（100-999），然后是数量和单价。对于茶叶来说，接下来输入一个地区代码，其中1代表本地。对于咖啡来说，接下来要输入一个加工代码，其中1代表现磨。最后一行为0。
// 要求输出编号和收费（小数点后保留1位小数）。

// 提示：应用虚函数实现多态

// 输入样例：

// 1 106 3 33 1

// 1 103 2 20 2

// 3 109 1 15

// 2 107 2 15.8 1

// 2 232 3 21 29

// 0

// 输出样例：

// 106 148.5

// 103 48.0

// 109 15.0

// 107 63.2

// 232 75.6
////////////////////////////////////////////////////////////
#include<iostream>
#include<iomanip>
using namespace std;
class Drink {
	protected:
		int NO;//编号
		int amount;//数量
		float price;//单价
	public:
		virtual void display() = 0; //输出费用
};
class Tea: public Drink{
	private:
		int clocate;//地区代码 
	public:
		Tea(int no,int Amount,float Price,int locate){
			NO=no;
			amount=Amount;
			price=Price;
			clocate=locate;
		}
		void display(){
			if(clocate==1){	
				cout<<NO<<" "<<fixed<<setprecision(1)<<price*amount*1.5<<endl;
			}else{
				cout<<NO<<" "<<fixed<<setprecision(1)<<price*amount*1.2<<endl;
			}
		}
};
class Coffee: public Drink{
	private:
		int jiagong;//加工 
	public:
		Coffee(int no,int Amount,float Price,int Jiagong){
			NO=no;
			amount=Amount;
			jiagong=Jiagong;
			price=Price;
		}
		void display(){
			if(jiagong==1){
				cout<<NO<<" "<<fixed<<setprecision(1)<<amount*price*2<<endl; 
			}else{
				cout<<NO<<" "<<fixed<<setprecision(1)<<amount*price*1.2<<endl;
			}
		}
};
class Milk: public Drink{
	public:
		Milk(int no,int Amount,float Price){
			NO=no;
			amount=Amount;
			price=Price;
		}
		void display(){
			cout<<NO<<" "<<fixed<<setprecision(1)<<amount*price<<endl;
		}
};
int main()
{
	int kind,no,locade,jiagong;
	Drink *pd[10];
	float price,amount;
	cin>>kind;
	for(int i=0;kind!=0;i++){
		if(kind==1){
			cin>>no>>amount>>price>>locade;
			pd[i]=new Tea(no,amount,price,locade);
			pd[i]->display();
		}else if(kind==2){
			cin>>no>>amount>>price>>jiagong;
			pd[i]=new Coffee(no,amount,price,jiagong);
			pd[i]->display();
		}else if(kind==3){
			cin>>no>>amount>>price;
			pd[i]=new Milk(no,amount,price);
			pd[i]->display();
		}
		cin>>kind;
	}
}
