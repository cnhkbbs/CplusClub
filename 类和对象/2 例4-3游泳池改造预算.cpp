// 例4-3一圆形游泳池如图所示，现在需在其周围建一圆形过道，并在其四周围上栅栏。栅栏价格为35元/米，过道造价为20元/平方米。过道宽度为3米，游泳池半径由键盘输入。要求编程计算并输出过道和栅栏的造价。

// https://images.ptausercontent.com/5d97d9b4-89d1-47c0-9005-a326f53eeee2.png

// 输入格式:
// 输入一个整数或小数。

// 输出格式:
// 分两行输出：在第一行中输出栅栏的造价。在第二行输出过道的造价。

// 输入样例:
// 10
// 输出样例:
// Fencing Cost is $2858.85
// Concrete Cost is $4335.4
////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;
class pool {
	public:
		pool(float r) {
			rr = r;
		}
		float Fencing() {
			return 2 * (rr + 3) * 3.1415926535 * 35;
		}
		float Concrete() {
			return (3.1415926535 * (rr + 3) * (rr + 3) - 3.1415926535 * rr * rr) * 20;
		}
	private:
		float rr;
};
int main() {
	float n;
	cin >> n;
	pool a(n);
	cout << "Fencing Cost is $" << a.Fencing() << endl;
	cout << "Concrete Cost is $" << a.Concrete() << endl;
}
