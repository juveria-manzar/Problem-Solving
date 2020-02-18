/**
 * @author Juveria-Manzar
 * @email juveriamanzar29@gmail.com
 * @create date 2020-02-18 19:45:00
 * @modify date 2020-02-18 20:01:11
 * @desc [description]
 */
#include<stdio.h>
#include<math.h>

int main(){
    int A=0,B=7;
    int i,t,n;

    scanf("%d",&t);
    while(t){
        scanf("%d",&n);
            if (abs(n-A)<=abs(n-B))
            {
                printf("\nA");
                A=n;
            }
            else
            {
                printf("\nB");
                B=n;
            }        
        t--;
    }
}