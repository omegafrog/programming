package tvv;

class IPTV extends ColorTV{
    private String ipaddr;
    public IPTV(String ipaddr, int size, int color){
        super(size,color);
        this.ipaddr=ipaddr;
    }
    public void printProperty(){
        System.out.println("나의 IPTV는 "+ipaddr+" 주소의 "+getSize()+"인치 "+getColor()+"컬러");
    }
}

public class iptv{
    public static void main(String[] args){
        IPTV iptv=new IPTV("192.1.1.2", 32, 2048);
        iptv.printProperty();
    }
}