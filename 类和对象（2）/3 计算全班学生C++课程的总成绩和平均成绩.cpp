// 定义一个类Student，记录学生C++课程的成绩。要求使用静态数据成员或静态成员函数计算全班学生C++课程的总成绩和平均成绩。

// 输入格式:
// 输入5个不超过100的正整数，作为C++成绩。

// 输出格式:
// 在第一行中输出成绩的和，第二行输出平均成绩。

// 输入样例:
// 90 80 70 60 50
// 输出样例:
// 350
// 70
////////////////////////////////
#include<iostream>
using namespace std;
class Student {
	private:
		int score;
		static int sum;

	public:
		Student(int x = 0) {
			score = x;
			sum += score;
		}
		static int avg() {
			return sum / 5;
		}
		static int getsum() {
			return sum;
		}
};
int Student::sum = 0;

int main() {
	int i, t;
	Student stu[5];
	for (i = 0; i < 5; i++) {
		cin >> t;
		stu[i] = Student(t);
	}
	cout << Student::getsum() << "\n" << Student::avg() << endl;
}
