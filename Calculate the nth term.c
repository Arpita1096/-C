#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
  //Write your code here.
    //  return (n<=3)? ((n==1)?a:(n==2?b:c)) : find_nth_term(n-1,b,c,a+b+c);
  while(n<=3)
  {
      if(n==1){
          return a;
      }
      else if(n==2){
          return b;
      }
      else{
          return c;
      }
  }
      return find_nth_term(n-1,b,c,a+b+c);
  }


int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
