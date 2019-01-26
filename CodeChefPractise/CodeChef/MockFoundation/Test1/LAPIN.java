import java.util.*;
import java.io.*;

public class LAPIN {
    public static void main(String[] args) throws IOException {
        BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
        int tc = Integer.parseInt(bf.readLine());
        while(tc-- > 0) {
            String str = bf.readLine();
            int length = str.length();
            int strStart1, strEnd1, strStart2, strEnd2;
            if(length % 2 == 0) {
                strStart1 = 0;
                strStart2 = length / 2;
                strEnd1 = strStart2;
                strEnd2 = length;
            } else {
                strStart1 = 0;
                strStart2 = length / 2;
                strEnd1 = strStart2 + 1;
                strEnd2 = length;
            }
            HashMap<Character, Integer> map = new HashMap<>();
            for(int i = strStart1; i < strEnd1; i++) {
                if(map.containsKey(str.charAt(i))) {
                    map.put(str.charAt(i), map.get(str.charAt(i)) + 1);
                } else {
                    map.put(str.charAt(i), 1);
                }
            }
            boolean flag = true;
            for(int i = strStart2; i < strEnd2; i++) {
                if(map.containsKey(str.charAt(i)) && map.get(str.charAt(i)) > 0) {
                    map.put(str.charAt(i), map.get(str.charAt(i)) - 1);
                } else {
                    flag = false;
                    break;
                }
            }
            if(flag) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }



}
