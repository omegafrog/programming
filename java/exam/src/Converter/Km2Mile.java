package Converter;

public class Km2Mile extends Converter{
    public Km2Mile(double ratio){ this.ratio = ratio; }
    final protected double convert(double src){ return 1.0/ratio*src; }
    final protected String getSrcString(){ return  "Km"; }
    final protected String getDestString(){ return "Mile"; }

    public static void main(String args[]){
        Km2Mile toMile = new Km2Mile(1.6);
        toMile.run();
    }
}