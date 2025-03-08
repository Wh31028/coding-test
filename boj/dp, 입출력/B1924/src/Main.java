import java.io.*;
import java.util.*;
public class Main {

	private static int[] days = {31,28,31,30,31,30,31,31,30,31,30,31};
	private static String[] day = {"SUN","MON","TUE","WED","THU","FRI","SAT"};
	public static void main(String[] args) throws IOException{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine()," ");
		int M = Integer.parseInt(st.nextToken());
		int D = Integer.parseInt(st.nextToken());
		
		for(int i=1;i<M;i++) {
			D +=days[i-1];
		}
		
		System.out.print(day[D%7]);
		
		
		

	}

}
