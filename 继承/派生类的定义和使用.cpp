// 按要求完成下面的程序：

// 1、定义一个Animal类，包含一个void类型的无参的speak方法，输出“animal language!”。

// 2、定义一个Cat类，公有继承自Animal类，其成员包括：

// （1）私有string类型的成员m_strName;

// （2）带参数的构造函数，用指定形参对私有数据成员进行初始化；

// （3）公有的成员函数print_name，无形参，void类型，功能是输出成员m_strName的值，具体输出格式参见main函数和样例输出。

// 类和函数接口定义：
// 参见题目描述。
// 裁判测试程序样例：
// #include <iostream>
// #include <string>
// using namespace std;

// /* 请在这里填写答案 */

// int main()
// {
//     Cat cat("Persian"); //定义派生类对象
//     cat.print_name();    //派生类对象使用本类成员函数
//     cat.speak();    //派生类对象使用基类成员函数
//     return 0;
// }
// 输入样例：
// 本题无输入。

// 输出样例：
// cat name: Persian
// animal language!
////////////////////////////////////////
class Animal{
	public:
		void speak(){
			cout<<"animal language!"; 
		}
};

class Cat: public Animal{
	private:
		string m_strName;
	public:
		Cat(string m_strName)
		{
			this->m_strName=m_strName;
		}
		void print_name()
		{
			cout<<"cat name: "<<m_strName<<endl;
		}
};
