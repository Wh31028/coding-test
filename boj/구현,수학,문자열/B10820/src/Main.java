import java.io.*;
public class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		
		String N;
		
		while((N = br.readLine())!=null) {
			int arr[] = new int[4];
			for(int i=0;i<N.length();i++) {
				char n = N.charAt(i);
				
				if(n>='a' &&n<='z') {
					arr[0]++;
				}else if(n>='A'&&n<='Z') {
					arr[1]++;
				}else if(n>='0'&&n<='9') {
					arr[2]++;
				}else if(n==' ') {
					arr[3]++;
				}
				
			}
			bw.write(arr[0]+" "+arr[1]+" "+arr[2]+" "+arr[3]+"\n");
			bw.flush();
		}
		
		
	}

}
