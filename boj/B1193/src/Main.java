import java.io.*;
public class Main {

	public static void main(String[] args) throws IOException{
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int X = Integer.parseInt(br.readLine());
		
		int i=1;
		for(;i<10000000&&X-i>0;i++) {
			X= X-i;
		}
		
		int a =0;
		int b=0;
		if(i%2==0) {
			a = X;
			b = i-X+1;
		}else {
			a = i-X+1;
			b = X;
			
		}
		
		System.out.print(a+"/"+b);
		

	}

}
