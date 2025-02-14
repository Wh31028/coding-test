
import java.io.*;
public class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder sb = new StringBuilder();
		String str;
		String str1;
		int T = Integer.parseInt(br.readLine());
		for(int i=1;i<=T;i++) {
			str = br.readLine();
			int a = str.charAt(0)-'0';
			int b = str.charAt(2)-'0';
			str1 = a+" + "+b+" = ";
			sb.append("Case #").append(i).append(": ").append(str1).append(a+b).append("\n");
		}
		
		System.out.print(sb);
		
		
		
		
		

	}

}
