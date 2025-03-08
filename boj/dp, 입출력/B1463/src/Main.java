import java.io.*;
public class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int N = Integer.parseInt(br.readLine());
		
		int[] count = new int[1000001];
		
		
		for(int i=2;i<=N;i++) {
			int min = 1000000000;
			if(i%3==0&&min>count[i/3]) min = count[i/3];
			if(i%2==0&&min>count[i/2]) min = count[i/2];
			if(min>count[i-1]) min = count[i-1];
			
			count[i] = min+1;
			
		}
		System.out.print(count[N]);

	}

}
