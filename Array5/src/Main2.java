import java.util.Arrays;
import java.util.Scanner;

public class Main2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int [] show = new int[5];
		for(int i = 0;i < show.length;i++) {
			Scanner n1 = new Scanner(System.in);
			int n1Scan = n1.nextInt();
			show[i] = n1Scan;
		}
		int []hide = Arrays.copyOf(show, show.length);
		for(int n:hide) {
			System.out.println(n);
		}
		
	}

}
/*Escreva um main Java que solicita 5 valores ao usuário, armazena esses valores em um array chamado
vet1 de inteiros. Depois, copia o conteúdo desse array para um segundo array chamado vet1. O
programa deve imprimir os dois arrays na tela. */
