import java.io.*;
public class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String S = br.readLine();
		char[] arr = new char[S.length()];
		
		for(int i=0;i<S.length();i++) {
			char s = S.charAt(i);
			if(s>='A' && s<='Z'-13) {
				arr[i]= (char)((s+13));
			}else if(s>'Z'-13&&s<='Z') {
				arr[i]= (char)((s+13)%90+64);
			}else if(s>='a'&&s<='z'-13){
				arr[i]= (char)(s+13);
			}else if(s>'z'-13 &&s<='z'){
				arr[i]= (char)((s+13)%122+96);
			}else {
				arr[i] = s;
			}
			System.out.print(arr[i]);
		}

	}

}
