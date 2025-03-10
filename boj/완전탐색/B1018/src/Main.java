import java.io.*;
import java.util.*;
public class Main {
	static int N;
	static int M;
	static int result[][] = new int[N+1][M+1];
	static int check(char result[][],int y ,int x) {
		int count1=0;
		int count2 =0;
		
			for(int cy=y;cy<y+8;cy++) {
				for(int cx=x;cx<x+8;cx++) {
					int b = cx+cy;
					if((b%2==0&&result[cy][cx]!='W')||(b%2!=0&&result[cy][cx]!='B')) {
						count1++;
					}
					if((b%2==0&&result[cy][cx]!='B')||(b%2!=0&&result[cy][cx]!='W')) {
						count2++;
					}
				}
			}
		
		
		return Math.min(count1, count2);
		
	}

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		N = Integer.parseInt(st.nextToken());
		M = Integer.parseInt(st.nextToken());
		
		char arr[][] = new char[N+1][M+1];
		
		for(int y = 1;y<=N;y++) {
			String line = br.readLine();
			for(int x=1;x<=M;x++) {
				arr[y][x] = line.charAt(x-1);
			}
		}
		
		
		int rY = N-8+1;
		int rX = M-8+1;
		
		int min= 10000000;
		for(int y=1;y<=rY;y++) {
			for(int x=1;x<=rX;x++) {
				min =Math.min(min,check(arr,y,x));
			}
		}
		System.out.print(min);
	}

}
