import java.util.Scanner;

public class ActionCheck {

    public void Action(){
        int choice,n;
        Scanner sc = new Scanner(System.in);

        do{

            System.out.println("*****Action Check*****");
            System.out.println("Choose an option...Enter 0 to exit");
            System.out.println("1.Palindrome Check");
            System.out.println("2.Armstrong Check");
            System.out.println("3.Prime Check");
            System.out.println("4.Fibonacci Series");

            choice = sc.nextInt();

            switch(choice){

                case 0: System.out.println("Exiting...");
                break;

                case 1: System.out.println("Enter a number");
                n = sc.nextInt();
                int temp,rev=1;
                for(int i=n;i>0;i=i/10){
                    temp = i%10;
                    rev = rev*10 + temp;


                }

                if(n==rev){
                    System.out.println("Palindrome");
                }else{
                    System.out.println("Not a palindrome");
                }
            }





        }while(choice !=0);
    }

    


public static void main(String[] args) {
    
}
}
