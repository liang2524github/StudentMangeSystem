/*
        刷新学生信息
*/
#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include "variable.h"
void flush()
{
	int i,k=0;//k代表刷新过程中学生人数 
	FILE *fp;
	char filename[LEN+1];
	printf("请输入需要刷新的文件名：\n");
	getchar(); 
	gets(filename);
	if((fp=fopen(filename,"r"))==NULL)//打开文件 
	{
		printf("打开文件失败！\n");
		exit(0);
	}
	for(i=0;i<N;i++)//N是最大的学生人数，可在程序开头进行更改 
	{
		if(fread(&stu[i],sizeof(struct student),1,fp)==1)
		k++;//记录学生人数 
	}	
	n=k;// 把k的值给n 
	if(k==0)
	printf("刷新失败！！！\n");
	else
	printf("刷新成功！！！\n"); 
	fclose(fp);
	system("pause");
	
}
