/*
Problem URL: https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else/problem
*/
#include <iostream>
using namespace std;

int main()
{
  int number;
  scanf("%d", &number);
  if(number==0) printf("%s\n", "zero");
  else if(number==1) printf("%s\n", "one");
  else if(number==2) printf("%s\n", "two");
  else if(number==3) printf("%s\n", "three");
  else if(number==4) printf("%s\n", "four");
  else if(number==5) printf("%s\n", "five");
  else if(number==6) printf("%s\n", "six");
  else if(number==7) printf("%s\n", "seven");
  else if(number==8) printf("%s\n", "eight");
  else if(number==9) printf("%s\n", "nine");
  else printf("%s\n", "Greater than 9");
  return 0;
}
