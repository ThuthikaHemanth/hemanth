import java.util.Scanner;
class HelloWorld 
{
    public static void main(String[] args)
    {
        Scanner scanner=new Scanner(System.in);
        System.out.print("enter a value: ");
        int a = scanner.nextInt();
        if(a ==0){
            System.out.println("a is zero");
        }
        else if(a % 2 == 0)
        {
            System.out.println("a is even");
        }
        else
        {
            System.out.println("a is odd");
        }
    }
}
