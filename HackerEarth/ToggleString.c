/**
 * @author Juveria-Manzar
 * @email juveriamanzar29@gmail.com
 * @create date 2020-02-13 01:33:59
 * @modify date 2020-02-13 01:42:15
 * @desc [description]
 */

// You have been given a String S consisting of uppercase and lowercase English alphabets. 
//You need to change the case of each alphabet in this String. That is, all the uppercase letters should be 
//converted to lowercase and all the lowercase letters should be converted to uppercase. You need to then print the resultant 
//String to output.
// Input Format
// The first and only line of input contains the String S
// Output Format
// Print the resultant String on a single line.

#include<stdio.h>
#include<string.h>

int main(){
    char str[101];

    scanf("%s",str);
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i]>=97 &&str[i]<=122)
        {
           str[i]=str[i]-32;
        }
        else if (str[i]>=65 &&str[i]<=90)
        {
            str[i]=str[i]+32;
        }
    }
    printf("%s",str);
    
}