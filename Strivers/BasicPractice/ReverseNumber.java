import java.util.*;
class ReverseNumber {
    public static void main(String[] args) {
        System.out.println("Enter a number");
        Scanner S=new Scanner(System.in);
        int n=S.nextInt();
        int newnum=0;
        while(n!=0)
        {
            int rem=n%10;
            newnum=newnum*10+rem;
            n=n/10;

        }
        System.out.println(newnum);

    }
}
