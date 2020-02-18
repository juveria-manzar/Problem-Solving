/**
 * @author Juveria-Manzar
 * @email juveriamanzar29@gmail.com
 * @create date 2020-02-03 23:17:04
 * @modify date 2020-02-03 23:18:39
 * @desc [description]
 */

/*You are required to enter a word that consists of  and  that denote the number of Zs and Os respectively. 
The input word is considered similar to word zoo if .

Determine if the entered word is similar to word zoo.
For example, words such as zzoooo and zzzoooooo are similar to word zoo but not the words such as zzooo and zzzooooo.*/

#include <stdio.h>
#include <string.h>

int main(){
	int num,x=0,y=0;
	char name[200];
	scanf("%s", &name);              			

    for (int i = 0; i<strlen(name); i++)
    {
       if (name[i]=='z')
       {
           x++;
       }
       else
       {
           y++;
       }
    }
    // printf("%d ",x);
    // printf("%d ",y);

    if (2*x==y)
    {
        printf("Yes ");
    }
    else
    {
        printf("No ");
    }

    
}