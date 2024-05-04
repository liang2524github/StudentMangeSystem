/*
        退出系统
*/
#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include "variable.h"
void tuichu()
{
	int h;//控制是否确认退出 
	printf("即将退出，确认请按1，取消请按0\n"); 
	scanf("%d",&h);
	if(h==1)
	{
		t=0;//t是main函数中while函数是否继续执行的控制条件，是一个全局变量，程序开头已经定义并且赋值位 1
		printf("成功退出，感谢使用！\n");	
	}
		if(h==0)
	{
		printf("退出已取消！\n");
		system("pause");	
	}
		
}
