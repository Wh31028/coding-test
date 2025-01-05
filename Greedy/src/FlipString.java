import java.util.Scanner;

import static java.lang.Math.min;

public class FlipString {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine();

        int count0 = 0;
        int count1 = 0;
        String[] inputNum = input.split("");

        String pre = inputNum[0];
        if(pre.equals("0")){
            count0++;
        }else{
            count1++;
        }
        for(int i=1;i<inputNum.length;i++){
            if(!inputNum[i].equals(pre)&&inputNum[i].equals("0")){
                count0++;
            }else if(!inputNum[i].equals(pre)&&inputNum[i].equals("1")){
                count1++;
            }
            pre = inputNum[i];
        }
        System.out.println(min(count0,count1));

    }
}

//문자열 뒤집기
//111000111
//110010011
//101011001
//011001011
//1  카운트  0 카운트 비교해서 작은거