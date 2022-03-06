/*试题 A: 美丽的 2
本题总分：5 分
【问题描述】
小蓝特别喜欢 2，今年是公元 2020 年，他特别高兴。
他很好奇，在公元 1 年到公元 2020 年（包含）中，有多少个年份的数位中
包含数字 2？
【答案提交】
这是一道结果填空的题，你只需要算出结果后提交即可。本题的结果为一
个整数，在提交答案时只填写这个整数，填写多余的内容将无法得分。*/
#include<iostream>
using namespace std;
int main()
{
	int n,j,t,m,flag,count=0;
	for(n=1;n<=2020;){
		flag=0;
		t=n;
		int num[4]={0};
			for(j=0;j<4;j++){
				num[j]=t%10;
				t=t/10;
				if(t==0){
				break;
				}
			}
			for(m=0;m<j;m++){
				if(num[m]==2){
				flag=1;
				break;	
				}
			}
		if(flag){
			count++;
		}
		n++;
	}
	cout <<count<<endl;
}
