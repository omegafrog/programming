package gui;
import java.awt.FlowLayout;
import javax.swing.*;

public class MyFrame extends JFrame{
    public MyFrame() {
        setTitle("300X300 swing frame");
        setSize(300,300);
        setLocation(100,100);
        setVisible(true);
    }
    public static void main(String[] args){
        MyFrame frame = new MyFrame();
    }
}
