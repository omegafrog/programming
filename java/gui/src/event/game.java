package event;

import java.awt.*;
import javax.swing.*;
import java.awt.event.*;

public class game extends JFrame{
    private JLabel la = new JLabel("C");
    
    public game(){

        setTitle("클릭 연습 용 응용프로그램");
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        Container c = getContentPane();
        c.setLayout(null);
        MyMouseListener listener = new MyMouseListener();
        c.addMouseListener(listener);
        c.addMouseMotionListener(listener);
        la.setLocation(100,100);
        la.setSize(50,50);
        c.add(la);
        setSize(1000, 1000);
        setVisible(true);
    }
    class MyMouseListener extends MouseAdapter{
        public void mousePressed(MouseEvent e) {
            int x= e.getX();
            int y= e.getY();
            System.out.println(x+","+y);
            if(la.getX()-50<x && la.getX()+50 >x &&  la.getY()-50 < y && y<la.getY()+50){
                la.setLocation((int)(Math.random()*500),(int)(Math.random()*500));
            }
            System.out.println(la.getX()+","+la.getY());
        }
    }
    public static void main(String[] args){
        new game();
    }
}










