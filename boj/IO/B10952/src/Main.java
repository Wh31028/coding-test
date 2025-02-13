import java.io.*;

public class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder sb = new StringBuilder();
		
		String str;
		while(true) {
			str = br.readLine();
			int a = str.charAt(0)-'0';
			int b = str.charAt(2)-'0';
			if(a==0&&b==0) break;
			sb.append(a+b).append("\n");
		}
		System.out.print(sb);
		

	}

}
