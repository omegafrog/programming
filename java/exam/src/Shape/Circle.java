package Shape;

interface Shape{
    final double PI = 3.14;
    void draw();
    double getArea();
    default public void redraw(){
        System.out.print("---redraw. ");
        draw();
    }
}

class Oval implements Shape{
    private int x;
    private int y;
    public Oval(int x, int y){
        this.x = x;
        this.y = y;
    }
    public void draw(){
        System.out.println(x+"X"+y+"에 내접하는 타원입니다.");
    }
    public double getArea(){
        return PI*x*y;
    }
}
class Rect implements Shape{
    private int x;
    private int y;
    public Rect(int x, int y){
        this.x = x;
        this.y = y;
    }
    public void draw(){
        System.out.println(x+"x"+y+"크기의 사각형입니다.");
    }
    public double getArea(){
        return x*y;
    }
}
public class Circle implements Shape{
    private int radius;
    public Circle(int radius){
        this.radius = radius;
    }
    public void draw(){
        System.out.println("반지름이 "+radius+"인 원입니다.");
    }
    public double getArea(){
        return PI*radius*radius;
    }
    public static void main(String[] args){
        Shape [] list = new Shape[3];
        list[0]=new Circle(10);
        list[1]=new Oval(20,30);
        list[2]=new Rect(10,40);

        for(int i=0;i<list.length;i++)list[i].redraw();
        for(int i=0;i<list.length;i++)System.out.println("면적은 "+list[i].getArea());
    }
}