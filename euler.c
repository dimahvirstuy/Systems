#include <stdio.h>
#include <stdlib.h>

// problem 1
int sumofmults (int bar) {
  int a;
  int ans = 0;
  for ( a = 3; a < bar; a += 3)
    ans += a;
  for ( a = 5; a < bar; a += 5) 
    ans += a;
  for ( a = 15; a < bar; a += 15) 
    ans -= a;
  return ans;
}

//problem 6
int diffsqrsum (int bar) {
  int sqrsum = 0;
  int sumsqr = 0;
  int i;

  for (i = 1; i <= 100; i++)
    sqrsum += i;
  sqrsum *= sqrsum;
  for (i = 1; i <= 100; i++)
    sumsqr += i * i;
  return sqrsum - sumsqr;
}

//problem 5
int smallestmult () {
  int i = 100;
  int j;
  while (0 == 0) {
    i++;
    for (j = 1; j <= 20; j++){
      if (i % j != 0)
	break;
      if (j == 20)
	return i;
    }
  }
}

int main () {
  printf ("answer to prob 1 is : %d \n", sumofmults(1000));
  printf ("answer to prob 5 is : %d \n", smallestmult());
  printf ("answer to prob 6 is : %d \n", diffsqrsum(100));
}
