//
// Created by Administrator on 2022/3/10.
//
#include <string.h>

struct Student
{
    char name[20];
    double score;
};

int main()
{
    Student a;
    strcpy(a.name,"Eva");
    a.score = 100;

}