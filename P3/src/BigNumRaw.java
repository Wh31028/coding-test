import java.util.Arrays;
import java.util.Scanner;

public class BigNumRaw {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String input = scanner.nextLine();
        String[] numbers = input.split(" ");

        int[] arr  = new int[Integer.parseInt(numbers[0])];
        int roop = Integer.parseInt(numbers[1]);
        int duplication = Integer.parseInt(numbers[2]);

        for(int i=0;i<arr.length;i++){
            arr[i] = scanner.nextInt();
        }

        for(int i=0;i<arr.length;i++){
            for(int j=i+1;j<arr.length;j++){
                if(arr[i]>=arr[j]){
                    int tmp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = tmp;
                }
            }
        }

        int sum = 0;
        int i = 1;
        while(i<=roop){
            if(i%duplication==0){
                sum+=arr[arr.length-2];
            }else{
                sum+=arr[arr.length-1];
            }
            i++;
        }
        System.out.println(sum);
    }

}
