import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int M = in.nextInt();
        int N = in.nextInt();

        if(N <= 1) System.out.println("0");
        else if(N % 2 == 0) System.out.println(N/2 * M);
        else System.out.println((N-1)/2 * M + M/2);
    }
}
