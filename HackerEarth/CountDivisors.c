/**
 * @author Juveria-Manzar
 * @email juveriamanzar29@gmail.com
 * @create date 2020-02-13 01:23:20
 * @modify date 2020-02-13 01:25:50
 * @desc [description]
 */
#include<stdio.h>

int main(){
    int l,r,k,c=0;
    //the range
    scanf("%d %d %d",&l,&r,&k);
    for (int i = l; i<=r; i++)
    {
        if (i%k==0)
        {
           c++;
        }
        
    }
    printf("%d",c);
    
}