/**
 * @author Juveria-Manzar
 * @email juveriamanzar29@gmail.com
 * @create date 2020-02-06 19:51:50
 * @modify date 2020-02-06 20:20:50
 * @desc [description]
 */

/*Given two strings, a and b , that may or may not be of the same length, determine the minimum number of character deletions 
required to make a and b anagrams. Any characters can be deleted from either of the strings.

Anagram of a word is formed by rearranging the letters of the word.

For e.g. -> For the word RAM - MAR,ARM,AMR,RMA etc. are few anagrams.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define CHARS 26
#define MAX_LENGTH 10000
int countDeletions() 
{  
    char str1[MAX_LENGTH],str2[MAX_LENGTH];
    //The	ampersand	(&)	allows us	to	pass	the	address	of	variable number which is the place	in	memory	where	we	store	the	information	
    //that	scanf	read.
    //but	unlike	the	integer	, we do	not	require	the	ampersand (&) 
    //since string	is	an	array of characters. An	array is already a	pointer	to	a	character	data	type	in	memory.
    scanf("%s %s",str1,str2);
    int arr[CHARS] = {0}; 
    for (int i=0; str1[i]!='\0'; i++) 
    {
        arr[str1[i] - 'a']++;  
    }
    for (int i=0; str2[i]!='\0'; i++)  
    {
        arr[str2[i] - 'a']--;
    }
    long int ans = 0; 
    for(int i = 0; i < CHARS; i++){
        ans +=abs(arr[i]);
    }
    printf("%ld\n", ans);
} 
int main() { 
    int T, i;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        countDeletions();
    }
    return 0; 
}
