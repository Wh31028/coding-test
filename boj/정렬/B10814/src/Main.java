import java.io.*;
import java.util.*;
public class Main {
	static class User implements Comparable<User>{
		int index;
		int age;
		String name;
		User(int index,int age,String name){
			this.index = index;
			this.age = age;
			this.name =name;
		}
		@Override
		public int compareTo(User o) {
			if(this.age==o.age) {
				return this.index-o.index;
			}
			return this.age-o.age;
		}
		
		
	}

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st;
		int N = Integer.parseInt(br.readLine());
		User arr[] = new User[N];
		for(int i=0;i<N;i++) {
			st = new StringTokenizer(br.readLine());
			int age =Integer.parseInt(st.nextToken());
			String name=String.valueOf(st.nextToken());
			arr[i] = new User(i,age,name);
		}
		
		Arrays.stream(arr).sorted().forEach((user)->{
			System.out.println(user.age+" "+user.name);
		});

	}

}
