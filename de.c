/*
            删除学生信息
*/

#include <stdio.h>
#include"variable.h"
#include<string.h>
#include <stdlib.h>
void de()
{
	int i,j,flag;
	char s1[LEN];
	printf("请输入需要删除的学生学号：\n");
	scanf("%s",s1);
	flag=0;
	for(i=0;i<n;i++)
	{
		if(strcmp(s1,stu[i].StuID)==0)
		{
			flag=1;
			for(j=i;j<n-1;j++)
			{
				stu[j]=stu[j+1];//直接把后面的学生都往前移动一位 
			}
		}
		if(flag==1) break;//说明已经找到了需要删除的学生，结束循环 
	} 
	 if(0==flag)
	 {
	 	printf("该学号不存在！！！\n");
	 }
	
	if(1==flag)
	{	
		printf("删除成功\n");
		n--;		
	}
	system("pause");
}
