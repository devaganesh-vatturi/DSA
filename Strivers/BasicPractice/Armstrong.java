public class Armstrong {
    Armstrong(int a)
    {
        int A=a;
        int sum=0;
        while(a!=0)
        {
            int last=a%10;
            sum = sum+(last*last*last);
            a=a/10;
        }
        boolean value = (A==sum) ? true : false;
        System.out.println(value);

    }
    public static void main(String[] args) {
        Armstrong obj=new Armstrong(153);
    }
}
