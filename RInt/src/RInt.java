
public class RInt {

	public static void main(String[] args) {
		//o metodo rint  faz o ajuste pra cima ou para baixo dependendo do valor dar casas decimais;
		double d = 301.560;
		double c = 301.400;
		System.out.println(Math.rint(d));//retorna 302.0
		System.out.println(Math.rint(c));//retorna 301.0
	}

}
