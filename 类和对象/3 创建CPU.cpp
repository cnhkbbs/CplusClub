// 定义一个CPU类，包含等级（Rank）、频率（frequency）、电压(voltage)等属性。其中，rank为枚举类型CPU__Rank,定义为enum CPU_Rank{P1=1,P2,P3,P4,P5,P6,P7},frequency为单位是MHz的整型数，voltage为浮点型的电压值。

// 函数接口定义：
// 根据题目要求写出类。
// 裁判测试程序样例：

// /* 请在这里填写答案 */


// int main()
// {
//     CPU a(P6,3,300); 
    
//     cout<<"cpu a's parameter"<<endl;
//     a.showinfo(); //显示性能参数

//     CPU b; 
//     cout<<"cpu b's parameter"<<endl;
//     b.showinfo(); //显示性能参数

//     CPU c(a); 
//     cout<<"cpu c's parameter"<<endl;
//     c.showinfo(); //显示性能参数
// }

// 输入样例：
// 无

// 输出样例：
// create a CPU!
// cpu a's parameter
// rank:6
// frequency:3
// voltage:300
// create a CPU!
// cpu b's parameter
// rank:1
// frequency:2
// voltage:100
// copy create a CPU!
// cpu c's parameter
// rank:6
// frequency:3
// voltage:300
// destruct a CPU!
// destruct a CPU!
// destruct a CPU!
////////////////////////////////////////////////////
#include<iostream>
using namespace std;
enum CPU_Rank {P1 = 1, P2, P3, P4, P5, P6, P7};
class CPU {
	public:
		CPU(CPU_Rank rank = P1, int frequency = 2, float voltage = 100) { //构造函数
			cout << "create a CPU!" << endl;
			Rank = rank;
			Frequency = frequency;
			Voltage = voltage;
		}

		void showinfo() { //成员函数
			cout << "rank:" << Rank << endl;
			cout << "frequency:" << Frequency << endl;
			cout << "voltage:" << Voltage << endl;
		}
		CPU(CPU &a) { //拷贝构造函数
			cout << "copy create a CPU!" << endl;
			Rank = a.Rank;
			Frequency = a.Frequency;
			Voltage = a.Voltage;
		}
		~CPU() { //析构函数
			cout << "destruct a CPU!" << endl;
		}
	private:
		CPU_Rank Rank;
		int Frequency;
		float Voltage;
};
