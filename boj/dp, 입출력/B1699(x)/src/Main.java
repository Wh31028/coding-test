import java.io.*;

public class Main {

	public static void main(String[] args) throws IOException{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int N = Integer.parseInt(br.readLine());
		
		int dp[] = new int[N+1];
		int ex = 1;
		dp[1] = 1;
		for(int i=2;i<=N;i++) {
			
			if(Math.pow(ex+1,2)==i) {
				dp[i]=1;
				ex +=1;
			}else {
				dp[i] = dp[i-1]+1;
				for(int j=1;j<=ex;j++) {
					dp[i] = Math.min(dp[i], dp[i-j*j]+1);
				}
			}
			
		}
		
	
		System.out.print(dp[N]);
	}

}


