import java.util.Scanner;

public class Class1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int [] values = new int[10];
		int quantCount = 0;
		System.out.println("Digite um valor para x: ");
		Scanner n1 = new Scanner(System.in);
		int n1Scanner = n1.nextInt();
		for(int i = 0;i < values.length;i++) {
			Scanner et = new Scanner(System.in);
			int etScanner = et.nextInt();
			values[i] = etScanner;
			if(values[i]==n1Scanner) {
				quantCount++;
			
			}
		}
		System.out.println("Quantidade "+quantCount);

	}
}
/*Crie um método que recebe um array de inteiros a e um valor inteiro x e retorna a
quantidade de vezes que x aparece no array a.
*/
