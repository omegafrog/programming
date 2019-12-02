package filereader;

import java.io.*;

public class filereader{
    public static void main(String[] args) throws IOException {
        FileReader fin = null;
        FileWriter fout = null;
        try{
            fin = new FileReader("/home/jiwoo/tmp.txt");
            fout = new FileWriter("/home/jiwoo/tmp2.txt");
        int c;
        while((c=fin.read())!=-1){
            fout.write(c);
        }
        fout.close();
        fin.close();
    }catch(FileNotFoundException e){
        System.out.println("out");
        System.exit(0);
    }
    }
}