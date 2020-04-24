import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Min_MaxSum {
    // Complete the miniMaxSum function below.
    static void miniMaxSum(int[] arr) {
        long minSum=0,maxSum=0;
        int temp=0;
        for(int k=0; k<arr.length-1; k++) {
            for(int i=0; i <arr.length-k-1;i++) {
                if(arr[i]>arr[i+1] ) {
                    temp=arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=temp;
                }
            }
        }
        for(int i=1;i<arr.length;i++){
            minSum+=arr[i-1];
            maxSum+=arr[i];
        }
        System.out.print(minSum+" "+maxSum);

    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        int[] arr = new int[5];

        String[] arrItems = scanner.nextLine().split(" ");
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int i = 0; i < 5; i++) {
            int arrItem = Integer.parseInt(arrItems[i]);
            arr[i] = arrItem;
        }

        miniMaxSum(arr);

        scanner.close();
    }
}
