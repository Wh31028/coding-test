import java.io.*;
import java.util.*;

public class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		StringTokenizer st;
		LinkedList<Character> list = new LinkedList<>();
		String N = br.readLine();
		int M = Integer.parseInt(br.readLine());
		
		for(int i=0;i<N.length();i++) {
			list.add(N.charAt(i));
		}
		
		ListIterator<Character> cursor=list.listIterator();
		while(cursor.hasNext()) {
			cursor.next();
		}
		for(int i=0;i<M;i++) {
			st = new StringTokenizer(br.readLine());
			
			String order = st.nextToken(); 
			if(order.equals("P")) {
				String input = st.nextToken();
		
				cursor.add(input.charAt(0));
		
			}else if(order.equals("L")) {
				if(cursor.hasPrevious()) {
					cursor.previous();
				}
			}else if(order.equals("D")) {
				if(cursor.hasNext()) {
					cursor.next();
				}
			}else if(order.equals("B")) {
				if(cursor.hasPrevious()) {
					cursor.previous();
					cursor.remove();
					
				}
				
			}
			
			
		}
		
		for(Character a : list) {
			bw.write(a);
		}
		bw.flush();
	}

}
