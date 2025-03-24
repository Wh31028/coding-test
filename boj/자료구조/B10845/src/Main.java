import java.io.*;
import java.util.*;

public class Main {
	static class Queue{
		private Node front;
		private Node back;
		private int size;
		class Node{
			int data;
			Node next;
			
			Node(int data){
				this.data = data;
				size++;
				if(front==null) {
					front = this;
					back = this;
				}else {
					back.next = this;
					back = this;
				}
			}
		}
		
		void push(int data) {
			Node n = new Node(data);
		}
		
		int front() {
			if(front==null) return -1;
			return front.data;
		}
		
		int back(){
			if(front==null) return -1;
			return back.data;
		}
		
		int size() {
			return size;
		}
		
		int empty() {
			if(front==null) return 1;
			return 0;
		}
		
		int pop() {
			if(front==null) return -1;
			int data = front.data;
			front = front.next;
			size--;
			return data;
		}
		
	}

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		int N = Integer.parseInt(br.readLine());
		StringTokenizer st;
		Queue que = new Queue();
		for(int i=0;i<N;i++) {
			st = new StringTokenizer(br.readLine());
			String order = String.valueOf(st.nextElement());
			
			if(st.hasMoreTokens()) {
				int num = Integer.parseInt(st.nextToken());
				que.push(num);
			}
			if(order.equals("front")) {
				bw.write(String.valueOf(que.front()));
				bw.newLine();
			}else if(order.equals("back")) {
				bw.write(String.valueOf(que.back()));
				bw.newLine();
			}else if(order.equals("size")) {
				bw.write(String.valueOf(que.size()));
				bw.newLine();
			}else if(order.equals("empty")) {
				bw.write(String.valueOf(que.empty()));
				bw.newLine();
			}else if(order.equals("pop")) {
				bw.write(String.valueOf(que.pop()));
				bw.newLine();
			}
		}
		bw.flush();
		bw.close();
		br.close();

	}

}
