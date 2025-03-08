import java.io.*;
public class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		int N = Integer.parseInt(br.readLine());
		br.close();
		
		for(int i=1;i<=N;i++) {
			for(int j=0;j<i;j++) {
				bw.write("*");
			}
			for(int j=0;j<2*N-2*i;j++) {
				bw.write(" ");
			}
			for(int j=0;j<i;j++) {
				bw.write("*");
			}
			bw.newLine();
		}
		
		for(int i=N-1;i>0;i--) {
			for(int j=0;j<i;j++) {
				bw.write("*");
			}
			for(int j=0;j<2*N-2*i;j++) {
				bw.write(" ");
			}
			for(int j=0;j<i;j++) {
				bw.write("*");
			}
			bw.newLine();
		}
		
		bw.flush();
		bw.close();
	}
}