import java.io.*;
import java.util.*;
public class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		int A = Integer.parseInt(st.nextToken());
		int B = Integer.parseInt(st.nextToken());
		
		int max = A;
		int min= B;
		while(min!=0) {
			
			int temp = min;
			min = max%min;
			max = temp;
		}
		System.out.println(max);
		System.out.println(A*B/max);

	}

}
