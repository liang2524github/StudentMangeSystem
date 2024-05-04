/*
			增加学生信息
*/



#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "increase.h"
#include "variable.h"

void increase()
{
	int i=n,j,flag,m=0;//i代表增加学生信息过程中任意时刻的学生人数        i=n
     //数组：学号排列
	printf("\n请输入待增加的学生人数：\n");                            //T
	scanf("%d",&m);                                                 //输入增加的学生数量
	if(m>0){                                                        //增加数量肯定大于0
	do
    {             
		flag=1;
		while(flag)
		{
			flag=0;
			printf("请输入第%d位学生的学号：\n",i+1);//第几位学生从1开始计数,而stu[]从零开始，需要加1 
			scanf("%s",stu[i].StuID);
			//判断学号是否重复
			for(j=0;j<i;j++){
				if(strcmp(stu[i].StuID,stu[j].StuID)==0){        //strcmp(a,b)==0
					printf("该学号已经存在，请重新输入！\n");	
					flag=1;
					break;			
				}	 
			}
		}
		printf("请输入第%d位学生姓名:\n",i+1);
		scanf("%s",stu[i].Stuname); 
		printf("请输入第%d位学生年龄:\n",i+1);
		scanf("%d",&stu[i].Stuage); 
		getchar();//处理上面输入的换行符，不然系统会把换行符当做一个字符赋值给性别 
		printf("请输入第%d位学生性别:\n",i+1);	
		scanf("%c",&stu[i].Stusex);
		printf("请输入第%d位学生的C语言成绩:\n",i+1);
		scanf("%f",&stu[i].score[0]);
		printf("请输入第%d位学生的高数成绩:\n",i+1);
		scanf("%f",&stu[i].score[1]);
		printf("请输入第%d位学生的大学英语成绩:\n",i+1);
		scanf("%f",&stu[i].score[2]);
		i++;
	}while(i<n+m);//只要当前学生人数还没到达添加后的总人数，就得继续添加		
	}
	n+=m;// 添加完成，系统人数n的值也要增加 
	printf("添加完成！！！\n");
	system("pause");
} 
