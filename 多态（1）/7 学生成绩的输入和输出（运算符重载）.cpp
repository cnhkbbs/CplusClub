// 现在需要输入一组学生的姓名和成绩，然后输出这些学生的姓名和等级。

// 输入时，首先要输入学生数（正整数）N。接着输入N组学生成绩，每组成绩包括两项：第一项是学生姓名，第二项是学生的成绩（整数）。

// 输出时，依次输出各个学生的序号（从1开始顺序编号），学生姓名，成绩等级（不小于60为PASS，否则为FAIL）

// 函数接口定义：
// 面向Student类对象的流插入和流提取运算符
// 裁判测试程序样例：
// #include <iostream>
// #include <string>
// using namespace std;

// /* 请在这里填写答案 */

// int main(){
//     int i, repeat;
//     Student st;
//     cin>>repeat;
//     for(i=0;i<repeat;i++){
//         cin>>st;
//         cout<<st<<endl;
//     }
//     return 0;
// }
// 输入样例：
// 3
// Li 75
// Zhang 50
// Yang 99
// 输出样例：
// 1. Li PASS
// 2. Zhang FAIL
// 3. Yang PASS
///////////////////////////////
class Student {
	private:
		string name;
		int score;
	public:
		Student() {
			name = ' ';
			score = 0;
		}
		Student(string n, int s) {
			name = n;
			score = s;
		}
		friend istream &operator >>(istream &, Student &);
		friend ostream &operator <<(ostream &, Student &);
};
istream &operator >>(istream& op, Student &st) {
	op >> st.name >> st.score;
	return op;
}
ostream &operator <<(ostream &os, Student &st) {
	static int i=1;
	os<<i<<". "<<st.name<<" "<<(st.score>=60?"PASS":"FAIL"); 
	i+=1;
	return os;
}
