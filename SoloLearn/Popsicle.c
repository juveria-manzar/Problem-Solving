/**
 * @author Juveria-Manzar
 * @email juveriamanzar29@gmail.com
 * @create date 2020-01-31 17:54:46
 */
// You have a box of popsicles and you want to give them all away to a group of brothers and sisters. 
//If you have enough left in the box to give them each an even amount you should go for it! 
//If not, they will fight over them, and you should eat them yourself later.

// Task
// Given the number of siblings that you are giving popsicles to, 
//determine if you can give them each an even amount or if you shouldn't mention the popsicles at all.

#include <stdio.h>

int main() {
    int siblings, popsicles;
    scanf("%d", &siblings);
    scanf("%d", &popsicles);

    //your code goes here
    if(popsicles %siblings==0 )
     printf ("give away");
    else
    printf ("eat them yourself");
    return 0;
}
