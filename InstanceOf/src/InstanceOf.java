
public class InstanceOf {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String name = "james";
		boolean result = name instanceof String;
		System.out.println(result);
		Class1 c = new Class2("opa","ola",12,true,true);
		boolean resultado = c instanceof Class1;
		System.out.println(resultado);
	}

}
