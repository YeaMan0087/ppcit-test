#include<stdio.h>

int grade;
float basic_salary,gross_salary;

int main()
{
    printf("Hello! It's a pleasure to be at your service.\n\n");

    /* get input from user*/
    do
    {
        printf("please enter your Grade [valid grades include 1,2 or 3] : ");
        scanf(" %d", &grade);
    }
    while (grade < 1 || grade > 3);

    switch(grade)
    {

    case 1:
        printf("\n");
        basic_salary = 30000;
        gross_salary = basic_salary * (1.12);
        printf("your gross salary is: %.2f\n\n", gross_salary);
        break;

    case 2:
        printf("\n");
        basic_salary = 20000;
        gross_salary = basic_salary * (1.105);
        printf("your gross salary is: %.2f\n\n", gross_salary);
        break;

    case 3:
        printf("\n");
        basic_salary = 10000;
        gross_salary = basic_salary *(1.09);
        printf("your gross salary is: %.2f\n\n", gross_salary);
        break;
    }
}
/ / j u s t   a d d e d   a   c o m m e n t   t o   t h e   e n d   o f   t t h e   c   f i l e   u s i n g   t h e   t e r m i n a l .   t h e   e c h o   c o m m a n d   i s   a   c o m m a n d   b u i l t   i n   t h e   b a s h   s h e l l  
 