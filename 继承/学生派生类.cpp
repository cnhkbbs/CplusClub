// 根据所给的类Student定义其派生类，并利用构造函数进行数据初始化，使程序能按照"样例"的格式进行输出

// 类定义：
// #include <iostream>
// #include<string>
// using namespace std;

// class Student                             
//  {public:                                
//    Student(int n,string nam,char s )      
//     {num=n;
//      name=nam;
//      sex=s; }
//    ~Student( ) { }
//   protected:                               
//     int num;
//     string name;
//     char sex ;                           
// };

// /* 请在这里添加派生类定义 */
// 裁判测试程序样例：
// int main( )
//  {Student1 stud1(10010,"Wang-li",'f',19,"115 Beijing Road,Shanghai");
//   Student1 stud2(10011,"Zhang-fun",'m',21,"213 Shanghai Road,Beijing");
//   stud1.show( );           
//   stud2.show( );            
//   return 0;
// }
// 输出样例：
// num: 10010
// name: Wang-li
// sex: f
// age: 19
// address: 115 Beijing Road,Shanghai

// num: 10011
// name: Zhang-fun
// sex: m
// age: 21
// address: 213 Shanghai Road,Beijing
//////////////////////////////////////////////
class Student1: public Student{
	private:
		int age;
		string adress;
	public:
		Student1(int n,string nam,char s,int age,string adress): Student(n,nam,s){
			this->age=age;
			this->adress=adress;
		}
		void show(){
			cout<<"num: "<<num<<"\n"<<"name: "<<name<<"\n"<<"sex: "<<sex<<"\n"<<"age: "<<age<<"\n"<<"address: "<<adress<<"\n\n";
		}
};
