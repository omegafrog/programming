package rotateString;

import java.util.Scanner;

public class rotateString{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        System.out.println("문자열을 입력하세요.");
        String inputstr=scanner.nextLine();
        String inputarr[]=new String[inputstr.length()];
        inputarr=inputstr.split("");
        for(int i=0;i<inputstr.length()-1;i++){
        for(int j=0;j<inputstr.length()-1;j++)
            System.out.print(inputarr[j]);
        System.out.println();
        String tmp = inputarr[inputstr.length()-1];
        for(int k=inputstr.length()-2;k>=0;k--){
            inputarr[k+1]=inputarr[k];
        }
        inputarr[0]=tmp;
        }
    }
}
