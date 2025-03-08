import java.io.*;
import java.util.*;
public class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int N = Integer.parseInt(br.readLine());
		
		int min = 1000000;
		int max = -1000000;
		
		StringTokenizer st = new StringTokenizer(br.readLine()," ");
		for(int i=0;i<N;i++) {
			int num = Integer.parseInt(st.nextToken());
			if(num>max) max = num;
			if(num<min) min = num;
		}
		
		System.out.print(min+" "+max);
		
		

	}

}
