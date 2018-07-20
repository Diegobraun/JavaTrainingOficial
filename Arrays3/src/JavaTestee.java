import java.util.Scanner;

public class JavaTestee {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		boolean [] bool = new boolean[5];
		for(int i = 0;i < bool.length;i++) {
			Scanner scan = new Scanner(System.in);
			int scanScanner = scan.nextInt();
			if(scanScanner > -1) {
				bool[i] = true;
			}else {
				bool[i] = false;
			}
		}
		for(int i = 0;i < bool.length;i++) {
			System.out.println(bool[i]);
		}
	}

}
