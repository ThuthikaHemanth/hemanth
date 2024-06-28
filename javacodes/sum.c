import java.util.Scanner;
class HelloWorld 
{
    public static void main(String[] args)
    {
        Scanner scanner=new Scanner(System.in);
        System.out.print("enter a,b,c value: ");
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        int c = scanner.nextInt();
        int sum =a+b+c;
        System.out.print("sum of given numbers are: "+sum);
    }
}
