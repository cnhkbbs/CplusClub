// 类定义：
// 定义一个学生类Student，使得main()函数能够得到指定的输出结果
// main()函数如下：
// /* 请在这里填写答案 */
// int main()
//   {Student stud1(10010,"Wang_li",'f');
//    stud1.display();
//    Student stud2(10011,"Zhang_fun",'m');
//    stud2.display();
//    return 0;
// }
// 输入样例：
// 无
// 输出样例：
// 在这里给出相应的输出。例如：

// Constructor called.
// num:10010
// name:Wang_li
// sex:f

// Constructor called.
// num:10011
// name:Zhang_fun
// sex:m

// Destructor called.
// Destructor called.
//////////////////////////////////////////
#include<iostream>
#include<string>
using namespace std;
class Student {
	public:
		Student(int id, string name, char sex) {
			cout << "Constructor called." << endl;
			Id = id;
			Name = name;
			Sex = sex;
		}
		void display() {
			cout << "num:" << Id << endl;
			cout << "name:" << Name << endl;
			cout << "sex:" << Sex << endl << endl;
		}
		~Student() {
			cout << "Destructor called." << endl;
		}
	private:
		int Id;
		string Name;
		char Sex;
};
