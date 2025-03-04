import java.io.*;
import java.util.*;

public class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int N = Integer.parseInt(br.readLine());

		StringTokenizer st = new StringTokenizer(br.readLine());
		int[] arr = new int[N];
		int[] answer = new int[N];
		
		for(int i=0;i<N;i++) {
			arr[i] = Integer.parseInt(st.nextToken());
		}
			
		answer[0] = 1;
		
		int ans = 1;
		for(int i=1;i<N;i++) {
			answer[i] = 1;
			for(int j=0;j<i;j++) {
				if(arr[i]>arr[j]&&answer[i]<=answer[j]) {
					answer[i] = answer[j]+1;
				}
			}
			ans = Math.max(ans, answer[i]);

		}
		
		System.out.print(ans);
	}

}
