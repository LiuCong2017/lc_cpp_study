//
// Created by Administrator on 2022/3/10.
//
#include <string.h>

struct Student
{
    char name[20];
    char gender;
    double score;
};

int main()
{
    Student a;
    strcpy(a.name,"Eva");
    a.gender = 'M';
    a.score = 100;

}