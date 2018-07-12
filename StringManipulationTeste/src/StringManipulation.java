
public class StringManipulation {

	public static void main(String[] args) {
		String a = "Diego";
		String b = "Diego";
		if(a.intern().equals(b)) {
			System.out.println("iguais");
		}else {
			System.out.println("Diferentes");
		}
		if(a.isEmpty()) {
			System.out.println("oi");
		}else {
			System.out.println(a.length());
		}
	}

}
