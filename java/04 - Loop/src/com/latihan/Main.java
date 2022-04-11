package com.latihan;
import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner inputUser = new Scanner(System.in);
        System.out.print("Masukkan angka: ");
        int a=inputUser.nextInt();
        for(int i=0;i<a;i++){
            for (int j=0;j<a;j++){
                System.out.printf("* ");
                if(j==i){
                    break;
                }
            }
            System.out.println("");
        }
        for(int i=0;i<a;i++){
            for (int j=0;j<a;j++){
                System.out.printf("* ");
                if(j+i==a-1){
                    break;
                }
            }
            System.out.println("");
        }
        for(int i=0;i<a;i++){
            for (int j=0;j<a;j++){
                if (j>=a-i-1){
                    System.out.print("* ");
                }
                else{
                    System.out.printf("  ");
                }
            }
            System.out.println("");
        }
        for(int i=0;i<a;i++){
            for (int j=0;j<a;j++){
                if (j>=i){
                    System.out.print("* ");
                }
                else{
                    System.out.printf("  ");
                }
            }
            System.out.println("");
        }
        inputUser.close();
    }
}
