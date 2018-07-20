import java.util.Scanner;

public class Array {

	public static void main(String[] args) {
		int values[] = new int[5];
		for(int i = 0;i < values.length;i++) {
			Scanner scan = new Scanner(System.in);
			int scanScanner = scan.nextInt();
			values[i] = scanScanner;
		}
		for(int n:values) {
			System.out.print(n);
		}
	}

}
