import java.io.*;
import java.util.*;
public class Main {
	
	static class Stack {
		private int count;
		private Node top;
		
		class Node{
			private int data;
			private Node next;
			Node(int num){
				if(top ==null) {
					top = this;
					top.next = null;
				}else {
					this.next = top;
					top = this;
				}
				this.data = num;
				count++;
			}
		}
		
		public void push(int num) {
			Node n = new Node(num);
		}
		
		public int top() {
			if(top==null) return -1;
			return top.data;
		}
		
		public int size() {
			return count;
		}
		
		public int empty() {
			if(count==0) {
				return 1;
			}else return 0;
		}
		
		public int pop() {
			if(top==null) return -1;
			else {
				int data = top.data;
				top = top.next;
				count--;
				return data;
			}
		}
		
		
	}
	
	public static void main(String[] args) throws IOException{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		int N = Integer.parseInt(br.readLine());
		Stack stack = new Stack();
		StringTokenizer st;
		for(int i=0;i<N;i++) {
			st = new StringTokenizer(br.readLine());
			String order = String.valueOf(st.nextToken());
			if(st.hasMoreTokens()) {
				int data = Integer.parseInt(st.nextToken());
				stack.push(data);
			}
			
			if(order.equals("top")) {
				bw.write(String.valueOf(stack.top()));
				bw.newLine();
			}else if(order.equals("size")) {
				bw.write(String.valueOf(stack.size()));
				bw.newLine();
			}else if(order.equals("empty")) {
				bw.write(String.valueOf(stack.empty()));
				bw.newLine();
			}else if(order.equals("pop")) {
				bw.write(String.valueOf(stack.pop()));
				bw.newLine();
			}
			
		}
		
		bw.flush();
		bw.close();
		br.close();
		
		
		

	}

}
