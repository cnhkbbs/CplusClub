// 给出下面的多边形基类框架：

// class polygon

// { protected:

//    int number;//边数，最多不超过100条边
// private:

//    int side_length[100];//边长数组
// public:

//    polygon();//构造函数根据需要重载
//    int perimeter();//计算多边形边长
//    void display();//输出多边形边数和周长
// }

// 建立一个派生类rectangle(矩形)，增加以下数据成员：

//   int height;
//   int width;
// 增加以下成员函数：

//  rectangle类的无参和参数化构造函数
//  int perimeter();//计算矩形边长
//  void display();//输出多边形边数和周长
// 建立一个派生类equal_polygon(等边多边形)，增加以下数据成员：

//   int side_len;
// 增加以下成员函数：

//  equal_polygon类的无参和参数化构造函数
//  int perimeter();//计算等边多边形边长
//  void display();//输出多边形边数和周长
// 生成上述类并编写主函数，根据输入的多边形信息，相应建立一个多边形类对象或矩形类对象或等边多边形类对象，计算每一个多边形的周长并且输出其边数和周长。

// 输入格式： 测试输入包含一个测试用例，该测试用例的第一行输入多边形的个数n，接下来n行每一行给出一个多边形的基本信息，每行的第一个数字为当前多边形的类型，0为一般多边形，后面跟随m个数字为m条边的边长，-1为一般多边形边长输入结束标志，1为矩形，后面跟随两个数字，分别为height和width，2为等边多边形，后面跟随两个数字为等边多边形的边数和边长。

// 输入样例：

// 3

// 0 32 54 76 88 24 -1

// 1 32 54

// 2 3 32

// 输出样例：

// 5 274

// 4 172

// 3 96
///////////////////////////////////////////////////
#include<iostream>
using namespace std;
class polygon {
	protected:
		int number;//边数，最多不超过100条边
	private:
		int side_length[100];//边长数组
	public:
		polygon(int number) { //构造函数根据需要重载
			this->number = number;
		}
		void setnumber(int elem, int i) {
			side_length[i] = elem;
			number = i + 1;
		}
		int perimeter() { //计算多边形边长
			int sum = 0;
			for (int i = 0; i < number; i++) {
				sum += side_length[i];
			}
			return sum;
		}
		void display() { //输出多边形边数和周长
			cout << number << " " << perimeter() << endl;
		}
};
class rectangle: public polygon {
	private:
		int height, width;
	public:
		rectangle(int height, int width, int number): polygon(number) {
			this->height = height;
			this->width = width;
		}
		int perimeter() {
			return (height + width) * 2;
		}
		void display() {
			cout << number << " " << perimeter() << endl;
		}
};
class equal_polygon: public polygon {
	private:
		int side_len;
	public:
		equal_polygon(int len, int number): polygon(number) {
			side_len = len;
		}
		int perimeter() {
			return number * side_len;
		}
		void display() {
			cout << number << " " << perimeter() << endl;
		}
};
int main() {
	int n, flag, t, i, x, y;
	cin >> n;
	for (int j = 0; j < n; j++) {
		cin >> flag;
		if (flag == 0) {
			polygon zero(0);
			cin >> t;
			for (i = 0; t > 0; i++) {
				zero.setnumber(t, i);
				cin >> t;
			}
			zero.display();
		} else if (flag == 1) {
			cin >> x >> y;
			rectangle one(x, y, 4);
			one.display();
		} else if (flag == 2) {
			cin >> t >> x;
			equal_polygon two(x, t);
			two.display();
		}

	}
}
