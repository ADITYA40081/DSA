import java.util.Scanner;
class Main{

    public static int addition(int n1,int n2){

        return n1+n2;
    }

    public static int sub(int n1,int n2){
        return n1-n2;
    }

    public static int mul(int n1,int n2){
        return n1*n2;
    }

    public static int div(int n1,int n2){
        return n1/n2;
    }

    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);

        System.out.println("enter the number one by one ");
        int num1=sc.nextInt();
        int num2=sc.nextInt();

        System.out.println(addition(num1, num2));
        System.out.println(mul(num1, num2));




        

    }
}