package gui;

import java.awt.event.*;
import javax.swing.*;
import javax.swing.event.ChangeEvent;
import javax.swing.event.ChangeListener;

import java.awt.*;

public class slider extends JFrame{
    JLabel text=new JLabel("I Love Java");
    JSlider slider1 = new JSlider(JSlider.HORIZONTAL,1,100,1);
    public slider(){
        setTitle("jslider practice");
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        Container c = getContentPane();
        c.setLayout(new BorderLayout());

        slider1.setPaintLabels(true);
        slider1.setPaintTicks(true);
        slider1.setPaintTrack(true);
        slider1.setMajorTickSpacing(20);
        slider1.setMinorTickSpacing(5);

        slider1.addChangeListener(new MyChangeListener());
        c.add(text,BorderLayout.CENTER);
        c.add(slider1,BorderLayout.NORTH);

        setSize(300,300);
        setVisible(true);
    }
        class MyChangeListener implements ChangeListener{
            public void stateChanged(ChangeEvent e){
                int size = slider1.getValue();
                text.setFont(new Font("Arial",Font.ITALIC,size));
            }
        }

        public static void main(String[] args){
            new slider();
        }

        
        

}
