/*
9 学生信息管理

成绩: 5 / 折扣: 1
从键盘输入一个学生的姓名、学号、三门课成绩，输出其姓名与三门课平均成绩。
预设代码

前置代码

view plainprint?
#include <stdio.h>  
struct STUSCORE {  
    char    strName[12];            // 姓名  
    char    strStuNO[9];            // 学号  
    float   fScore[3];          // 三门课程成绩  
};  
int main()  
{  
    struct STUSCORE one;//定义一个学生结构体变量  
        scanf("%s%s%f%f%f",one.strName,one.strStuNO,&one.fScore[0],&one.fScore[1],&one.fScore[2]);//输入姓名学号与三门课成绩  
*/

#include <stdio.h>  
struct STUSCORE {  
    char    strName[12];            // 姓名  
    char    strStuNO[9];            // 学号  
    float   fScore[3];          // 三门课程成绩  
};  
int main()  
{  
    struct STUSCORE one;//定义一个学生结构体变量  
        scanf("%s%s%f%f%f",one.strName,one.strStuNO,&one.fScore[0],&one.fScore[1],&one.fScore[2]);//输入姓名学号与三门课成绩  
        printf("%s的平均成绩为%.2f\n" ,one.strName,(one.fScore[0] +one.fScore[1] +one.fScore[2])/3);
}