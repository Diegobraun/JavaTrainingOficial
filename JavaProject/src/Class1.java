import java.util.ArrayList;
import java.util.Scanner;


public class Class1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		/*ArrayList<String> array = new ArrayList<>();
		for(int i = 0;i < 10;i++) {
			Scanner n1 = new Scanner(System.in);
			String scanScanner = n1.next();
			array.add(scanScanner);
		}
		for(String n:array) {
			System.out.println(n);
		}*/
		
		int [] vetor = new int [5] ;
		for(int i = 0;i < vetor.length;i++) {
			System.out.println("Valor a ser posto no array: ");
			Scanner n = new Scanner(System.in);
			int scanN = n.nextInt();
				vetor[i] = scanN;
		}
		for(int i = 0;i < vetor.length;i++) {
			if(vetor[i] % 2==0) {
				System.out.println(vetor[i]);
			}
			
		}
		
	}

}
