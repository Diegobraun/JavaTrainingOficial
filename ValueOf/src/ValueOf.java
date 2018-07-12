
public class ValueOf {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		/*The valueOf method returns the relevant Number Object holding the value of the argument passed. The argument can be 
		 * a primitive data type, String, etc.
	This method is a static method. The method can take two arguments, where one is a String and the other is a radix.*/
		/*	static Integer valueOf(int i)
			static Integer valueOf(String s)
			static Integer valueOf(String s, int radix)*/
		//-----------------------USING
		/*	i − An int for which Integer representation would be returned.
			s − A String for which Integer representation would be returned.
			radix − This would be used to decide the value of returned Integer based on the passed String.*/
		
		  Integer x =Integer.valueOf(9);
	      Double c = Double.valueOf(5);
	      Float a = Float.valueOf("80");               
	      Integer b = Integer.valueOf("444",16);

	      System.out.println(x); //retorna 9
	      System.out.println(c); //retorna 5.0
	      System.out.println(a); //retorna 80.0
	      System.out.println(b); //retorna 1092
	}

}
