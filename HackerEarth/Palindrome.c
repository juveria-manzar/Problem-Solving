/**
 * @author Juveria-Manzar
 * @email juveriamanzar29@gmail.com
 * @create date 2020-02-06 20:07:01
 * @modify date 2020-02-06 20:26:23
 * @desc [description]
 */
/*You have been given a String S. 
You need to find and print whether this string is a palindrome or not. 
If yes, print "YES" (without quotes), else print "NO" (without quotes).

Input Format
The first and only line of input contains the String S. The String shall consist of lowercase English alphabets only.

Output Format
Print the required answer on a single line.*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
    char str[100],rev[100]={0};
    int i,j;

    printf("Enter the string: ");
    scanf("%s",str);

    for ( i = (strlen(str)-1),j=0;i>=0 ; i--,j++)
    {
        rev[j]+=str[i];
    }
    //printf("%s",rev);
    //printf("%s",str);
    if (strcmp(str,rev)==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
    
    
}

