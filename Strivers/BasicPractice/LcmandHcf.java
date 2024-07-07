//find lcm and hcf
    class LcmandHcf {
        static int[] lcmAndGcd(int A , int B) {
            
            int [] result=new int[2];
            int lcm;
            int a=A;
            int b=B;
            while (b != 0) {
                int temp = b;
                b = a % b;
                a = temp;
            }
    
            lcm=(A/a)*B;
            result[0]=lcm;
            result[1]=a;
            return result;
        }
        public static void main(String[] args) {
            int[] obj=lcmAndGcd(45,40);
            System.out.println("lcm is "+obj[0]+" Hcf is "+obj[1]);
            
        }
        }
    

