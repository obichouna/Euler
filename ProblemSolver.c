#include <stdio.h>

int main(){

/*Problem 1
If we list all the natural numbers below 10 that are multiples of 3 or 5,
we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.
*/
int sum;
int x;
for(x = 1; x < 1000; x++){
  if((x % 3 == 0) || (x % 5 == 0)){
    sum += x;
  }
}
/*Problem 2
2520 is the smallest number that can
be divided by each of the numbers from 1 to 10 without any remainder.
What is the smallest positive number that
is evenly divisible by all of the numbers from 1 to 20?
*/
int ans = 1;
while (!((ans % 1 == 0) && (ans % 2 == 0) && (ans % 3 == 0) && (ans % 4 == 0) &&
(ans % 5 == 0) && (ans % 6 == 0) && (ans % 7 == 0) && (ans % 8 == 0) &&
(ans % 9 == 0) && (ans % 10 == 0) && (ans % 11 == 0) && (ans % 12 == 0) &&
(ans % 13 == 0) && (ans % 14 == 0) && (ans % 15 == 0) && (ans % 16 == 0) &&
(ans % 17 == 0) && (ans % 18 == 0) && (ans % 19 == 0) && (ans % 20 == 0))) {
  ans++;
}
printf("The answer: %d and %d \n", sum, ans);
return 0;
}
