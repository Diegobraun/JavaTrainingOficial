import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

public class Files {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		File file = new File("testeArquivo.txt");
		file.createNewFile();
		FileWriter writer = new FileWriter(file);
		writer.write("Arquivo criado");
		writer.flush();
		writer.close();
		FileReader fr = new FileReader(file); 
	    char [] a = new char[50];
	    fr.read(a);  
	    for(char c : a){
	    	System.out.println(c);
	    }
	    fr.close();
	}

}
