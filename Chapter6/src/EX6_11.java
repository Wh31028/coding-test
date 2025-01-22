import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

public class EX6_11 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        sc.nextLine();
        List<Student> students = new ArrayList<>();
        for (int i = 0; i < N; i++) {
            String[] input = sc.nextLine().split(" ");
            students.add(new Student(input[0], Integer.parseInt(input[1])));
        }
        Collections.sort(students);
        for (Student student : students) {
            System.out.print(student + " ");
        }
    }
}

class Student implements Comparable<Student> {
    String name;
    int age;

    Student(String name, int age) {
        this.name = name;
        this.age = age;
    }

    @Override
    public int compareTo(Student o) {
        if (this.age > o.age) {
            return 1;
        } else if (this.age < o.age) {
            return -1;
        }
        return 0;
    }

    @Override
    public String toString() {
        return name;
    }
}

//NLogN 계수정렬 또는 알고리즘