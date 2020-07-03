/*
  Problem URL: https://www.hackerrank.com/challenges/c-tutorial-pointer/problem
*/
#include<stdio.h>
#include<iostream>
#include<cmath>
void update(int *, int *);

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);
    return 0;
}

void update(int *a, int *b)
{
  *a = *a + *b;
  *b = std::abs(*a - *b -*b);
}
