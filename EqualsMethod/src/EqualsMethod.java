
public class EqualsMethod {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Integer x = 5;
		Integer y = 10;
		Integer z = 5;
		System.out.println(x.equals(y));//false
		System.out.println(x.equals(z));//true
		/*The method returns True if the argument is not null and is an object of the same type 
		 * and with the same numeric value. There are some extra requirements for Double and Float 
		 * objects that are described in the Java API documentation.
		 */
	}

}
