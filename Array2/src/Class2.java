import java.util.Scanner;

public class Class2 {
	public boolean arr() {
		boolean [] array = new boolean[5];
		for(int i = 0;i < array.length;i++) {
			Scanner sc = new Scanner(System.in);
			int scScanner = sc.nextInt();
			if(scScanner > -1) {
				array[i] = true;
			}else {
				array[i] = false;
			}
		}
		return array[5];
	}
}
/*Escreva um m�todo que recebe um array de inteiros a e devolve um array de boolean
onde, cada posi��o indique true se o elemento da posi��o correspondente de a � positivo e false
caso seja negativo ou zero.*/
