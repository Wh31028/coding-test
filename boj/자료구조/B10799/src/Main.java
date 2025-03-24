import java.io.*;
public class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		String test = String.valueOf(br.readLine());
		
		int count = 1;
		int ans = 0;
		for(int i=1;i<test.length();i++) {
			
			if(test.charAt(i)==')'&&test.charAt(i-1)=='(') {
				count--;
				ans += count;
			}else if(test.charAt(i)=='(') {
				count++;
			}else if(test.charAt(i)==')') {
				count--;
				ans++;
			}
		}
		System.out.print(ans);

	}

}
