import java.io.*;
import java.util.*;
public class Main {
	public static void main(String[] args) throws IOException{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int N = Integer.parseInt(br.readLine());
		
		Map<Long,Integer> map = new HashMap<>();
		
		int max =0;
		long ans = 0;
		for(int i=0;i<N;i++) {
			Long n = Long.valueOf(br.readLine());
			
			map.put(n, map.getOrDefault(n, 0)+1);
			
			if(map.get(n)>max) {
				max = map.get(n);
				ans = n;
			}else if(map.get(n)==max) {
				ans = Math.min(ans,n);
			}
		}
		
			
		
		System.out.println(ans);
		
		

	}

}
