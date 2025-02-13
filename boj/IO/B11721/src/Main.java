import java.io.*;
public class Main {

	public static void main(String[] args) throws IOException{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder sb = new StringBuilder();
		
		String str = br.readLine();
	
		
		while(str.length()>10) {
			sb.append(str.substring(0,10)).append("\n");
			str = str.substring(10,str.length());
		}
		sb.append(str);
		System.out.print(sb);

	}

}
