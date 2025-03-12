import java.io.*;
public class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String input = br.readLine();
		
		long dp[] = new long[input.length()+1];
		dp[0]=1;
		
		for(int i=1;i<=input.length();i++) {
			int now = input.charAt(i-1)-'0';
			
			if(now!=0) dp[i]+=dp[i-1];
			if(i==1) continue;
			int pre = input.charAt(i-2)-'0';
			if(pre==0) continue;
			int value = pre*10+now;
			if(value>=10&&value<=26) {
				dp[i]+=dp[i-2];
				dp[i]%=1000000;
			}
			
			
		}
		
		System.out.print(dp[input.length()]);
		
		

	}

}
