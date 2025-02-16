import java.io.*;
public class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in)) ;
		int n = Integer.parseInt(br.readLine());
		
		int result[] = new int[1001];
		
		result[1] = 1;
		result[2] = 3;
		for(int i=3;i<=n;i++) {
			result[i] = (result[i-1]+result[i-2]*2)%10007;
		}
		
		System.out.print(result[n]);

	}

}
