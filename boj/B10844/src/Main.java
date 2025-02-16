import java.io.*;

public class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int N = Integer.parseInt(br.readLine());
		
		int[] result = new int[10];
		int[] result2 = new int[10];
		
		for(int i=0;i<=9;i++) {
			result[i] = 1;
		}
		
		for(int i=2;i<=N;i++) {
			for(int j=0;j<=9;j++) {
				
				if(j==0) {
					result2[j]= result[1];
				}else if(j==9){
					result2[9] = result[8];
				}
				else {
					result2[j]= (result[j-1]+result[j+1]);
				}
			}
			for(int j=0;j<=9;j++) {
				result[j] = result2[j]%1000000000;
			}
		}
		
		
		int sum = 0;
		for(int i=1;i<=9;i++) {
			sum+=result[i];
			sum%=1000000000;
		}
		
		System.out.print(sum);
		
		

		
	}

}

// 더 좋은 풀이 
//long[][] dp = new long[N + 1][10];
//
////첫 번째 자릿수는 오른쪽 맨 끝의 자릿수이므로 경우의 수가 1개밖에 없음 
//for(int i = 1; i < 10; i++) {
//	dp[1][i] = 1; 
//}
//		
////두 번째 자릿수부터 N까지 탐색 
//for(int i = 2; i <= N; i++) {
//			
//	// i번째 자릿수의 자릿값들을 탐색 (0~9) 
//	for(int j = 0; j < 10; j++) {
//				
//		// j=0, 즉 자릿값이 0이라면 이전 자릿수의 첫번째 자릿수만 가능 
//		if(j == 0) {
//			dp[i][0] = dp[i - 1][1];
//		}
//		// j=9라면 이전 자릿수는 8만 가능
//		else if (j == 9) {
//			dp[i][9] = dp[i - 1][8];
//		}
//		// 그 외의 경우 이전 자릿수의 자릿값 +1, -1 의 합이 됨 
//		else {
//			dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]);
//		}
//	}
//}