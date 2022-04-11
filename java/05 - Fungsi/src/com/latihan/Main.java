package com.latihan;
import java.util.*;
public class Main {
    public static void main(String[] args) {
        int a,b,c;
        char operator;
        Scanner inputUser = new Scanner(System.in);
        //angka pertama
        System.out.print("Masukkan Angka pertama: ");
        a=inputUser.nextInt();

        //operator
        System.out.print("masukkan Operator: ");
        operator=inputUser.next().charAt(0);

        //angka kedua
        System.out.printf("Masukkan Angka kedua: ");
        b=inputUser.nextInt();

        //pemanggilan fungsi
        switch (operator) {
            case '+':
                c =penjumlahan(a, b); 
                System.out.printf("%d %c %d = %d",a,operator,b,c);
                break;
            case '-':
                c =pengurangan(a, b);
                System.out.printf("%d %c %d = %d",a,operator,b,c);
                break;
            case '*':
                c =perkalian(a, b);
                System.out.printf("%d %c %d = %d",a,operator,b,c);
                break;
            case '/':
                c =pembagian(a, b);
                System.out.printf("%d %c %d = %d",a,operator,b,c);
                break;
            default:
                System.out.println("salah memasukkan operator");
                break;
        }
        inputUser.close();
    }
    private static int penjumlahan(int a, int b) {
        int c=a+b;
        return c;
    }
    private static int pengurangan(int a, int b) {
        int c=a-b;
        return c;
    }
    private static int perkalian(int a, int b) {
        int c=a*b;
        return c;
    }
    private static int pembagian(int a, int b) {
        int c=a/b;
        return c;
    }

}
