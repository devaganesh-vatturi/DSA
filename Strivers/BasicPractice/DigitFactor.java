//For given number calculate factors in each digit
class DigitFactor{
    static int evenlyDivides(int N){
        int n=N;
        int count=0;
       while(n!=0)
       {
           int rem=n%10;
           
           if(rem!=0 && N%rem==0)
           {
               count+=1;
           }
           n=n/10;
       }
       return (count);
       
      
       
    }
    public static void main(String[] args) {
        int value=evenlyDivides(2466);
        System.out.println(value);
    }
}
