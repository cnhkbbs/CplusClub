// 根据给定的程序，写成相关的成员函数，完成指定功能。

// 函数接口定义：
// 定义max函数，实现输出最高成绩对应的学号以及最高成绩值。
// 裁判测试程序样例：
// #include <iostream>
// using namespace std;
// class Student
//  {public:
//    Student(int n,float s):num(n),score(s){}
//    int num;
//    float score;
//  };

// int main()
// {Student stud[5]={
//   Student(101,78.5),Student(102,85.5),Student(103,98.5),
//   Student(104,100.0),Student(105,95.5)};
//  void max(Student* );
//  Student *p=&stud[0];
//  max(p);
//  return 0; 
//  }
// /* 请在这里填写答案 */
// 输入样例：
// 无
// 输出样例：
// 104 100
//////////////////////////////
void max(Student *p)
{
	int i,num=0;
	float maxscore=0;
	for(i=0;i<5;i++){
		if(p[i].score>maxscore){
			maxscore=p[i].score;
			num=p[i].num;
		}
	}
	cout<<num<<" "<<maxscore;	
} 
