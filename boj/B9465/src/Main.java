import java.io.*;
import java.util.*;
public class Main {

	public static void main(String[] args) throws IOException{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		int T = Integer.parseInt(br.readLine());
		
		for(int i=0;i<T;i++) {
			int n = Integer.parseInt(br.readLine());
			int result[][] = new int[2][n+1];
			
			for(int j=0;j<2;j++) {
				StringTokenizer st = new StringTokenizer(br.readLine());
				for(int k=0;k<n;k++) {
					result[j][k] = Integer.parseInt(st.nextToken());
				}
			}
			
			result[0][1] = result[0][1]+result[1][0];
			result[1][1] = result[1][1]+ result[0][0];
			
			for(int j=2;j<n;j++) {
				result[0][j] = result[0][j]+ Math.max(result[1][j-1],result[1][j-2]);   
				result[1][j] = result[1][j]+ Math.max(result[0][j-1],result[0][j-2]);
			}
			
			int max = Math.max(result[0][n-1], result[1][n-1]);
			
			bw.write(String.valueOf(max));
			bw.newLine();
			
			
			
		}
		br.close();
		bw.flush();
		bw.close();
		
	

	}

}
