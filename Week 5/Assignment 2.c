#include <stdio.h>
 int main()
{
    int N; 
    scanf("%d",&N); /*The number is accepted from the test case data*/

/* Complete the rest of the code. Please use the printf statements as below
by just changing the variables used in your program 

printf("The number %d contains %d digits.",N,count);

*/
    int t,c;
	c=0;
	t=N;
	while(t>0)
    {
    	c++;
      	t/=10;
    }
printf("The number %d contains %d digits.",N,c);
}
          