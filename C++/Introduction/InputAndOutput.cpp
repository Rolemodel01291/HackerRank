/*********************************************************************
 *             HACKERRANK INPUT AND OUTPUT CHALLENGE                 *
 *                                                                   *
 * Problem Statement                                                 *
 * Read 3 numbers from stdin and print their sum to stdout.          *
 * Note: If you plan on completing this challenge in C instead of    *
 * C++, you'll need to use format specifiers with printf & scanf.    *
 *                                                                   *
 * Examples                                                          *
 * Input 1: 1 2 7                                                    *
 * Output 1: 10                                                      *
 *                                                                   *
 * Problem URL                                                       *
 * https://www.hackerrank.com/challenges/cpp-input-and-output/problem*
 ********************************************************************/

#include<iostream>
using namespace std;

int main()
{
  int a=0, b=0, c=0;
  cin>>a>>b>>c;
  cout<<(a+b+c);
  return 0;
}
