import java.io.*;
public class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		String S = String.valueOf(br.readLine());
		int[] arr = new int[26];
		for(int i=0;i<S.length();i++) {
			arr[S.charAt(i)-'a']++;
		}
		
		for(int i=0;i<26;i++) {
			bw.write(String.valueOf(arr[i])+" ");
		}
		bw.flush();
		bw.close();
		br.close();
	}

}
