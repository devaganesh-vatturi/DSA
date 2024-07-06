import java.util.*;
class ReverseNumber {
    static int reverse(int x) 
    {
       
       long newnum=0;
        while(x!=0)
        {
            int rem=x%10;
           newnum+=rem;
           newnum*=10;
            x=x/10;

        }
        newnum/=10;
         if (newnum <= Integer.MIN_VALUE || newnum >= Integer.MAX_VALUE)
        {
            return 0;
        }

        return((int)newnum);
    }
    public static void main(String[] args) {
        int value=reverse(3456);
        System.out.println(value);
    }

    }
