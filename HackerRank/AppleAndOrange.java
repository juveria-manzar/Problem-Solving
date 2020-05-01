import java.util.Scanner;

public class AppleAndOrange {
     static Scanner scn=new Scanner(System.in);

    public static void main(String[] args) {
         
         int s=scn.nextInt();
        int t=scn.nextInt();
        int a=scn.nextInt();
        int b=scn.nextInt();
        int m=scn.nextInt();
        int n=scn.nextInt();
        int apple[]=takeinput(m);
        int orange[]=takeinput(n);
        int ac=0;
        int oc=0;
        
        for(int i=0;i<m;i++)
        {
            int ch=a+apple[i];
            if(ch>=s && ch<=t)
            {
                ac++;
            }
            
        }
        
        for(int i=0;i<n;i++)
        {
            int ch=b+orange[i];
            if(ch>=s && ch<=t)
            {
                oc++;
            }
            
            
        }
        
        System.out.println(ac);
        System.out.println(oc);
                
        
    }

    public static int[] takeinput(int n) {
        // System.out.println("enter size");
//         int n = scn.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < arr.length; i++) {
            arr[i] = scn.nextInt();
        }
        return arr;
    }

}
