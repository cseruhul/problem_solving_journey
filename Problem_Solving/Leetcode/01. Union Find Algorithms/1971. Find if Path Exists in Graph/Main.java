import java.util.Scanner;

//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        int n, source, destination;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter no. of elements in the array:");
        n = sc.nextInt();
        System.out.print("Enter source: ");
        source = sc.nextInt();
        System.out.print("Enter destination: ");
        destination = sc.nextInt();
        WeightedQuickUnion qu = new WeightedQuickUnion(n);
        int arr[][]={{0, 1},{0, 2},{3,5}, {5,4},{4,3}};
        for (int i = 0; i < arr.length; i++) {
            qu.union(arr[i][0],arr[i][1]);
        }
        System.out.println(qu.isConnected(source, destination));
    }
}