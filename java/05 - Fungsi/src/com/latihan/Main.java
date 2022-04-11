package com.latihan;
import java.util.*;
public class Main {
    public static void main(String[] args) {
        float a,b,c;
        char operator;
        Scanner inputUser = new Scanner(System.in);
        //angka pertama
        System.out.print("Masukkan Angka pertama: ");
        a=inputUser.nextFloat();

        //operator
        System.out.print("masukkan Operator: ");
        operator=inputUser.next().charAt(0);

        //angka kedua
        System.out.printf("Masukkan Angka kedua: ");
        b=inputUser.nextFloat();

        //pemanggilan fungsi
        switch (operator) {
            case '+':
                c = penjumlahan(a, b); 
                System.out.printf("%.2f %c %.2f = %.2f",a,operator,b,c);
                break;
            case '-':
                c = pengurangan(a, b);
                System.out.printf("%.2f %c %.2f =%.2f",a,operator,b,c);
                break;
            case '*':
                c = perkalian(a, b);
                System.out.printf("%.2f %c %.2f = %.2f",a,operator,b,c);
                break;
            case '/':
                c = pembagian(a, b);
                System.out.printf("%.2f %c %.2f = %.2f",a,operator,b,c);
                break;
            default:
                System.out.println("salah memasukkan operator");
                break;
        }
        inputUser.close();
    }
    private static float penjumlahan(Float a, Float b) {
        float c=a+b;
        return c;
    }
    private static float pengurangan(float a, float b) {
        float c=a-b;
        return c;
    }
    private static float perkalian(float a, float b) {
        float c=a*b;
        return c;
    }
    private static float pembagian(float a, float b) {
        float c=(float)a/b;
        return c;
    }
}
