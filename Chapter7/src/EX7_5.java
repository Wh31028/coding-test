import java.util.Arrays;
import java.util.Scanner;

public class EX7_5 {
    public static void binarySearch(int[] arr,int target,int start,int end){
        if(start > end) {
            System.out.print("no ");
            return;
        }
        int mid = (start + end)/2;
        if(arr[mid] == target){
            System.out.print("yes ");
            return;
        } else if(arr[mid] > target){
            binarySearch(arr, target, start, mid - 1);
        }else {
            binarySearch(arr,target,mid + 1, end);
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int arr[]= new int[N];
        for(int i=0;i<N;i++){
            arr[i]=sc.nextInt();
        }
        Arrays.sort(arr);
        int M = sc.nextInt();
        for(int i=0;i<M;i++){
            binarySearch(arr,sc.nextInt(),0,N-1);
        }
    }
}
