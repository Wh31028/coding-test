import java.io.*;
import java.util.*;
public class Main {
	
	static class Student implements Comparable<Student>{
		int korean;
		int english;
		int math;
		String name;
		
		Student(String name,int korean,int english,int math){
			this.name = name;
			this.korean = korean;
			this.english = english;
			this.math = math;
		}

		@Override
		public int compareTo(Main.Student o) {
			if(this.korean!=o.korean) {
				return o.korean-this.korean;
			}else if(this.english!=o.english) {
				return this.english-o.english;
			}else if(this.math!=o.math) {
				return o.math-this.math;
			}else {
				return this.name.compareTo(o.name);
			}
			
		}
	}
	
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int N = Integer.parseInt(br.readLine());
		StringTokenizer st;
		Student arr[] = new Student[N];
		for(int i=0;i<N;i++) {
			st = new StringTokenizer(br.readLine());
			String name = String.valueOf(st.nextToken());
			int korean = Integer.parseInt(st.nextToken());
			int english = Integer.parseInt(st.nextToken());
			int math = Integer.parseInt(st.nextToken());
			arr[i] = new Student(name,korean,english,math);
		}
		
		Arrays.stream(arr).sorted().forEach((student)->System.out.println(student.name));
		
		

	}

}
