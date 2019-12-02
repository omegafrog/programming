package Converter;

public class Won2Dollar extends Converter{
    public Won2Dollar(int ratio){ this.ratio = ratio; }
    final public double convert(double src){ return 1.0/ratio*src;}
    final public String getSrcString(){ return "원"; }
    final public String getDestString(){ return "달러"; }
    public static void main(String[] args){
        Won2Dollar toDollar = new Won2Dollar(1200);
        toDollar.run();
    }
}