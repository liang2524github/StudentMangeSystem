
/*
    1使用帮助               2增加学生信息
    3查询学生信息           4删除学生信息
    5保存当前信息           6显示当前信息
    7修改学生信息           8刷新学生信息
    9退出系统
*/

#include<stdio.h>
#include <stdlib.h>

#include "variable.h"
#include "menu.h"
#include"help.h"
#include "increase.h"
#include "seek.h"
#include "de.h"
#include "save.h"
#include "present.h"
#include "modify.h"
#include "flush.h"
#include "tuichu.h"

int main()
{
    
    
	int num;//num是菜单选项
    while(t)
    {
        menu();//目录
         
        printf("您好，请输入菜单编号：");
        scanf("%d",&num);   //输入口

        switch(num)   //选择
        {
            case 1: help();break;//帮助
            case 2: increase();break;//增加学生信息
            case 3: seek(); break;//查询学生信息
            case 4: de(); break;//删除
            case 5: save(); break;//保存
            case 6: present(); break;//显示
            case 7: modify(); break;//修改
            case 8: flush(); break; //刷新
            case 9: tuichu(); break;//退出
            default:printf("输入有误，请重新输入！");
            break;
        }
    }
    system("pause");
}