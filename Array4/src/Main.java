import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int [] sh = new int[5];
		int up = 0;
		for(int i = 0;i<sh.length;i++) {
			Scanner n1 = new Scanner(System.in);
			int n1Scan = n1.nextInt();
			sh[i] = n1Scan;
			if(i==0) {
				up = i;
			}else {
				if(sh[i] > up) {
					up = i;
				}else {
					up = up;
				}
			}
		}
		System.out.println(up);
	}

}
/*Escreva um main Java que solicita 8 inteiros ao usuário e guarda esses valores em um array. Depois o
programa deve descobrir e exibir qual a posição do elemento de maior valor. */
