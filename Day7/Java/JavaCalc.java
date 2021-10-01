import java.util.Scanner;
import java.lang.Math;


public class JavaCalc {

    public int Addition(int a , int b){
        return a+b;

    }

    public int Subtraction(int a , int b){
        if(a>b){
            return a-b;
        }else {
            return Math.abs(a-b);
        }

    }

    public int Multiplication(int a , int b){
        return a*b;

    }

    public void Division (float a , float b){
        float result ;
        try{
            result = a/b;
            System.out.println("Division is :"+result);
            
        }catch(Exception e){
            System.out.println("Can not divide a number by zero");
        }

    }

    public void CalCulator(){
        int choice;
        int a,b,res;
        Scanner sc = new Scanner(System.in);

        do{
            System.out.println("***********JAVA CALCULATOR**********");
            System.out.println("Choose one option..Press 0 to exit");

            System.out.println("1. Addition");
            System.out.println("2. Subtraction");
            System.out.println("3. Multiplication");
            System.out.println("4. Division");

            choice = sc.nextInt();

            switch(choice){
                case 0 : System.out.println("Exiting...");
                break;

                case 1 : System.out.println("Enter Two Numbers : ");
                a = sc.nextInt();
                b = sc.nextInt();
                res = Addition(a, b);
                System.out.println("Addition is : "+res);
                break;

                case 2 : System.out.println("Enter Two Numbers : ");
                a = sc.nextInt();
                b= sc.nextInt();

                res = Subtraction(a, b);
                System.out.println("Subtraction is : "+res);
                break;

                case 3 : System.out.println("Enter Two Numbers : ");
                a = sc.nextInt();
                b = sc.nextInt();

                res = Multiplication(a, b);
                System.out.println("Multiplicatio is : "+res);
                break;

                case 4 : System.out.println("Enter Two Numbers : ");
                float x = sc.nextFloat();
                float y = sc.nextFloat();
                Division(x,y);
                break;

                default: System.out.println("Please Enter A Valid Choice ");
                break;


            }

        


        }while(choice!=0);
    }
 
    public static void main(String[] args) {

        JavaCalc obj = new JavaCalc();


        obj.CalCulator();

        
    
    }
    
   }