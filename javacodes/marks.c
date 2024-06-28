//Given a set of 3 student’s examination marks (in the range from 0 to 100),makea count of the number of students that havepassed the exam. A pass is awarded if the students mark is greater than or equal to 35.

import java.util.Scanner;
class HelloWorld {
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);
        System.out.print("enter a,b,c marks: ");
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        int c = scanner.nextInt();{
        if(a >= 35){
            System.out.println("a is passed");
        }
        else{
            System.out.println("a is failed");
        }
        }
        if(b >= 35){
            System.out.println("b is passed");
        }
        else{
            System.out.println("b is failed");
        }
        if(c >= 35){
            System.out.println("c is passed");
        }
        else{
            System.out.println("c is failed");
    }}
}
