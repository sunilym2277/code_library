import java.util.*;
 class Display
{
	 public static void show(String m)
	{
		try
		{
			System.out.print("[");
			Thread.sleep(500);
			System.out.print(m);
			Thread.sleep(500);
			System.out.println("]");
			Thread.sleep(500);
		}catch(Exception e)
		{
			System.out.println("Interupted");
		}
	}
}
		
class Mythrd extends Thread
{
	String msg;
	Display ds;
	Mythrd(Display d,String s)
	{
		ds=d;
		msg=s;
	}
	public void run()
	{
		 synchronized(ds)
		 {
		ds.show(msg);
		 }
	}
}
class Mythrd2 extends Thread
{
	String msg;
	Display ds;
	Mythrd2(Display d,String s)
	{
		ds=d;
		msg=s;
	}
	public void run()
	{
		synchronized(ds)
		{
		ds.show(msg);
	}}	}


class main
{
	public static void main(String[] as)
	{
		Display d=new Display();
		Mythrd t0=new Mythrd(d,"revu");
		Mythrd t1=new Mythrd(d,"Aaru");
		Mythrd2 t2=new Mythrd2(d,"Chiku");
		Mythrd2 t3=new Mythrd2(d,"REVU");
		t0.start();
		t1.start();
		t2.start();
		t3.start();
	}
}
	
