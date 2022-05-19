// 设计一个时间类，用来保存时、分、秒等私有数据成员，通过重载操作符“+”实现2个时间的相加。要求：
// （1）小时的时间范围限制在大于等于0；（2）分的时间范围为0~59分；（3）秒的时间范围为0~59秒。

// #include <iostream>
// using namespace std;
// class Time {
// private:
//  int hours,minutes, seconds;
// public:
//  Time(int h=0, int m=0, int s=0);
//  Time operator + (Time &);
//  void DispTime();
// };

// /* 请在这里填写答案 */

// int main() {
//  Time tm1(8,75,50),tm2(0,6,16), tm3;
//  tm3=tm1+tm2;
//  tm3.DispTime();
//  return 0;
// }
// 输出：
// 在这里给出相应的输出。例如：

// 9h:22m:6s
/////////////////////////////////////////////
Time::Time(int h, int m, int s)
{
	hours=h;
	minutes=m;
	seconds=s;
}
Time Time::operator+ (Time &a)
{
	if((a.seconds+seconds)>=60){
		minutes+=1;
		seconds-=60;
	}
	if((a.minutes+minutes)>=60){
		hours+=1;
		minutes-=60;
	}
	Time t(hours+a.hours,minutes+a.minutes,seconds+a.seconds);
	return t; 
}
void Time::DispTime()
{
	cout<<hours<<"h:"<<minutes<<"m:"<<seconds<<"s"<<endl;
}
