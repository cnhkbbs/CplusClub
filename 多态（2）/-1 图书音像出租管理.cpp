// 一个图书音像店出租图书和磁带。
// 给出下面一个基类的框架：
// class Publication
// {
// protected:
// string title;//名称
// float price;//原价
// int day;//租期
// public:
// virtual void display()=0;//打印价格清单
// }
// 以Publication为基类，构建Book和Tape类。
// 生成上述类并编写主函数，要求主函数中有一个基类Publication指针数组，数组元素不超过10个。
// Publication pp[10];
// 主函数根据输入的信息，相应建立Book, Tape类对象。
// 它们的原始租金为：租期1.2。
// 另外，实际收取的租金不超过2倍的租品估价。
// Book的估价为：新旧程度*原价。
// Tape的估价为：原价/（1+已出租次数/3）。
// 输入格式：每个测试用例占一行，第一项为租品类型，1为Book,2为Tape.接下来为名称、原价、租期。最后一项Book是新旧程度（0.1至1），Tape是已出租次数。以0表示输入的结束。
// 要求输出名称，原始租金(小数点后保留1位小数)，如果原始租金大于2倍租品估价，则同时给出实际应收取的租金(小数点后保留1位小数)，并在最后标明R。

// 输入样例
// 1 AAA 19.5 3 0.5
// 1 BBB 9.5 2 0.1
// 2 AA 10 2 0
// 2 DDDD 12.5 2 38
// 1 FFF 42 3 0.1
// 0
// 输出样例
// AAA 3.6
// BBB 2.4 1.9 R
// AA 2.4
// DDDD 2.4 1.8 R
// FFF 3.6
/////////////////////////////////////////
#include<iostream>
#include<iomanip>
using namespace std;
class Publication {
	protected:
		string title;//名称
		float price;//原价
		int day;//租期
	public:
		virtual void display() = 0; //打印价格清单
};
class Book: public Publication {
	public:
		Book(float newold, string title, float price, int day) {
			this->newold = newold;
			this->title = title;
			this->price = price;
			this->day = day;
		}
		void display() {
			if (day * 1.2 > newold * price * 2) {
				cout << title << " " << fixed << setprecision(1) << day * 1.2 << " " << fixed << setprecision(1) << newold*price * 2 << " R" << endl;
			} else {
				cout << title << " " << fixed << setprecision(1) << day * 1.2 << endl;
			}
		}
	private:
		float newold;
};
class Tape: public Publication {
	public:
		Tape(float times, string title, float price, int day) {
			this->times = times;
			this->title = title;
			this->price = price;
			this->day = day;
		}
		void display() {
			if (day * 1.2 > price / (1 + times / 3)) {
				cout << title << " " << fixed << setprecision(1) << day * 1.2 << " " <<price * 2 / (1 + times / 3) << fixed << setprecision(1) <<  " R" << endl;
			} else {
				cout << title << " " << fixed << setprecision(1) << day * 1.2 << endl;
			}
		}
	private:
		float times;
};
int main() {
	Publication *pp[10];
	int kinds,i=0;
	string name; //名称
	float price; //原价
	int day; //租期
	float times; //出租次数
	float newold;//新旧程度
	cin >> kinds;
	while (kinds > 0) {
		if (kinds == 1) {
			cin >> name >> price >> day >> newold;
			pp[i]=new Book(newold, name, price, day);
			pp[i]->display();
			i++;
		} else if (kinds == 2) {
			cin >> name >> price >> day >> times;
			pp[i]=new Tape(times, name, price, day);
			pp[i]->display();
			i++;
		}
		cin >> kinds;
	}
}
