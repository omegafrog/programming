package app;

import java.util.Scanner;
public class printavg{
    public static void main(String[] args){
        Scanner scanner=new Scanner(System.in);
        int numarr[]=new int[10];
        System.out.print("랜덤한 정수들 : ");
        int sum=0;
        for(int i=0;i<10;i++){
            numarr[i]=(int)(Math.random()*10+1);
            System.out.print(numarr[i]+" ");
            sum+=numarr[i];
        }
        System.out.println();
        System.out.println("평균 : "+(double)sum/10);
        scanner.close();
    }
}