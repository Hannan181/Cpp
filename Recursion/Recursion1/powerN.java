import java.util.Scanner;
public class powerN{
    public static int power(int x,int n){
        if(n==0)return 1;
        return x*power(x,n-1);
    }
    public static void main(String[]args){
       Scanner myObj=new Scanner(System.in);
       int n=myObj.nextInt();
       Scanner mObj=new Scanner(System.in);
       int x=mObj.nextInt();
       cout<<power(x,n);
    }
}