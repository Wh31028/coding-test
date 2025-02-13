import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class Main {

	public static void main(String[] args) throws IOException{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder sb = new StringBuilder();
		String str;
		int N = Integer.parseInt(br.readLine());
		for(int i=1;i<=9;i++) {
			str = N+" * "+i+" = ";
			sb.append(str).append(N*i).append("\n");
		}
		System.out.print(sb);
	}

}
