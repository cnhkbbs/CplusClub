// 本题要求定义一个简单的学生类，数据成员仅需要定义学号和姓名，函数成员的原型见给出的代码，请给出函数成员的类外完整实现。

// 函数接口定义：

// class Student
// {
// private:
//     int m_id;
//     char m_name[10];
// public:
//     Student(int id=0,char *name="");
//     ~Student();
//     void print();
    
// };
// 其中m_id和m_name分别表示学生的学号和姓名，类型已经定义好。类内声明了3个成员函数，分别表示构造函数、析构函数和用于输出学生信息的函数。
// 构造函数要完成两个数据成员的初始赋值，并做一行输出，形如：“Hi!学号 姓名”。
// 析构函数要求输出一行，形如：“Bye!学号 姓名”。
// print函数要求在一行中输出学生信息，形如：“学号 姓名”。
// 注：学号和姓名之间用一个空格分开。

// 裁判测试程序样例：

// #include <iostream>
// #include <cstring>
// using namespace std;

// int main()
// {
//     Student stu_array[3]={Student(1,"Zhang"),Student(2,"Wang")};
//     return 0;
// }

// /* 请在这里填写答案 */
/////////////////////////////////////
Student::Student(int id,char *name)
 {
 	m_id=id;
 	strcpy(m_name,name);
 	cout<<"Hi!"<<m_id<<" "<<m_name<<endl;
 }
 
 Student::~Student()
 {
 	cout<<"Bye!"<<m_id<<" "<<m_name<<endl;
 } 
 void Student::print()
 {
 	cout<<m_id<<" "<<m_name<<endl;
 }
