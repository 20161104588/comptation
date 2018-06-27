#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include <fstream> 
using namespace std;
struct student
{
	char sex;
	char name[10];
	char type;//类型 
	int phone;//电话 
	int Class;//班级
};
struct teacher
{
	char sex;
	char name[10];
    int phone;//电话 
};
void input()//输入 
{ 
    int r,i,p,j;
    ofstream fout("data.csv");     
	printf("请输入比赛选手个数:");

	cin>>r; 	
	printf("请输入比赛选手各项信息:\n");
	for(i=0; i<=r; i++)
	{
	      cin>>student.sex>>student.name>>student.type>>student.phone>>student.Class>>endl; 
        fout <<student.sex << "," << student.name << "," <<student.type<< ","<<student.phon<<","<<student.Class<<endl;  //将变量的值写入文件
	}
	printf("请输入评委个数:");
	cin>>p-1; 
	
	printf("请输入评委各项信息:\n");
	for(i=0; i<=j; i++)
	{
	      cin>>teacher.sex>>teacher.name>>teacher.phone>>endl;    
        fout <<teacher.sex << "," << teacher.name << "," <<teacher.phone<<endl;  //将变量的值写入文件
	}
	     fout.close();
}
int main()
{
	
    int i,s;
    double m=0;
    s=input();
    vector<double> top(7);
    for(i=0;i<top.size();i++)
        cin>>top[i];
    sort(top.begin(),top.end());
    for(i=2;i<=4;i++)
        m+=top[i];
    m=m/3;
    cout<<"最高得分："<<top[5]<<endl;
    cout<<"最低得分："<<top[0]<<endl;
    printf("得分是：%.2lf\n",m);
    return 0;
}
 
