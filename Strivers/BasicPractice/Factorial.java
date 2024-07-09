import java.util.*;
public class Factorial {
    static ArrayList<Integer> factorial(int n)
    {
        int fact=1;
        ArrayList<Integer> al=new ArrayList<>();

        for(int i=1;i<=30;i++)
        {
           fact*=i;
           if(fact<n)
           {
              al.add(fact);
           }
           else{
            break;
           }
        }
        return al;

    }
    
    public static void main(String[] args) {
        ArrayList<Integer> value=factorial(30);
        System.out.println(value);
    }
}