//
// Created by Administrator on 2022/3/6.
//

#include "string.h"

int main()
{
//    ////字符串指针
//    char *str = "I love Coding";
//    int len = strlen(str);
//    ////new动态创建空间
//    char *newstr = new char[20]; //分配空间大小
//    strcpy(newstr,str);
//    ////delete动态删除空间
//    delete newstr; //释放空间
//
//    int *p = new int[10];
//    delete p;

    int *p = new int[10]; //动态创建一个数组,大小为10
    int *r = new int(10); //动态创建一个变量，值为10

    delete [] p; //delete动态删除数组
    delete r; //delete动态删除变量

}