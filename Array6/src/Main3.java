import java.util.Scanner;

public class Main3 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int [] show = new int[5];
		int [] hide = new int [5];
		for(int i = 0;i < show.length;i++) {
			Scanner n1 = new Scanner(System.in);
			int n1Scan = n1.nextInt();
			show[i] = n1Scan;
		}
		for(int i = 0;i < show.length;i--) {
			hide[i+5] = show[i-10];
		}
		for(int n:hide) {
			System.out.println(n);
		}
	}
		

}
/*Modifique o exercício 3 de forma que o conteúdo de vet1 seja copiado para vet2 de forma invertida.
Veja o exemplo:*/
