package app;

interface gameplayer{
    public default void on(){System.out.println("system on");}; // public default 고정
    public default void off(){System.out.println("system off");};
    public abstract int choosegame(); //public abstract 고정. 생략 가능.
    public static int playgame(){System.out.println("game on"); return 1;} // public static or private static
    private static void savegame(){ }
    
}