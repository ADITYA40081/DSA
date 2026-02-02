import java.util.Scanner;
public class student_age {
    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);

        System.out.println("enter the age ");
        int age=input.nextInt();

        if(age<13) System.out.println("primary school ");
        else if(age==15) System.out.println("secondary school ");
        else System.out.println("go to university ");
        
    }


    
}
