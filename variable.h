#ifndef VAR 

#define VAR
#define LEN 15  //姓名、学号等最大程度
#define N 10//N是学生人数
int n,t;    //学生库容量
struct student            //结构体类型
{
	char StuID[LEN];//学生学号 StuID[]
	char Stuname[LEN];
	int Stuage;
	char Stusex;
	float score[3]; //三科成绩 
}stu[N];//N是学生人数


#endif
