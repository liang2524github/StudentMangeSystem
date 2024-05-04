/*
        显示当前信息
*/


#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include "variable.h"
void present()
{
	int i;
	
	if(n==0)
	{
		printf("您好，现在没有学生信息，请先增加学生信息或者刷新再来试试!\n");
	}
	else
	{
		printf("现在共有%d名学生：\n",n);
		printf("学号\t\t姓名\t\t性别\t\t年龄\t\tC语言\t\t高数\t\t英语\n");
		for(i=0;i<n;i++)
		{
			printf("%s\t\t%s\t\t%c\t\t%d\t\t%.2f\t\t%.2f\t\t%.2f\n",stu[i].StuID,stu[i].Stuname,stu[i].Stusex,stu[i].Stuage,stu[i].score[0],stu[i].score[1],stu[i].score[2]);	
		}
	}
		
	system("pause");	
}
