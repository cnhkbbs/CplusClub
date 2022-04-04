// 某商店开展买一送一活动，购买两件商品时，只需支付价格较高的商品的金额。要求程序在输入两个商品的价格后，输出所应支付的金额，请根据裁判程序编写函数cut，将代码补充完整。

// 裁判测试程序样例：
// #include <iostream>
// using namespace std;
// //请在此处添加代码
// int main(){
//     float a,b;
//     cin>>a>>b;
//     cut(a,b)=0;
//     cout<<"to pay:"<<a+b<<endl;    
//     return 0;
// }
// 输入样例：
// 在这里给出一组输入。例如：

// 239 180
// 输出样例：
// 在这里给出相应的输出。例如：

// 239

float &cut(float &c,float &d)
{
	if(c>d){
		if(c>d){
			return c;
		}else{
			return d;
		}
	}	
}
