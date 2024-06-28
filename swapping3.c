import java.util.Scanner;
class HelloWorld {
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);
        System.out.print("enter a,b,c value: ");
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        int c = scanner.nextInt();
        System.out.println("before swapping: ");
        System.out.println("a= "+a);
        System.out.println("b= "+b);
        System.out.println("c= "+c);
        int t=a;
        a=b;
        b=c;
        c=t;
        System.out.println("after swapping: ");
        System.out.println("a= "+a);
        System.out.println("b= "+b);
        System.out.println("c= "+c);
    }
}
