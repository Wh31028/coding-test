import java.io.*;
import java.util.*;
public class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st= new StringTokenizer(br.readLine());
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		
		int N = Integer.parseInt(st.nextToken());
		int K = Integer.parseInt(st.nextToken());
		
		LinkedList<Integer> que = new LinkedList<>();
		
		
		for(int i=1;i<=N;i++) {
			que.add(i);
		}
		int count = 0;
		int n=0;
		bw.write("<");
		while(!que.isEmpty()) {
			
			n = que.getFirst();
			que.removeFirst();
			count++;
			
			if(que.isEmpty()) break;
			
			if(count==K) {
				bw.write(n+", ");
				count=0;
			}else {
				que.add(n);
			}
			
			
			
		}
		bw.write(n+">");
		bw.flush();
		bw.close();
		br.close();
	}

}
