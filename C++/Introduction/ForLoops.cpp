/*
  Problem URL: https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem
*/
#include <iostream>
using namespace std;
//FUNCTION DECLARTION
void EnglishLetters(int);
void CheckEvenOdd(int);

int main()
{
  int a,b;
  scanf("%d\n%d", &a, &b);
  for(int i=a; i<=b; i++)
  {
    if(i>=1 && i<=9) EnglishLetters(i);
    else CheckEvenOdd(i);
  }
  return 0;
}

void EnglishLetters(int i)
{
  if(i==0) printf("%s\n", "zero");
  else if(i==1) printf("%s\n", "one");
  else if(i==2) printf("%s\n", "two");
  else if(i==3) printf("%s\n", "three");
  else if(i==4) printf("%s\n", "four");
  else if(i==5) printf("%s\n", "five");
  else if(i==6) printf("%s\n", "six");
  else if(i==7) printf("%s\n", "seven");
  else if(i==8) printf("%s\n", "eight");
  else if(i==9) printf("%s\n", "nine");
}

void CheckEvenOdd(int i)
{
  if(i%2==0) printf("%s\n", "even");
  else printf("%s\n", "odd");
}
