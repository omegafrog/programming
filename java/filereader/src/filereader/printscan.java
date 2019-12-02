package filereader;

import java.io.*;
import java.util.Scanner;

public class printscan{
    public static void main(String[] args) throws IOException {
        Scanner scanner = new Scanner(System.in);
        
        FileWriter fout = new FileWriter("/home/jiwoo/phone.txt");
        System.out.println("전화번호 입력 프로그램입니다.");
        while(true){
            System.out.print("이름 전화번호 >> ");
            String inputstr = scanner.nextLine();

            if(!inputstr.equals("그만")){
                fout.write(inputstr,0,inputstr.length());
                fout.write("\n");
            }
            else
                break;
        }
        fout.close();
        FileReader fin = new FileReader("/home/jiwoo/phone.txt");
        System.out.println("전화번호를 출력합니다.");
        int c;
        while((c=fin.read())!=-1){
            System.out.print((char)c);
        }
        fin.close();
        scanner.close();
    }
}