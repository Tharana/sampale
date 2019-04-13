#include <stdio.h>
int main()
 
{
          float u, a, t, s;
	  printf("Enter initial velocity:");
	  scanf("%f" , &u);

	  printf("Enter acceleration:");
	  scanf("%f" , &a);

	  printf("Enter time :");
	  scanf("%f" , &t);

	  s = (u*t) + (a*t*t)/2.0;


	  printf("Display= %.2f" , s);

	  return 0;






}
