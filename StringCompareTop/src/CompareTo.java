
public class CompareTo {

	public static void main(String[] args) {
		/*The value 0 if the argument is a string lexicographically equal to this string; a value less than 
		 * 0 if the argument is a string lexicographically greater than this string; and a value greater than 
		 * 0 if the argument is a string lexicographically less than this string.*/
		String a = "ee";
		String b = new String("ee");
		String c = new String("f");
		int result = a.compareTo(b);
		System.out.println(result);//Retorna 0
		int result2 = b.compareTo(c);
		System.out.println(result2);//Retorna -1
	}

}
