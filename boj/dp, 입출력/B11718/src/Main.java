import java.io.*;

public class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder sb = new StringBuilder();
		String str;
		while((str = br.readLine())!=null) {
			sb.append(str).append("\n");
		}
		System.out.print(sb);

	}

}
