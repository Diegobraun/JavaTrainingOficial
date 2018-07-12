import java.io.Console;

public class StringBuilder {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		StringBuffer sb = new StringBuffer();
		sb.append("hello");
		sb.append("world");
		StringBuffer sNew = new StringBuffer();
		sNew.append("ola");
		System.out.println(sb);
		StringBuilder sa = new StringBuilder();
		StringBuilder se = new StringBuilder();
		for(int i = 0;i < 5;i++) {
			System.out.println(sb);
			System.out.println(sb.length());
			sNew.append(sb);
			System.out.println(sNew);
		}
		sb.insert(1, "olaaaaaaaaaa");
		System.out.println(sb);
		sb.delete(1, 10);
		System.out.println(sb);
		StringBuilder sbb = new StringBuilder();
		StringBuilder sbc = new StringBuilder();
		sbb.toString();
		sbc.toString();
		StringBuffer strB = new StringBuffer();
		StringBuffer strC = new StringBuffer();
		strB.append("oi");
		strC.append("oi");
		System.out.println(strB);
		System.out.println(strC);
		String a = "oi";
		String b = "oi";
		if(a == b.intern()) {
			System.out.println("iguais");
		}else {
			System.out.println("Diferentes");
		}
	}

}
