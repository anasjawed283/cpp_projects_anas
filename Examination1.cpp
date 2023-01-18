/*
Every positive integer can be written  uniquely as a sum of  one or more distinct  Fibonacci numbers, no two of which are consecutive.  
The Fibonacci sequence is defined by F1=F2=1 and Fn=Fn−1+Fn−2 for n>2. The precise sequence used here is the Fibonacci sequence with F1 deleted,
the first few members being 1,2,3,5,8,13,21,…
Examples of  representations are:
71=55+13+3,
100=89+8+3,
1111=987+89+34+1.
Given a positive integer n, your program should print the respresentation. 
Example
Input 
71 
Output 
55
13
3
*/

#include<iostream>
using namespace std;
int fibonacci(int n) {
   if (n == 0 || n == 1)
      return n;
   int past = 0, current = 1, next = 1;
   while (next <= n) {
      past = current;
      current = next;
      next = past + current;
   }
   return current;
}
void function(int sum) {
   while (sum > 0) {
      int fibo = fibonacci(sum);
      cout << fibo <<endl;
      sum = sum - fibo;
   }
}
int main() {
   int n;
   cin>>n;
   function(n);
}
