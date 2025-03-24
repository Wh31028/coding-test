import java.io.*;
public class Main {
	
	static void check(String test) {
		int count=0;
		int rcount = 0;
		
		for(int i=0;i<test.length();i++) {
			if(test.charAt(i)=='(') {
				count++;
			}else if(test.charAt(i)==')') {
				count--;
			}
			if(count<0) {
				System.out.println("NO");
				return;
			}
		}
		
		if(count!=0) {
			System.out.println("NO");
			return;
		}
		
		System.out.println("YES");
	}
	

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int T = Integer.parseInt(br.readLine());
		
		for(int i=0;i<T;i++) {
			String test = String.valueOf(br.readLine());
			check(test);
		}

	}

}
