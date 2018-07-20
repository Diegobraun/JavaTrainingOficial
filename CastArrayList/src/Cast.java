import java.util.ArrayList;

public class Cast {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		ArrayList<Integer> n = new ArrayList<>();
		n.add(5);
		n.add(4);
		n.add(3);
		System.err.println(n);
		Integer [] objects = (Integer[]) n.toArray();
			for(Integer y : n) {
				System.out.println(y);
			}
			
			ArrayList n1 = new ArrayList();
			String i = "opa";
			n1.add(0, i);
			System.out.println(n1);
		}
	}


