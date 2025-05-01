import java.io.*;
import java.util.*;
public class Main {
	

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		StringTokenizer st = new StringTokenizer(br.readLine());
		Long a = Long.valueOf(st.nextToken());
		Long b= Long.valueOf(st.nextToken());
		
		long n = Math.max(a, b) % Math.min(a, b);
	
		if(n==0) {
				for(long i=0;i<Math.min(a, b)%9;i++) {	
					bw.write(String.valueOf(1));
				}
		}else {
				for(long i=0;i<n%9;i++) {
					bw.write(String.valueOf(1));
				}
		}
		
		bw.flush();
		bw.close();
		br.close();
	}

}
