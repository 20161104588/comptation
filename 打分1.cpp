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
	char type;//���� 
	int phone;//�绰 
	int Class;//�༶
};
struct teacher
{
	char sex;
	char name[10];
    int phone;//�绰 
};
void input()//���� 
{ 
    int r,i,p,j;
    ofstream fout("data.csv");     
	printf("���������ѡ�ָ���:");

	cin>>r; 	
	printf("���������ѡ�ָ�����Ϣ:\n");
	for(i=0; i<=r; i++)
	{
	      cin>>student.sex>>student.name>>student.type>>student.phone>>student.Class>>endl; 
        fout <<student.sex << "," << student.name << "," <<student.type<< ","<<student.phon<<","<<student.Class<<endl;  //��������ֵд���ļ�
	}
	printf("��������ί����:");
	cin>>p-1; 
	
	printf("��������ί������Ϣ:\n");
	for(i=0; i<=j; i++)
	{
	      cin>>teacher.sex>>teacher.name>>teacher.phone>>endl;    
        fout <<teacher.sex << "," << teacher.name << "," <<teacher.phone<<endl;  //��������ֵд���ļ�
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
    cout<<"��ߵ÷֣�"<<top[5]<<endl;
    cout<<"��͵÷֣�"<<top[0]<<endl;
    printf("�÷��ǣ�%.2lf\n",m);
    return 0;
}
 
