public class Mo
{
	void sum(int a,int b){
		int c=a+b;
		System.out.println("First call gives:"+c);
	}
	void sum(int a,int b,int c){
		int d=a+b+c;
		System.out.println("Second call gives:"+d);
	}
	void sum(float a,float b){
		float c=a+b;
		System.out.println("Third call gives:"+c);
	}		
	public static void main(String args[]){
		Mo ob=new Mo();
		ob.sum(2,3);
		ob.sum(2,3,4);
		ob.sum(2.3f,4.7f);//if not f after each value,then it will give error 
	}
}

