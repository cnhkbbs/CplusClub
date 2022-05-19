// 本题已给出时钟类及其成员函数实现，要求补充完整运算符++重载函数（前置和后置），使之能够实现时钟对象自增1秒。

// 时钟类定义如下：
// class Clock {
//     public:
//         Clock(int NewH=0, int NewM=0, int NewS=0);
//         void ShowTime();
//         friend Clock operator++(Clock& op);         //前置单目运算符重载
//         friend Clock operator++(Clock& op,int);     //后置单目运算符重载
//     private:
//         int Hour, Minute, Second;
// };
// 裁判测试程序样例：
// #include<iostream>
// using namespace std;

// class Clock {
//     public:
//         Clock(int NewH=0, int NewM=0, int NewS=0);
//         void ShowTime();
//         friend Clock operator++(Clock& op);         //前置单目运算符重载
//         friend Clock operator++(Clock& op,int);     //后置单目运算符重载
//     private:
//         int Hour, Minute, Second;
// };

// Clock::Clock(int NewH, int NewM, int NewS) {
//     Hour=NewH;
//     Minute=NewM;
//     Second=NewS;
// }
// void Clock::ShowTime() {
//     cout<<Hour<<":"<<Minute<<":"<<Second<<endl;
// }

// /*---------请在这里填写答案-----------*/

// int main() {
//     int h, m, s;
//     cin>>h>>m>>s;
//     Clock a(h,m,s);

//     (++a).ShowTime();
//     (a++).ShowTime();
//     a.ShowTime();

//     return 0;
// }
// 输入样例：
// 在这里给出一组输入。例如：

// 10 10 10
// 输出样例：
// 在这里给出相应的输出。例如：

// 10:10:11
// 10:10:11
// 10:10:12
///////////////////////////////////////////////////
Clock operator++(Clock& op) {
	op.Second++;
	while (1) {
		if (op.Second >= 60) {
			op.Second -= 60;
			op.Minute += 1;
		} else {
			break;
		}
	}
	while (1) {
		if (op.Minute >= 60) {
			op.Minute -= 60;
			op.Hour += 1;
		} else {
			break;
		}
	}
	if (op.Hour > 23) {
		op.Hour = 0;
	}
	return op;
}
Clock operator++(Clock& op, int) {
	Clock t(op.Hour, op.Minute, op.Second);
	op.Second++;
	while (1) {
		if (op.Second >= 60) {
			op.Second -= 60;
			op.Minute += 1;
		} else {
			break;
		}
	}
	while (1) {
		if (op.Minute >= 60) {
			op.Minute -= 60;
			op.Hour += 1;
		} else {
			break;
		}
	}
	if (op.Hour > 23) {
		op.Hour = 0;
	}
	return t;
}
