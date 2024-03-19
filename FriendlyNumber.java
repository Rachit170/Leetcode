import java.util.Scanner;
public class friendlyNum {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter 2 numbers");
        int num1,num2;
        num1=sc.nextInt();
        num2=sc.nextInt();
        boolean b=check(num1, num2);
        System.out.println(b);
        sc.close();
    }
    public static boolean check(int a,int b){
        return (friendlyNumber(a)==b && friendlyNumber(b)==a);
    }
    public static int friendlyNumber(int x){
        int sum=0;
        for(int i=1;i<= x/2;i++){
            if(x % i==0)
                sum+=i;
        }
        return sum;
    }
}
