/*
学生结构体数组管理10名学生的信息，分别是学号、姓名、3门课的成绩(double型)，从键盘输入10名学生的全部信息，打印出总的平均成绩与最高分学生信息

输入格式:
依次输入10名学生的信息，包括学号char num[6]、姓名char name[8]、三门课分数 double score[3]

输出格式:
输出10名学生总的平均成绩，与3门课程总成绩最高的学生分数，所有成绩输出保留小数点后2位小数

输入样例:
在这里给出一组输入。例如：

101 wang 93 89 87
102 li 86 80 78
103 zhao 76 40 98
104 ma 77 70 84
105 han 70 67 60
106 zhang 99 97 95
107 zhou 88 89 88
108 chen 87 88 85
109 yang 72 70 69
110 liu 78 80 83
输出样例:
在这里给出相应的输出。例如：

80.77
106 zhang 99.00 97.00 95.00
*/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	struct{                 //定义用于存储学生信息的结构体数组
		char num[6];
		char name[8];
		double score[3];
		double sum=0;
	}stu[10];
	
	double sumall=0,max=-100,ave;
	
	int i,t;
	for(i=0;i<10;i++){
		cin>>stu[i].num>>stu[i].name>>stu[i].score[0]>>stu[i].score[1]>>stu[i].score[2];    //获得学生信息
		stu[i].sum=stu[i].score[0]+stu[i].score[1]+stu[i].score[2];              //求单个学生的成绩和
		sumall+=stu[i].sum;          //求所有学生的成绩总和
		if(stu[i].sum>max){        //遍历法获得单个学生最高分的序号
			max=stu[i].sum;
			t=i;
		}
	}
  
	ave=sumall/30;  //计算总体成绩平均值
	cout<<fixed<<setprecision(2)<<ave<<endl;   //输出平均值
	cout<<stu[t].num<<" "<<stu[t].name<<" "<<fixed<<setprecision(2)<<stu[t].score[0]<<" "<<fixed<<setprecision(2)<<stu[t].score[1]<<" "<<fixed<<setprecision(2)<<stu[t].score[2]<<endl;   //输出单个学生成绩最高者的信息
	return 0;
}
