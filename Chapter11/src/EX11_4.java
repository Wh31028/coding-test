import java.util.*;

public class C11_4 {
    public static List<Integer> nums = new ArrayList<>();

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for (int i = 0; i < n; i++) {
            nums.add(sc.nextInt());
        }
        Collections.sort(nums);

        int target = 1;
        for (int i = 0; i < n; i++) {
            if (nums.get(i) > target) {
                break;
            }
            target += nums.get(i);

        }
        System.out.println(target);
    }
}


/*   그냥 구현한 거 틀렸을 수 도
 Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i=0;i<n;i++){
            arr[i] =sc.nextInt();
        }
        Set<Integer> nums = new HashSet<>();

        for(int i=0;i<n;i++){
            int sum = 0;
            for(int j=i;j<n;j++){
                sum += arr[j];
                nums.add(sum);
            }
        }

        List<Integer> numList = new ArrayList<>(nums);
        Collections.sort(numList);
        int i = 1;
        while(numList.get(i-1)==i){
            i++;
        }
        System.out.println(i);

 */