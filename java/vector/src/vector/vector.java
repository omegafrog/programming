package vector;

import java.util.*;

public class vector{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);

        Vector<Integer> vector1= new Vector<Integer>();
        Iterator<Integer> it = vector1.iterator();

        while(true){
            System.out.print("강수량 입력 (0 입력 시 종료)>>");
            int input = scanner.nextInt();
            int num=0;
            vector1.add(0);
            if(input!=0){
                vector1.add(input);
                int sum = 0;
                while(it.hasNext()){
                    int res = it.next();
                    sum+=res;
                    System.out.print(res+" ");
                }
                num++;
                System.out.println("현재 평균 "+sum/(double)num);                
            }
            else
                break;
        }
    }
}