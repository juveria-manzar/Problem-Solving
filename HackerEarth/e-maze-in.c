/**
 * @author Juveria-Manzar
 * @email juveriamanzar29@gmail.com
 * @create date 2020-02-18 20:05:59
 * @modify date 2020-02-18 20:16:12
 * @desc [description]
 */

#include<stdio.h>
#include<string.h>

int main(){
    char str[200];
    int i,c=0,r=0;
    scanf("%s",str);
    for ( i = 0; i < strlen(str); i++)
    {
        if (str[i]=='L')
        {
            r--;
        }
        else if(str[i]=='R')
        {
            r++;
        }
        else if (str[i]=='U')
        {
            c++;
        }
        else if(str[i]=='D')
        {
            c--;
        } 
    }
    printf("%d %d",r,c);
}