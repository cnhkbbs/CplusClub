// 定义一学生类，已有若干个学生数据，包括学号、姓名、成绩，要求输出这些学生数据并计算平均分。

// ###类定义：

// 定义一学生类，已有若干个学生数据，包括学号、姓名、成绩，要求输出这些学生数据并计算平均分
// 裁判测试程序样例：
// 利用学生类进行对象定义并输出结果的例子如下：
// /* 请在这里填写答案 */

// int Stud::sum=0;
// int Stud::num=0;
// int main()
// {
//     Stud  s1(1,"Li",89),s2(2,"Chert",78),s3(3,"zheng",94);
//     s1.disp();
//     s2.disp();
//     s3.disp();
//     cout<<"avg="<<Stud::avg()<<endl;
//     return 0;
// }
// 输入：
// 无
// 输出样例：
// 1，Li，89
// 2，Chert，78
// 3，zheng，94
// avg=87
/////////////////////////////////////////
#include<iostream>
#include<string>
using namespace std;
class Stud {
	public:
		Stud(int id, string name, float score) {
			Id = id;
			Name = name;
			Score = score;
			sum += Score;
			num++;
		}
		void disp() {
			cout << Id << "," << Name << "," << Score << endl;
		}
		static int avg() {
			return sum / num;
		}
	private:
		int Id;
		string Name;
		int Score;
		static int sum;
		static int num;
};
