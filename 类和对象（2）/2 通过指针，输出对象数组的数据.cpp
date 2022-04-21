// 设计一个类，主函数中建立一个对象数组，输入5个学生数据（学号、成绩），用对象指针指向数组首元素，输出5个学生的数据。

// 输入格式:
// 输入5个学生数据（学号、成绩），学号为不超过10000的正整数，成绩为0-100的正整数。

// 输出格式:
// 按顺序输出学生的学号和成绩，每行显示一个学生的信息。

// 输入样例:
// 在这里给出一组输入。例如：

// 101 90
// 102 80
// 103 70
// 104 60
// 105 50
// 输出样例:
// 在这里给出相应的输出。例如：

// 101 90
// 102 80
// 103 70
// 104 60
// 105 50
///////////////////////////////
#include<iostream>
using namespace std;
class Students {
	public:
		Students(int id = 0, int score = 0) {
			Id = id;
			Score = score;
		}
		int getId() {
			return Id;
		}
		int getScore() {
			return Score;
		}
	private:
		int Id;
		int Score;
};
int main() {
	Students stud[5];
	Students *p;
	p = stud;
	int i, x, y;
	for (i = 0; i < 5; i++) {
		cin >> x >> y;
		stud[i] = Students(x, y);
	}
	for (i = 0; i < 5; i++) {
		cout << p[i].getId() << " " << p[i].getScore() << endl;
	}
}
