import java.io.*;
import java.util.*;
public class Main {

	public static void main(String[] args) throws IOException {
			BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
			StringTokenizer st = new StringTokenizer(br.readLine());
			
			String A = st.nextToken();
			String B = st.nextToken();
			String C = st.nextToken();
			String D = st.nextToken();
			
			long a = Long.valueOf(A+B);
			long b = Long.valueOf(C+D);
			long ans = a+b;
			System.out.print(ans);
	}

}
