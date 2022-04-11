package com.latihan;
import java.util.*;
public class Main {
    public static void main(String[] args) {
        int a,b,c;
        Scanner inputUser = new Scanner(System.in);
        System.out.print("Masukkan Angka pertama: ");
        a=inputUser.nextInt();
        System.out.printf("Masukkan Angka kedua: ");
        b=inputUser.nextInt();
        c=penjumlahan(a,b);
        System.out.printf("%d + %d = %d",a,b,c);
        inputUser.close();
    }
    private static int penjumlahan(int a, int b) {
        int c=a+b;
        return c;
    }
}
