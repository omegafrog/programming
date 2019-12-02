package app;

import java.util.Scanner;
public class App {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int circle1_x,circle1_y, circle1_r;
        int circle2_x, circle2_y, circle2_r;
        System.out.println("circle1\nx,y,r:");
        circle1_x=scanner.nextInt();
        circle1_y=scanner.nextInt();
        circle1_r=scanner.nextInt();
        System.out.println("circle2\nx,y,r:");
        circle2_x=scanner.nextInt();
        circle2_y=scanner.nextInt();
        circle2_r=scanner.nextInt();

        double 거리 = Math.sqrt((circle1_x-circle2_x)*(circle1_x-circle2_x)+(circle1_y-circle2_y)*(circle1_y-circle2_y));
        if(거리<circle1_r+circle2_r){
            System.out.println("두 원은 겹칩니다.\n");
        }
        else
            System.out.println("두 원은 겹치지 않습니다.\n");
        scanner.close();
    }
    
}