package stack;

import java.util.Scanner;

interface Stack{
    int length();
    int capacity();
    String pop();
    boolean push(String val);
}

public class StringStack implements Stack{
    private int length;
    private int capacity;
    private String pstr[];
    public StringStack(int capacity){ this.length=-1;
        this.capacity = capacity;
        pstr =new String [capacity];
    }
    
    public int length(){ return length; }
    public int capacity(){ return capacity; }
    public String pop(){ return pstr[length--]; }
    public boolean push(String val){ 
        if(capacity-1<=length) return false;
        else pstr[++length]=val; return true;
    }

    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        System.out.print("총 스택 저장 공간의 크기 입력 >> ");
        int capacity = scanner.nextInt();
        StringStack stack = new StringStack(capacity);
        while(true){
            System.out.print("문자열 입력>>");
            String inputstr = scanner.next();
            if(inputstr.equals("그만"))
                break;
            else{
                if(stack.push(inputstr)==true){
                    scanner.nextLine();
                }
                else
                    System.out.println("스택이 꽉 차서 푸시 불가!");
            }
        }
        System.out.print("스택에 저장된 모든 문자열 팝:");
        String outputStr="";
        while(stack.length()>=0){
            outputStr+=stack.pop()+" ";
        }
        System.out.print(outputStr);
        scanner.close();
    }
}