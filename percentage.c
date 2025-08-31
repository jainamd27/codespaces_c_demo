#include <stdio.h>

void main()
{
    float sub1, sub2, sub3, marks, prtcg;
    printf("Enter your marks: \n");
    scanf("%f", &sub1);
    printf("Enter your marks: \n");
    scanf("%f", &sub2);
    printf("Enter your marks: \n");
    scanf("%f", &sub3);
    marks = sub1 + sub2 + sub3;
    prtcg = (marks/300)*100;
    printf("Your total marks: %f \n", marks);
    printf("Your percentage: %f \n", prtcg);
}