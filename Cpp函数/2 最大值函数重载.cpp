// 编写重载函数myMax可分别求取两个整数，三个整数，两个双精度数的最大值。

// 函数接口定义：

// 裁判测试程序样例：

// /* 请在这里填写答案 */

// int main(){
//     cout<<myMax(3,4)<<endl;
//     cout<<myMax(3,4,5)<<endl;
//     cout<<myMax(4.3,3.4)<<endl;
// }
// 输入样例：
// 无

// 输出样例：
// 在这里给出相应的输出。例如：

// 4
// 5
// 4.3

int myMax(int x, int y) {
	if (x > y) {
		return x;
	} else {
		return y;
	}
}

int myMax(int x, int y, int z) {
	int max;
	if (x > y) {
		max = x;
	} else {
		max = y;
	}
	if (z > max) {
		max = z;
	}
	return max;
}

double myMax(double x, double y) {
	if (x > y) {
		return x;
	} else {
		return y;
	}
}
