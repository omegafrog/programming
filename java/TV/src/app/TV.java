package app;

class tv{
    private int size;
    public tv(int size){this.size=size;}
    protected int getSize(){return size;}
}

class ColorTV extends tv{
    private int color;
    public ColorTV(int size, int color){
        super(size);
        this.color=color;
    }
    public void printProperty(){
        System.out.println(getSize()+"인치,"+color+"픽셀");
    }
    public int getColor(){
        return color;
    }
}
public class TV{
    public static void main(String[] args){
        ColorTV myTV=new ColorTV(32,1024);
        myTV.printProperty();
    }
} 