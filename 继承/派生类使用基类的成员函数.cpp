// 按要求完成下面的程序：

// 1、定义一个Animal类，成员包括：

// （1）整数类型的私有数据成员m_nWeightBase，表示Animal的体重；

// （2）整数类型的保护数据成员m_nAgeBase，表示Animal的年龄；

// （3）公有函数成员set_weight，用指定形参初始化数据成员nWeightBase；

// （4）公有成员函数get_weight，返回数据成员nWeightBase的值；

// （5）公有函数成员set_age，用指定形参初始化数据成员m_nAgeBase；

// 2、定义一个Cat类，公有继承自Animal类，其成员包括：

// （1）string类型的私有数据成员m_strName;

// （2）带参数的构造函数，用指定形参对私有数据成员进行初始化；

// （3）公有的成员函数print_age，功能是首先输出成员m_strName的值，然后输出“, age = ”，接着输出基类的数据成员m_nAgeBase的值。具体输出格式参见main函数和样例输出。

// 类和函数接口定义：
// 参见题目描述。
// 裁判测试程序样例：
// #include <iostream>
// #include <string>
// using namespace std;

// /* 请在这里填写答案 */

// int main()
// {
//     Cat cat("Persian");   //定义派生类对象cat
//     cat.set_age(5);       //派生类对象调用从基类继承的公有成员函数
//     cat.set_weight(6);    //派生类对象调用从基类继承的公有成员函数
//     cat.print_age();      //派生类对象调用自己的公有函数
//     cout << "cat weight = " << cat.get_weight() << endl;
//     return 0;
// }
// 输入样例：
// 本题无输入。

// 输出样例：
// Persian, age = 5
// cat weight = 6
///////////////////////////////////////////////////
class Animal {
	private:
		int m_nWeightBase;
	protected:
		int m_nAgeBase;
	public:
	void set_weight(int m_nWeightBase)
	{
		this->m_nWeightBase=m_nWeightBase; 
	}
	int get_weight(void)
	{
		return m_nWeightBase;
	}
	void set_age(int m_nAgeBase)
	{
		this->m_nAgeBase=m_nAgeBase;
	}
};

class Cat: public Animal{
	private:
		string m_strName;
	public:
		Cat(string name){
			m_strName=name;
		}
		void print_age()
		{
			cout<<m_strName<<", age = "<<m_nAgeBase<<endl;
		}
};
