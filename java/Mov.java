public class Mov{
	public static void main(String args[]){
		mam ob=new mam();
		anim s=new anim();
		hum p=new hum();
		ob.mammal();
		s.animal();
		p.human();
	}
}
class mam extends Mov{		
	void mammal(){
		System.out.println("Mammal Zone");
	}
}

class anim extends Mov{ 
	void animal(){
		System.out.println("Animal Zone");
	}

}

class hum extends Mov{
	void human(){
		System.out.println("Human Zone");
	}
}


