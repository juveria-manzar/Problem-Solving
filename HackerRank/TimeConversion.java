import java.io.*;
import java.math.*;
import java.text.*;
import java.util.*;
import java.util.regex.*;

public class TimeConversion {

    /*
     * Complete the timeConversion function below.
     */
    static String timeConversion(String s) {
        String hn="";
        String[] str=s.split(":");//07,05,45PM

        int h=Integer.parseInt(str[0]);

        String min=str[1];
        String sM=str[2];
        String sec=str[2].substring(0,sM.length()-2);
        String M=str[2].substring(sM.length()-2,sM.length());

        String nh="";
        if((0<=h && h<12)&& M.equalsIgnoreCase("PM")){
            h=12+h;
            if(h<=9)
            {
                hn="0"+h;
                nh= hn+":"+min+":"+sec;
            } 
            nh= h+":"+min+":"+sec;
        }
        else if(h==12 && M.equalsIgnoreCase("AM")){
            hn="00";
            nh= hn+":"+min+":"+sec;
        }
        else if((0<=h && h<12 && M.equalsIgnoreCase("AM"))||( h==12 && M.equalsIgnoreCase("PM"))){
            if(h<=9)
            {
                hn="0"+h;
                nh=hn+":"+min+":"+sec;
            } 
            else{
            nh= h+":"+min+":"+sec;}
        }
        return nh;

    }

    private static final Scanner scan = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bw = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        String s = scan.nextLine();

        String result = timeConversion(s);

        bw.write(result);
        bw.newLine();

        bw.close();
    }
}