#include <stdio.h>
#include<stdlib.h>

int main(void) {
 int i, n;
   time_t t;
   
   n = 5;
   
   /* Intializes random number generator */
   srand(time(&t));

   /* Print 5 random numbers from 0 to 49 */
   for( i = 0 ; i < n ; i++ ) {
      printf("%d\n", rand()%10 );
   }
  return 0;
}