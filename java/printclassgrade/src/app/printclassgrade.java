package app;

import java.util.Scanner;
public class printclassgrade{
    public static void main(String[] args){
        Scanner scanner=new Scanner(System.in);
        String course[]={"Java","C++","HTML5","컴퓨터구조","안드로이드"};
        int grade[]={95, 90, 85, 80, 75};

        System.out.print("course:");
        String input=scanner.next();        
        while(!input.equals("stop")){
            if(input.equals(course[0])){
                System.out.print("grade:"+grade[0]);
    
            }
            else if(input.equals(course[1])){
                System.out.print("grade:"+grade[1]);
        
            }
            else if(input.equals(course[2])){
                System.out.print("grade:"+grade[2]);
        
            }
            else if(input.equals(course[3])){
                System.out.println("grade:"+grade[3]);
        
            }
            else if(input.equals(course[4])){
                System.out.println("grade:"+grade[4]);
        
            }
            System.out.print("course:");
            input=scanner.next();
        }
        
    } 
}