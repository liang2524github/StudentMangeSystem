/*
		查询学生信息
*/
#include<stdio.h>
#include <string.h>
#include"seek.h"
#include "variable.h"


void seek()
{
	int i,num,flag;
	char s1[LEN+1];
	printf("*****************************\n");
	printf("**-------1.按学号查询------**\n");
	printf("**-------2.按姓名查询------**\n");
	printf("**-------3.退出本菜单------**\n");
	printf("*****************************\n");
	while(1)
	{
		flag=0;
		printf("请输入子菜单：");
		scanf("%d",&num);
		switch(num)
		{
			case 1:
			printf("请输入需要查找学生的学号：\n");
			scanf("%s",s1);
			for(i=0;i<n;i++)
			{
				if(strcmp(stu[i].StuID,s1)==0)
				{
					flag=1;
					printf("学号\t\t姓名\t\t性别\t\t年龄\t\tC语言\t\t高数\t\t英语\n");
					printf("%s\t\t%s\t\t%c\t\t%d\t\t%.2f\t\t%.2f\t\t%.2f\n",stu[i].StuID,stu[i].Stuname,stu[i].Stusex,stu[i].Stuage,stu[i].score[0],stu[i].score[1],stu[i].score[2]);
				}	
			}break;	
			case 2:
			printf("请输入需要查找学生的姓名：\n");
			scanf("%s",s1);
			for(i=0;i<n;i++)
			{
				if(strcmp(stu[i].Stuname,s1)==0)
				{
					flag=1;
					printf("学号\t\t姓名\t\t性别\t\t年龄\t\tC语言\t\t高数\t\t英语\n");
					printf("%s\t\t%s\t\t%c\t\t%d\t\t%.2f\t\t%.2f\t\t%.2f\n",stu[i].StuID,stu[i].Stuname,stu[i].Stusex,stu[i].Stuage,stu[i].score[0],stu[i].score[1],stu[i].score[2]);
				}	
			}break;		
			case 3: return;
			default: printf("请在1--3之间输入\n");
		}
		if(flag==0)
		printf("找不到该学生!\n请重新输入！"); 
	} 
} 
