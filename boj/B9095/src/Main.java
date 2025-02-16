import java.io.*;
public class Main {
	
	public static int dp(int n) {
		int result[] = new int[1000000];
		result[1] = 1;
		result[2] = 2;
		result[3] = 4;
		
		for(int i=4;i<=n;i++) {
			result[i] = result[i-1] + result[i-2]+result[i-3];
		}
		
		return result[n];
	}
	
	
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

		int T = Integer.parseInt(br.readLine());
		for(int i=0;i<T;i++) {
			int n = Integer.parseInt(br.readLine());
			bw.write(String.valueOf(dp(n)));
			bw.newLine();
		}
		
		br.close();
		bw.flush();
		bw.close();

	}

}
