
import java.io.*;
public class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder sb = new StringBuilder();
		String str;
		
		int T = Integer.parseInt(br.readLine());
		for(int i=0;i<T;i++) {
			str = br.readLine();
			int a = str.charAt(0)-'0';
			int b = str.charAt(2)-'0';
			
			sb.append("Case #").append(i+1).append(": ").append(a+b).append("\n");
		}
		
		System.out.print(sb);
		
		
		
		
		

	}

}
