/**
 * @author juveria-manzar
 * @email juveriamanzar29@mail.com
 * @create date 2020-02-03 23:13:34
 * @modify date 2020-02-03 23:17:55
 */
/*You go trick or treating with a friend and all but three of the houses that you visit are 
giving out candy. One house that you visit is giving out toothbrushes and two houses are giving out 
dollar bills. 

Task
Given the input of the total number of houses that you visited, 
what is the percentage chance that one random item pulled from your bag is a dollar bill?*/ 

#include<stdio.h>
#include<math.h>

int main(){
    int houses,candy,toothbrushes,dollarbills,probablity,percent;

    scanf("%d",&houses);
    candy=houses-3;
    printf("%d ",candy);
    toothbrushes=1;
    dollarbills=houses-(toothbrushes+candy);
    printf("%d ",dollarbills);
    if (houses%2==0)
    {
        probablity=ceil(dollarbills*100/houses);
        printf("%d",probablity);
    }
    else
    {
        probablity=ceil((dollarbills*100/houses)+0.5);
        printf("%d",probablity);
    }
    
}