/**
 * @author Juveria-Manzar
 * @email juveriamanzar29@gmail.com
 * @create date 2020-02-13 01:27:50
 * @modify date 2020-02-13 01:30:02
 * @desc [description]
 */

#include<stdio.h>

int main(){
    int fact=1,i,n;

    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        fact=fact*i;
    }
    printf("%d",fact);
}