// 本题要求实现一个日期类定义，根据所定义的类可以完成相关的类测试。

// Date类定义：
// 根据Date被使用的情况，进行Date类定义，要求通过构造函数进行日期初始化，并通过display（）函数进行日期格式显示，显示格式为"月/日/年"

// 测试程序样例：
// main( ) 函数定义如下

// int main()
// {
//  Date d1(3,25,2019);
//  Date d2(3,30);
//  Date d3(10);
//  Date d4;
//  d1.display();
//  d2.display();
//  d3.display();
//  d4.display();
//  return 0;
//  }

// /* 请在这里填写答案 */
// 输出样例：
// 在这里给出相应的输出。例如：

// 3/25/2019
// 3/30/2019
// 10/1/2019
// 1/1/2019
////////////////////////////////////////
#include<iostream>
using namespace std;
class Date {
	public:
		Date(int mm = 1, int dd = 1, int yyyy = 2019) {
			MM = mm;
			DD = dd;
			YYYY = yyyy;
		}
		void display() {
			cout << MM << "/" << DD << "/" << YYYY << endl;
		}
	private:
		int DD, MM, YYYY;
};
