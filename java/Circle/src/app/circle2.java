package app;

abstract class shape{
    private int x;
    private int y;
    abstract public void show();
}
class rect extends shape{
    public rect(){}
    
    public void show(){System.out.println("응기이이이이잇!");}
    // 슈퍼 클래스 메소드보다 접근 지정자를 좁혀서 사용할 수 없다.
    // ex) protected void show(){} 안됨.
}
class circle3 extends circle2{
    public circle3(int x, int y, int radius){;System.out.println("generator circle3");}
    public circle3(int x, int y){super(x,y);}
    public void foo(){
        System.out.println("foo");
    }
}
public class circle2{
        private int radius;
        private int x;
        private int y;
        public circle2(){x=0; y=0; radius=0;System.out.println("generator circle2-x,y,radius");}
        public circle2(int x, int y){
            this.x = x;
            this.y = y;
            System.out.println("generator circle2-x,y");
        }
        public void bar(){System.out.println("bar");}
    public static void main(String[] args){
        circle2 a = new circle3(5,5,5);
        circle2 b = new circle3(5, 5);
        a.bar();
        // a.foo(); ->오류. 업캐스팅하면 슈퍼클래스꺼밖에안됨
        // 다운캐스팅
        circle3 c = (circle3)new circle2();
        c.foo();
        c.bar();
        //모두 가능.
    }
}
