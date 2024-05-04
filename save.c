/*
        保存当前信息
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include"variable.h"
void save()//把学生信息保存到文件 
{
	int i;
	FILE *fp;
	char filename[LEN+1];
	printf("请输入要保存的文件名：\n"); 	
	scanf("%s",filename);
	if((fp=fopen(filename,"w"))==NULL)
	{
		printf("打开文件失败！\n");
		exit(0);	
	}
	for(i=0;i<n;i++)
	if(fwrite(&stu[i],sizeof(struct student),1,fp)!=1)
	printf("保存失败！！\n");
	printf("保存成功！！！\n");
	fclose(fp);
	system("pause");
}
