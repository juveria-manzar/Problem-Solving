/*You are given an integer N. You need to print the series of all prime numbers till N.

Input Format
The first and only line of the input contains a single integer N denoting the number 
till where you need to find the series of prime number.

Output Format
Print the desired output in single line separated by spaces.

Constraints
1<=N<=1000*/

#include<stdio.h>
int main()
{
	int i,j,flag,n;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
	flag=0;
        /* the greatest number by which an integer (i, in this case) may be completely divisible,
         is the half of that integer. 
        So, inside the inner loop, the condition j*j<=i can be replaced by j<=i/2.*/
		for(j=2;j*j<=i;j++)
		{
			if(i%j==0)
			{
                //as we find a single factor we break from the loop.
				flag=1;
				break;
			}
			
		}
			if(flag!=1)
			{
				printf("%d ",i);
		
			}
	}
 
return 0;
}