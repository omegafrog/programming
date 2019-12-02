package gui;

import javax.swing.*;
import java.awt.event.*;
import java.awt.*;

public class checkbox extends JFrame{
    private JCheckBox[] checkboxs = new JCheckBox[2];
    private String[] checkboxname = {"버튼 비활성화", "버튼 감추기"};
    JButton b1 = new JButton("test button");
    public checkbox(){
        setTitle("practice");
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        Container c = getContentPane();
        c.setLayout(new FlowLayout());
        MyItemListener listener = new MyItemListener();
        for(int i=0;i<2;i++){
            checkboxs[i] = new JCheckBox(checkboxname[i]);
            checkboxs[i].setBorderPainted(true);
            c.add(checkboxs[i]);
            checkboxs[i].addItemListener(listener);
        }
        c.add(b1);
        setSize(250,200);
        setVisible(true);
        
    }
    class MyItemListener implements ItemListener{
        public void itemStateChanged(ItemEvent e){
            if(e.getStateChange() == ItemEvent.SELECTED){
                if(e.getItem() == checkboxs[0])
                b1.setEnabled(false);
                else if(e.getItem() == checkboxs[1])
                b1.setVisible(false);
            }
            else{
                if(e.getItem() == checkboxs[0])
                b1.setEnabled(true);
                else if(e.getItem() == checkboxs[1])
                b1.setVisible(true);
            }

        }
    }
    public static void main(String[] args){
        new checkbox();
    }
}
