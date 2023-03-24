/*
10 求最高成绩

成绩: 5 / 折扣: 1
从键盘输入15名同学的姓名、成绩读入到结构体数组中,输出最高成绩的同学(要求成绩保留2位小数)。要求定义如下结构体类型：

struct student
{
char name[20];
float mathScore;
};
*/
#include <stdio.h>  
struct student
{
char name[20];
float mathScore;
};
int main()  
{  
    struct student;
        scanf("%s%s%f%f%f",one.strName,one.strStuNO,&one.fScore[0],&one.fScore[1],&one.fScore[2]);//输入姓名学号与三门课成绩  
        printf("%s的平均成绩为%.2f\n" ,one.strName,(one.fScore[0] +one.fScore[1] +one.fScore[2])/3);
}