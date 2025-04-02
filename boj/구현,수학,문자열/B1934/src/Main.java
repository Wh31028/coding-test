import java.io.*;
import java.util.*;
public class Main {
	
	static int gcd(int big,int small) {
		
		while(small!=0) {
			int temp = small;
			small = big%small;
			big = temp;
					
		}
		return big;
		
	}

	public static void main(String[] args) throws IOException{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		int T = Integer.parseInt(br.readLine());
		StringTokenizer st;
		for(int i=0;i<T;i++) {
			st = new StringTokenizer(br.readLine());
			int a = Integer.parseInt(st.nextToken());
			int b = Integer.parseInt(st.nextToken());
			
			
			int gcdN= gcd(Math.max(a, b),Math.min(a, b));
			
			bw.write(String.valueOf(a*b/gcdN));
			bw.newLine();
		
			
		}
		bw.flush();
		bw.close();
		br.close();
		
	}

}
