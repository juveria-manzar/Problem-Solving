/**
 * @author Juveria-Manzar
 * @email juveriamanzar29@gmail.com
 * @create date 2020-02-13 01:22:57
 * @modify date 2020-02-13 01:50:57
 * @desc [description]
 */
#include<stdio.h>

int main(){
    int t,i,j;
    
    //test case t
    scanf("%d",&t);
    for ( j = 0; j < t; j++)
    {
        int p,g;
        //price of purple & green balloons p&g
        scanf("%d %d",&p,&g);
        int n;
        //no. of participants
        scanf("%d",&n);
        int q1[n], q2[n];
        int pc=0,gc=0,n,min,max,minCost=0;
        for ( i = 0; i <n; i++)
        {
            scanf("%d",&q1[i]);
            scanf("%d",&q2[i]);
            if (q1[i])
            {
                pc++;
            }
            if (q2[i])
            {
                gc++;
            }
        }
        
        if (p>g)
        {
            max=p;
            min=g;
        }
        else
        {
            max=g;
            min=p;
        }
        
        if (pc>gc)
        {
            minCost=minCost+(min*pc)+(max*gc);
        }
        else
        {
            minCost=minCost+(min*gc)+(max*pc);
        }
        
        
    }
    
    return 0;
}