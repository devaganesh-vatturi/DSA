
import java.util.*;
class Divisors{
    static long sumOfDivisors(int N){
        // code here
        ArrayList <Integer> al=new ArrayList<>();
        ArrayList <Integer> bl=new ArrayList<>();
         int sum=0;
        for(int j=1;j<=N;j++)
        {
            al.clear();
            int sqr=(int)Math.sqrt(j);
            sum=0;
           
        
        for (int i=1;i<=sqr;i++)
        {
            if(j%i==0)
            {
                al.add(i);
                if(i!=(j/i))
                {
                    al.add(j/i);
                }
            }
           
        }
        for(int z:al)
        {
             sum+=z;
        }
         bl.add(sum);
        }
       sum=0;
        for(int p:bl)
        {
            System.out.println("the sum"+p);
            sum+=p;
        }
        return sum;
        
    }
    public static void main(String[] args) {
        long value=sumOfDivisors(7);
        System.out.println(value);
    }
}