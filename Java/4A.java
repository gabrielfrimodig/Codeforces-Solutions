import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int x = in.nextInt();
        if(x > 3 && (x-2) % 2 == 0) System.out.println("yes");
        else System.out.println("no");
    }
}
