//
//  main.c
//  command
//
//  Created by 高旭 on 2017/9/24.
//  Copyright © 2017年 高旭. All rights reserved.
//

#include <stdio.h>
#include<string.h>
#include <stdlib.h>
void hello();
void help();
void add();
void sub();
void mul();
void divi();
void cmp();
void squ();
void max();
void quit();
int main(int argc, const char * argv[])
{
    // insert code here...
    int i;
    char command[10];
    char* cmd[]={"hello","help","add","sub","mul","divi","cmp","squ","max","quit"};
    printf("Please input your command:");
    scanf("%s",command);
    for(i=0;i<10;i++)
    {
        if(strcmp(command,cmd[i]) == 0)
        {
            break;
        }
    }
    switch(i)
    {
        case 0:
            hello();
            break;
        case 1:
            help();
            break;
        case 2:
            add();
            break;
        case 3:
            sub();
            break;
        case 4:
            mul();
            break;
        case 5:
            divi();
            break;
        case 6:
            cmp();
            break;
        case 7:
            squ();
            break;
        case 8:
            max();
            break;
        case 9:
            quit();
            break;
        default:
            printf("Wrong Command!\n");
            break;
    }
    return 0;
}
void hello()
{
    printf("hello,my name is sakura.\n");
    printf("welcome to my command program!\n");
}
void help()
{
    printf("hello   return a welcome page\n");
    printf("add     return the summation of the numbers which you input\n");
    printf("sub     return the difference of the numbers which you input\n");
    printf("mul     return the product of the numbers which you input\n");
    printf("divi    return the quotient of the numbers which you input\n");
    printf("cmp     return the comparison of the numbers which you input\n");
    printf("squ    return the square of the number which you input\n");
    printf("max     return the maximum of the numbers which you input\n");
    printf("quit    exit the program\n");
}
void add()
{
    double num1,num2,add;
    printf("算术加法，please input two numbers:\n");
    scanf("%lf %lf",&num1, &num2);
    add=num1+num2;
    printf("%lf+%lf=%lf\n",num1, num2, add);
}
void sub()
{
    double num1,num2,sub;
    printf("算术减法，please input two numbers:\n");
    scanf("%lf %lf",&num1, &num2);
    sub=num1-num2;
    printf("%lf-%lf=%lf\n",num1, num2, sub);
}
void mul()
{
    double num1,num2,mul;
    printf("算术乘法，please input two numbers:\n");
    scanf("%lf %lf",&num1, &num2);
    mul=num1*num2;
    printf("%lf*%lf=%lf\n",num1, num2, mul);
}
void divi()
{
    double num1,num2,div;
    printf("算术除法，please input two numbers:\n");
    scanf("%lf %lf",&num1, &num2);
    if (num2 == 0)
    {
        printf("Error:divisor can not be zero!\n");
    }
    else
    {
        div = num1 / num2;
        printf("%lf / %lf = %lf\n",num1, num2, div);
    }
}

void cmp()
{
    double num1,num2;
    printf("算术比较，please input two numbers:\n");
    scanf("%lf %lf",&num1,&num2);
    if (num1>=num2)
        if(num1>num2)
            printf("1");
        else
            printf("0");
    
        else
            printf("-1");
}

void squ()
{
    double num1,squ;
    printf("算术平方，please input one numbers:\n");
    scanf("%lf",&num1);
    squ=num1*num1;
    printf("%lf",squ);
}

void max()
{
    double num1,num2,max;
    printf("算术最大，please input two numbers:\n");
    scanf("%lf %lf",&num1,&num2);
    max=num1>num2?num1:num2;
    printf("%lf",max);
}
void quit()
{
    exit(0);
}


