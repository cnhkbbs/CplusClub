// 完成两个类，一个类Animal，表示动物类，有一个成员表示年龄。一个类Dog，继承自Animal，有一个新的数据成员表示颜色，合理设计这两个类，使得测试程序可以运行并得到正确的结果。

// 函数接口定义：
// 按照要求实现类

// 裁判测试程序样例：
// /* 请在这里填写答案 */

// int main(){
//     Animal ani(5);
//     cout<<"age of ani:"<<ani.getAge()<<endl;
//     Dog dog(5,"black");
//     cout<<"infor of dog:"<<endl;
//     dog.showInfor();
// }

// 输入样例：
// 无

// 输出样例：
// age of ani:5
// infor of dog:
// age:5
// color:black
//////////////////////////////////////////
#include<iostream>
using namespace std;
class Animal{
	private:
		int age;
	public:
		Animal(int age)
		{
			this->age=age;
		}
		int getAge(void)
		{
			return age;
		}
};
class Dog: public Animal{
	private:
		string color;
	public:
		Dog(int age,string color):Animal(age){
			this->color=color;
		}
		void showInfor()
		{
			cout<<"age:"<<getAge()<<"\ncolor:"<<color;
		}
};
