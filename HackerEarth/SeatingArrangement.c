/*
Akash and Vishal are quite fond of travelling. They mostly travel by railways. 
They were travelling in a train one day and they got interested in the seating arrangement of their compartment. 
The compartment looked something like
W->1___12   6___7
M->2___11   5___8
A_>3___10   4___9

So they got interested to know the seat number facing them and the seat type facing them. The seats are denoted as follows : 
Window Seat : WS
Middle Seat : MS
Aisle Seat : AS
You will be given a seat number, find out the seat number facing you and the seat type, i.e. WS, MS or AS.

INPUT
First line of input will consist of a single integer T denoting number of test-cases. Each test-case consists of a single integer N denoting the seat-number.

OUTPUT
For each test case, print the facing seat-number and the seat-type, separated by a single space in a new line.

CONSTRAINTS
1<=T<=10^5
1<=N<=108
*/

//HINT
/*Understand that the entire coach contains of blocks that are of the SAME pattern. 
Find the logic behind one block, and the same can be applied to the entire problem.

So, whatever input you get, convert it into simple, workable numbers, 
That is between 1 to 12 ( To model like the first block of seats)
To do that, do (input % 12) and you'll be able to work with numbers 0 to 11
The logic is very simple and can be implemented using a switch case or an if-else construct. 
Just implement the structure of the first block as your logic.*/

#include<stdio.h>
int main(){
    int num,sn,ch,i;

	scanf("%d", &num);  //num of test cases            			// Reading input from STDIN
	printf("Input number is %d.\n", num);       // Writing output to STDOUT
	for(i=1;i<=num;i++)
	{
	    scanf("%d",&sn);
	    ch=sn%12; //(0-12 values)
	    switch(ch)
        {
	        case 0: sn-=11;
	                printf("%d WS\n",sn);
	                break;
            case 1: sn+=11;
                    printf("%d WS\n",sn);
	                break;
            case 2: sn+=9;
                    printf("%d MS\n",sn);
	                break;
            case 3: sn+=7;
                    printf("%d AS\n",sn);
	                break;
            case 4: sn+=5;
                    printf("%d AS\n",sn);
	                break;
            case 5: sn+=3;
                    printf("%d MS\n",sn);
                    break;
            case 6: sn+=1;
                    printf("%d WS\n",sn);
	                break;
            case 7: sn-=1;
                    printf("%d WS\n",sn);
	                break;
	        case 8: sn-=3;
                    printf("%d MS\n",sn);
	                break;
            case 9: sn-=5;
                    printf("%d AS\n",sn);
	                break;
            case 10: sn-=7;
                    printf("%d AS\n",sn);
                    break;
            case 11:sn-=9;
                    printf("%d MS\n",sn);
                    break;
        }
    }
}
