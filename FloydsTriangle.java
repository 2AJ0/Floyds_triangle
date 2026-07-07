/*
 * Floyd's Triangle
 * ------------------
 * Logic: We keep a single running counter starting at 1.
 * For row i (1 to numRows), we print i numbers, incrementing
 * the counter after every number printed. This naturally produces
 * consecutive natural numbers arranged in a right-angled triangle.
 */

import java.util.Scanner;

public class FloydsTriangle {

    static void printFloydsTriangle(int numRows) {
        int counter = 1;

        for (int i = 1; i <= numRows; i++) {
            StringBuilder sb = new StringBuilder();
            for (int j = 1; j <= i; j++) {
                sb.append(String.format("%4d", counter));
                counter++;
            }
            System.out.println(sb.toString());
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter number of rows: ");
        int numRows = scanner.nextInt();

        if (numRows <= 0) {
            System.out.println("Number of rows must be positive.");
            scanner.close();
            return;
        }

        printFloydsTriangle(numRows);
        scanner.close();
    }
}
