/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package reverse.string;
import java.util.*;

/**
 *
 * @author Dinesh
 */
public class ReverseString {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        String str = "dinesh";
        char[] revString = new char[str.length()];
        Stack<Character> s = new Stack<Character>();
        for (int i = 0; i < str.length(); i++) {
            char ch = str.charAt(i);
            s.push(ch);
        }
        
        int i=0;
        while(!s.empty()){
            char ch = s.pop();
            revString[i++] = ch;
        }
        
        String ans = new String(revString);
        
        System.out.println(ans);
    }
    
}
