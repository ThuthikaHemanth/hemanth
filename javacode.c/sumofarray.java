public class sum{
    public static void main(String args[]){
        int arr[] = new int[]{31, 2, 3, 4, 5, 6, 5, 8, 9, 7};
        int sum = 0;
        for(int i=0;i<arr.length;i++){
            sum = sum+arr[i];
        }
        System.out.print("sum of array: "+sum);
    }
}
