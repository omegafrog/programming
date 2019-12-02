package tv;

public class ColorTV extends TV{
    private int color;
    public ColorTV(int size, int color){
        super(size);
        this.color = color;
    }
    public void printProperty(){
        System.out.println(getSize()+"inch "+color+"color");
    }
    protected int getColor(){return color;}
    public static void main(String[] args){
        ColorTV myTV = new ColorTV(32,1024);
        myTV.printProperty();
    }
}