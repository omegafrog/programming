package gui;

import javax.swing.*;
import java.awt.*;
public class ButtonEx extends JFrame {
public ButtonEx() {
setTitle("이미지 버튼 예제");
setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
Container c = getContentPane();
c.setLayout(new FlowLayout());
ImageIcon normalIcon = new ImageIcon("/home/jiwoo/Downloads/images/normalIcon.gif");
ImageIcon rolloverIcon = new ImageIcon("/home/jiwoo/Downloads/images/rolloverIcon.gif");
ImageIcon pressedIcon = new ImageIcon("/home/jiwoo/Downloads/images/pressedIcon.gif");
JButton btn = new JButton("call~~", normalIcon);
btn.setPressedIcon(pressedIcon);
btn.setRolloverIcon(rolloverIcon);
c.add(btn);
setSize(250,150);
setVisible(true);
}
public static void main(String [] args) {
new ButtonEx();
}
}