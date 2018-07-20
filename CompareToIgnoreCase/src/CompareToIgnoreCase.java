
public class CompareToIgnoreCase {

	public static void main(String[] args) {
		/*This method returns a negative integer, zero, or a positive integer as the specified String is 
		 * greater than, equal to, or less than this String, ignoring case considerations.*/
		String a = "ola";
		String b = "HEAJ";
		int result = a.compareToIgnoreCase(b);//ignore case faz o case sensitive acabar
		System.out.println(result);
	}

}
