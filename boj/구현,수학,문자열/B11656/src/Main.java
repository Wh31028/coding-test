import java.io.*;
import java.util.Arrays;
public class Main {

	public static void main(String[] args) throws IOException {
		 BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		 
		 String S = br.readLine();
		 String arr[] = new String[S.length()];
		 for(int i=0;i<S.length();i++) {
			 
			 arr[i] = S.substring(i,S.length());
		 }
		 
//		 Arrays.sort(arr,(s1,s2)->{
//			 return s1.compareTo(s2);
//		 });
		 Arrays.sort(arr);
		 for(int i=0;i<S.length();i++) {
			 System.out.println(arr[i]);
			 
		 }
		 

	}

}
