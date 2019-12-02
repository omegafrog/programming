package event;

import java.awt.*;
import javax.swing.*;
import java.awt.event.*;

public class keyevent extends JFrame{
    // 문자열을 출력할 label array 생성.
    private JLabel [] keyMessage;

    public keyevent(){
        // title
        setTitle("keyListener 예제");
        // 창을 닫을 때 종료.
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        // gui component 가 부착되는 공간
        Container c = getContentPane();
        // 배치 관리자 FlowLayout()
        c.setLayout(new FlowLayout());

        // 키 입력을 위한 keyListener 추가.
        c.addKeyListener(new MyKeyListener());

        keyMessage = new JLabel [3];
        keyMessage[0] = new JLabel(" getKeyCode()");
        keyMessage[1] = new JLabel(" getKeyChar()");
        keyMessage[2] = new JLabel(" getKeyText()");

        for(int i=0; i<keyMessage.length; i++) {
            c.add(keyMessage[i]);
            keyMessage[i].setOpaque(true);
            keyMessage[i].setBackground(Color.YELLOW);
        }
        setSize(300,150);
        setVisible(true);

        c.setFocusable(true);
        c.requestFocus();
    }
    class MyKeyListener extends KeyAdapter {
        public void keyPressed(KeyEvent e) {
        int keyCode = e.getKeyCode();
        char keyChar = e.getKeyChar();
        keyMessage[0].setText(Integer.toString(keyCode));
        keyMessage[1].setText(Character.toString(keyChar));
        keyMessage[2].setText(e.getKeyText(keyCode));
        }
    }
    public static void main(String [] args) {
        new keyevent();
    }
}

