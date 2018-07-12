
public class Convert {

	public static void main(String[] args) {
		//O método xxxValue converte o valor de uma wrapper class para um tipo primitivo
		Integer x = 5;
		System.out.println(x.doubleValue());//retorna 5.0
		System.out.println(x.intValue());//retorna 5
		System.out.println(x.longValue());//retorna 5
	}

}
