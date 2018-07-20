import java.util.ArrayList;
import java.util.List;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Contas c1 = new Contas(200);
		Contas c2 = new Contas(300);
		Contas c3 = new Contas(400);
		List l1 = new ArrayList();
		l1.add(c1);
		l1.add(c2);
		l1.add(c3);
		for(int i = 0;i < l1.size();i++) {
			Contas cc = (Contas)l1.get(i);
			System.out.println(cc.getSaldo());
		}
		for(int i = 0;i < l1.size();i++) {
			if(l1.contains(c1)) {
				System.out.println("Contem o objeto");
			}
		}
	}

}
