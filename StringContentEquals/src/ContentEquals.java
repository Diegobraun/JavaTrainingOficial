
public class ContentEquals {

	public static void main(String[] args) {
		//o metodo contentEquals compara o conteudo de duas strings, como stringbuffer. Assim retornando um booleano
		String a = "hello";
		String b = "hi";
		StringBuffer x = new StringBuffer("hello");
		boolean tr = a.contentEquals(x);
		System.out.println(tr);
	}

}
