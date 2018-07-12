
public class CopyValueOf {

	public static void main(String[] args) {
		//o metodo copyvalueof copia um vetor de char para outra var vazia, transformando em string
		char [] a = {'d','s','a'};
		String b = "";
		b = b.copyValueOf(a);
		System.out.println(b);
	}

}
