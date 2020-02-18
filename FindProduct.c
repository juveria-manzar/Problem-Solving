/**
 * @author Juveria-Manzar
 * @email juveriamanzar29@gmail.com
 * @create date 2020-02-06 20:31:19
 * @modify date 2020-02-06 20:31:19
 * @desc [description]
 */

/*You have been given an array A of size N consisting of positive integers. 
You need to find and print the product of all the number in this array Modulo 10^9+7 .

Input Format:
The first line contains a single integer N denoting the size of the array. The next line contains N space separated integers denoting the elements of the array

Output Format:
Print a single integer denoting the product of all the elements of the array Modulo 10^9+7 .*/

#include<stdio.h>
#include<math.h>

#define SIZE 1000

int main(){
    int N,A[SIZE],i,ans=1;

    scanf("%d",&N);

    for (i = 0; i < N; i++)
    {
        scanf("%d",&A[i]);
    }

    for (i = 0; i < N; i++)
    {
        ans=(int)(ans*A[i])%(int)(pow(10,9)+7);
        
    }
    printf("%d",ans);
}