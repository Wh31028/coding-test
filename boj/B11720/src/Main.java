import java.io.*;
public class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int N = Integer.parseInt(br.readLine());
		int sum =0;
		String str = br.readLine();
		for(int i=N-1;i>=0;i--) {
			int a = str.charAt(i)-'0';
			sum+= a;
		}
		System.out.print(sum);

	}

}                                                                                                                
