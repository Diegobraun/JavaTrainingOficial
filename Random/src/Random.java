
public class Random {

	public static void main(String[] args) {
		//o metodo random gera um numero aleatorio, no exemplo abaixo fizemos um float, e fizemos * 10, aumentando o range de 0 a 10
		//em seguida fizemos o cast para int, resultando em numeros como 1,4,6
		float x = (float) Math.random()*10;
		System.out.println((int)x);
	}

}
