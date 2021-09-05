import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int a = in.nextInt();
        int b = in.nextInt();

        int years = 0;

        while(a <= b){
            a = a * 3;
            b = b * 2;
            years++;
        }

        System.out.println(years);
    }
}
