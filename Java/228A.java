import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        Set<Integer> s = new HashSet<Integer>();

        for(int i = 0 ; i < 4 ; i++){
            int x = in.nextInt();
            s.add(x);
        }

        System.out.println(4 - s.size());

    }
}
