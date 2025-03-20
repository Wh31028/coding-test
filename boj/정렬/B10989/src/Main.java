import java.io.*;
public class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw  = new BufferedWriter(new OutputStreamWriter(System.out));
		int N = Integer.parseInt(br.readLine());
		int arr[] = new int[10001];
		for(int i=0;i<N;i++) {
			int n = Integer.parseInt(br.readLine());
			arr[n]++;
		}
		for(int i=1;i<10001;i++) {
			if(arr[i]>0) {
				for(int j=0;j<arr[i];j++) {
					bw.write(String.valueOf(i));
					bw.newLine();
				}
			}
		}
		
		bw.flush();
		bw.close();
		br.close();

	}

}
