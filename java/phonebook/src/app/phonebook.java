package app;

import java.util.Scanner;
public class phonebook{
    private String name;
    private String phonenum;

    public phonebook(String name, String phonenum){
        this.name=name;
        this.phonenum=phonenum;
    }
    public static void main(String[] args){
        Scanner scanner=new Scanner(System.in);
        System.out.print("인원수>>");
        int num_phone=scanner.nextInt();

        phonebook[] p=new phonebook[num_phone];
        for(int i=0;i<num_phone;i++){
            System.out.print("이름과 전화번호(이름과 번호는 빈 칸없이 입력)>>");
            p[i]=new phonebook(scanner.next(),scanner.next());
        }
        System.out.println("저장되었습니다.....");
    
        System.out.print("검색할 이름>>");
        String searchname=scanner.next();
        while (!searchname.equals("그만")){
            for(int i=0;i<num_phone;i++){
                if(searchname.equals(p[i].name)){
                    System.out.println(p[i].name+"의 번호는 "+p[i].phonenum+"입니다.");
                    break;
                }
                else{
                    System.out.println(p[i].name+"이 없습니다.");
                }
            }
            System.out.print("검색할 이름>>");
            searchname=scanner.next();
        }
        scanner.close();
    }
}