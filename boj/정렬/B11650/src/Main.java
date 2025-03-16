import java.io.*;
import java.util.*;

public class Main {
	
	static class Point {
		int x;
		int y;
		
		Point(int x,int y){
			this.x=x;
			this.y=y;
		}
		
		
	}
	

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int N = Integer.parseInt(br.readLine());
		StringTokenizer st;
		Point arr[] = new Point[N];
		for(int i=0;i<N;i++) {
			st=new StringTokenizer(br.readLine());
			int x= Integer.parseInt(st.nextToken());
			int y= Integer.parseInt(st.nextToken());
			arr[i] = new Point(x,y);
		}
		
		Comparator<Point> comparator = new Comparator<Point>() {
			public int compare(Point p1,Point p2) {
				if(p1.x==p2.x) {
					return Integer.compare(p1.y,p2.y);
				}else {
					return Integer.compare(p1.x,p2.x);
				}
			}
		};
		
		Arrays.sort(arr,comparator);
		
		for(int i=0;i<N;i++) {
			System.out.println(arr[i].x+" "+arr[i].y);
		}
		

	}

}
