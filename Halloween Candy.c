// You go trick or treating with a friend and all but three of the houses that you visit are 
//giving out candy. One house that you visit is giving out toothbrushes and two houses are giving out 
//dollar bills. 

// Task
// Given the input of the total number of houses that you visited, 
//what is the percentage chance that one random item pulled from your bag is a dollar bill? 

#include<stdio.h>

int main(){
    int houses,candy,toothbrushes,dollarbills;
    float probablity;

    scanf("%d",&houses);
    candy=houses-3;
    printf("%d ",candy);
    toothbrushes=1;
    dollarbills=houses-(toothbrushes+candy);
    probablity=dollarbills/houses;
    printf("%lf",probablity);
}