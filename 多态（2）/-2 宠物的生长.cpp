// 现在要开发一个系统，对宠物的生长状态进行管理。
// 给出下面的一个基类框架
// class Pet
// {
// protected:
// 　　string name;//姓名
// int length;//身长
// int weight;//体重
// int current;//当前日期
// public:
// virtual void display(int day)=0;//输出目标日期的身长和体重
// }
// 以Pet为基类，构建出Cat和Dog两个类:
// Cat一天身长加1，体重加2。
// Dog一天身长加2，体重加1。
// 生成上述类并编写主函数，要求主函数中有一个基类Pet指针数组，数组元素不超过10个。
// Pet *pt[10];
// 主函数根据输入的信息，相应建立Cat类对象或Dog类对象，并给出目标日期宠物的身长和体重。
// 输入格式：每个测试用例占一行，每行给出宠物的基本信息，第一个为当前宠物的类型：1为Cat，2为Dog。接下来为它的名字，随后的两个数字为身长和体重,最后为测身长和体重的日期（不大于１０的正整数）。最后一行为目标日期（大于１０的正整数）。
// 要求输出目标日期宠物姓名、身长和体重
// 提示：应用虚函数实现多态

// 输入样例
// 1 Marry 22 12 5
// 2 Jack 10 9 9
// 1 Jim 11 8 6
// 11

// 输出样例
// Marry 28 24
// Jack 14 11
// Jim 16 18
///////////////////////////////////////////////////////
#include<iostream>
using namespace std;
class Pet {
	protected:
		int kind;
		string name;//姓名
		int length;//身长
		int weight;//体重
		int current;//当前日期
	public:
		virtual void display(int day) = 0; //输出目标日期的身长和体重
};
class Cat: public Pet {
	public:
		Cat(string name, int length, int weight, int current) {
			this->name = name;
			this->length = length;
			this->weight = weight;
			this->current = current;
		}
		void display(int day) {
			cout << name << " " << (day - current) + length << " " << (day - current) * 2 + weight << endl;
		}
};
class Dog: public Pet {
	public:
		Dog(string name, int length, int weight, int current) {
			this->name = name;
			this->length = length;
			this->weight = weight;
			this->current = current;
		}
		void display(int day) {
			cout << name << " " << (day - current) * 2 + length << " " << (day - current) + weight << endl;
		}
};
int main() {
	Pet *pt[11];
	int kind, i;
	string name;
	int length,
	int weight;
	int current;
	cin >> kind;
	for (i = 0; kind < 10; i++) {
		cin >> name >> length >> weight >> current;
		if (kind == 1) {
			pt[i] = new Cat(name, length, weight, current);
		} else if (kind == 2) {
			pt[i] = new Dog(name, length, weight, current);
		}
		cin >> kind;
	}
	for (int j = 0; j < i; j++) {
		pt[j]->display(kind);
	}
}
