import java.io.*;

public class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder sb = new StringBuilder();
		String str;
		while((str = br.readLine())!=null) {
			if(str.equals("\n")) sb.append(str);
			else sb.append(str).append("\n"); //굳이 if 안 해도 통과 
		}
		System.out.print(sb);

	}

}
