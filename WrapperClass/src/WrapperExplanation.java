
public class WrapperExplanation {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		//what is a wrapper?
		/*Wrappers vem do verbo inglês “wrap” que significa envolver. Eles são um nome adicional 
		 * ao padrão de projeto Decorator. Tem como principal função “envolver coisas” adicionando 
		 * funcionalidades à ela.
*/
		
		//----------------------------------
		/*O Java conta com diversos Wrappers que adicionam funcionalidades a outras classes ou tipos primitivos,
um exemplo dele é o Integer, que é o Wrapper do tipo primitivo int. Que tipo de funcionalidade você pode executar tendo 
apenas uma variável definida como “int”? Nenhuma, a não ser atribuir valores, pois int é um tipo primitivo e não possuí métodos.*/
		
		/*Então se temos Wrappers porque usar os tipos primitivos? Simples, eles são mais rápidos e consomem menos memória, 
final não tem implementação de métodos ou qualquer outro algoritmo complexo que venha a consumir mais tempo da JVM.*/
		
		//VARIAVEIS PRIMITIVAS SÓ TEM A FUNÇÃO DE VALORAR UMA VARIAVEL, WRAPPER TEM DIVERSAS FUNCTIONS COMO VALUEOF, PARSEINT, ETC
		//NÃO ESQUECER DE QUANDO COMPARAR STRINGS UTILIZAR EQUALS, POIS SÃO OBJETOS, TANTO QUANTO PARA WRAPPERS
		
		//=============================
		/*A diferença entre o equals e o operador ==, é que no operador == ele compara a referência do objeto, 
		 * afinal você está literalmente “comparando” os objetos e mesmo que estes fossem idênticos (em todos os atributos)
		 *  eles ocupam locais diferentes na memória e possuem identificação diferente na JVM, resumindo não são iguais. Utilizando 
		 *  o equals você compara o valor deles, igual como se tivesse comparando dois tipos primitivos.*/
	}

}
