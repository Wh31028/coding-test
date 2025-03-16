import java.io.*;
import java.util.*;

public class Main {
	
	static class Point implements Comparable<Point>{
		int x;
		int y;
		
		Point(int x,int y){
			this.x=x;
			this.y=y;
		}
		
		public int compareTo(Point p1) {
			if(this.x==p1.x) {
				return (this.y-p1.y);
			}else {
				return this.x-p1.x;
			}
		}
		
		
	}
	

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		int N = Integer.parseInt(br.readLine());
		StringTokenizer st;
		Point arr[] = new Point[N];
		for(int i=0;i<N;i++) {
			st=new StringTokenizer(br.readLine());
			int x= Integer.parseInt(st.nextToken());
			int y= Integer.parseInt(st.nextToken());
			arr[i] = new Point(x,y);
		}
		
		Arrays.stream(arr)
	      .sorted(Point::compareTo)
	      .forEach(p -> {System.out.println(p.x+" "+p.y);
	      });
	    
		

	}

}
