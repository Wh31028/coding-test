import java.io.*;
import java.util.*;
public class Main {
	static class Deque{
		private Node front;
		private Node back;
		int size;
		
		class Node{
			int data;
			Node pre;
			Node next;
			Node(int data){
				this.data = data;
				if(front==null) {
					front = this;
					back = this;
				}
			}
		}
		
		void push_front(int data) {
			if(front==null) {
				Node n = new Node(data);
				size++;
			}else {
				Node n = new Node(data);
				n.next = front;
				front.pre = n;
				front = n;
				size++;
			}
		}
		void push_back(int data) {
			if(back==null) {
				Node n = new Node(data);
				size++;
			}else {
				Node n = new Node(data);
				n.pre = back;
				back.next = n;
				back = n;
				size++;
			}
		}
		int pop_front() {
			if(front==null) return -1;
			int data = front.data;
			
			if(front.next==null) {
				front=null;
				back=null;
			}else {
				front = front.next;
				front.pre = null;
			}
			size--;
			return data;
		}
		
		int pop_back() {
			if(back==null) return -1;
			int data = back.data;
			if(back.pre==null) {
				front=null;
				back=null;
			}else {
				back = back.pre;
				back.next = null;
			}
			size--;
			return data;
			
		}
		
		int size() {
			return size;
		}
		
		int empty() {
			if(size==0) return 1;
			return 0;
		}
		
		int front() {
			if(front==null) return -1;
			return front.data;
		}
		
		int back() {
			if(back==null) return -1;
			return back.data;
		}
	}
	public static void main(String[] args) throws IOException{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		int N = Integer.parseInt(br.readLine());
		StringTokenizer st;
		Deque deq = new Deque();
		for(int i=0;i<N;i++) {
			st = new StringTokenizer(br.readLine());
			String order = st.nextToken();
			
			if(st.hasMoreTokens()) {
				int num = Integer.parseInt(st.nextToken());
				if(order.equals("push_back")) deq.push_back(num);
				else if(order.equals("push_front")) deq.push_front(num);; 
			}
			
			if(order.equals("front")) {
				bw.write(String.valueOf(deq.front()));
				bw.newLine();
			}else if(order.equals("back")) {
				bw.write(String.valueOf(deq.back()));
				bw.newLine();
			}
			else if(order.equals("empty")) {
				bw.write(String.valueOf(deq.empty()));
				bw.newLine();
			}else if(order.equals("size")) {
				bw.write(String.valueOf(deq.size()));
				bw.newLine();
			}else if(order.equals("pop_front")) {
				bw.write(String.valueOf(deq.pop_front()));
				bw.newLine();
			}else if(order.equals("pop_back")) {
				bw.write(String.valueOf(deq.pop_back()));
				bw.newLine();
			}
		}
		bw.flush();
		bw.close();
		br.close();

	}

}
