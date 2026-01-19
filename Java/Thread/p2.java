// Thread using runnable

class MyRunnable implements Runnable
{
    public void run()
    {
        System.out.println("Thread using Runnable");
    }
}

public class p2 {
    public static void main(String[] args) {
        MyRunnable mobj = new MyRunnable();

        Thread t1 = new Thread(mobj);
        t1.start();
    }
}
