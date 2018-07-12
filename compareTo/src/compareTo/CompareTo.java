package compareTo;

public class CompareTo {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Integer number = 5; //integer são classes wrapper, possuem métodos e opções a mais
		System.out.println(number.compareTo(5));//retorna 0, pois os valores são iguais
		System.out.println(number.compareTo(6));//retorna -1 porque number é menor
		System.out.println(number.compareTo(4));//retorna 1 porque number é maior
	}

}
