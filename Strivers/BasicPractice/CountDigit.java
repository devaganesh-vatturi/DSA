//count number of digits for a entered number
import java.util.*;
public class CountDigit {
    public static void main(String args[])
    {
        Scanner S=new Scanner(System.in);
        System.out.println("Enter the number:");
        int n=S.nextInt();
        // String str = "" + n;
        // System.out.println(str.length());
        int count=0;
        while(n!=0)
        {
            n=n/10;
            count++;
        }
        System.out.println("the count is:"+count);

        

    }
}
