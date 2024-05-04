/*
        修改学生信息
*/
#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include "variable.h"
void modify()
{
	int i,flag;
	char ID[LEN],name[LEN],sex;
	int age;
	float score;//以上命名顾名思义，不作解释
	printf("请输入需要修改的学生姓名：\n");
	getchar();
	gets(name);
	
	while(1)
	{	
		flag=0;
		for(i=0;i<n;i++)
		{
			if(strcmp(name,stu[i].Stuname)==0)
			{
				flag=1;
				int num;//用于switch函数的子菜单 
				printf("***************************************************\n");
				printf("*----1.修改学号--------  -  -----2.修改性别-------*\n");
				printf("*----3.修改年龄--------  -  -----4.修改C语言成绩--*\n");
				printf("*----5.修改高数成绩----  -  -----6.修改英语成绩---*\n");
				printf("*-------------------7.退出本菜单------------------*\n");
				printf("***************************************************\n\n");
				printf("请输入子菜单：");
				scanf("%d",&num);
				switch(num)
				{
					case 1:	
					printf("请输入新的学号:\n");
					getchar();
					gets(ID);
					strcpy(stu[i].StuID,ID);break;
					case 2:
					getchar();	
					printf("请输入新的性别:\n");
					scanf("%c",&sex);
					stu[i].Stusex=sex;break;
					case 3:
					printf("请输入新的年龄:\n");
					scanf("%d",&age);
					stu[i].Stuage=age;break;
					case 4:
					printf("请输入新的C语言成绩:\n");
					scanf("%f",&score);
					stu[i].score[0]=score;break;
					case 5:
					printf("请输入新的高数成绩:\n");
					scanf("%f",&score);
					stu[i].score[1]=score;break;
					case 6:
					printf("请输入新的英语成绩:\n");
					scanf("%f",&score);
					stu[i].score[2]=score;break;
					case 7:
					return;break; 
					default:
					printf("请在1--7之间选择！\n");
				}
				if(num>0&&num<7)
				printf("修改成功，记得保存哟！！！\n");
				break;//找到学生，结束循环;	
			}
		}	
		if(flag==0)
		{
			printf("没有找到该学生，请重新输入需要修改信息的学生姓名：\n");
			gets(name);
		}
	}
	system("pause");	
}
