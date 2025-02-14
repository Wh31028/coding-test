import java.io.*;
public class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		int N = Integer.parseInt(br.readLine());
		br.close();
		
		for(int i=0;i<N-1;i++) {
			for(int j=0;j<N-i-1;j++) {
				bw.write(" ");
			}
			bw.write("*");
			for(int j=0;j<2*i-1;j++) {
				bw.write(" ");
			}
			if(i>=1) bw.write("*");
			bw.newLine();
		}
		
		for(int i=0;i<2*N-1;i++) {
			bw.write("*");
		}
		
		bw.flush();
		bw.close();
	}
}