package tv;

public class IPTV extends ColorTV{
    private String ipaddr;
    public IPTV(String ipaddr, int size, int color){
        super(size,color);
        this.ipaddr=ipaddr;
    }
    public void printProperty(){
        System.out.println("나의 IPTV는 "+ipaddr+" 주소의 "+getSize()+"인치 "+getColor()+"컬러");
    }

    public static void main(String[] args){
        IPTV iptv = new IPTV("123,4,5,6,", 32, 2048);
        iptv.printProperty();
    }
}