public class PrintSum{
    public static int printSum(int n,int sum){
       if(n==0){
           return 0;
       }
       return n+printSum(n-1, sum);
    }
    public static void main(String[]args){
        System.out.println(printSum(10,0));
    }
}