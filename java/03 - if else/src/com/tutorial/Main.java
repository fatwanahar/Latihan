package com.tutorial;
import java.time.LocalTime;
import java.util.*;
public class Main {
    public static void main(String[] args) {
        int time;
        LocalTime waktu = LocalTime.now();
        System.out.println("Waktu Menunjukkan pukul "+waktu +" WIB");
        Scanner inputUser = new Scanner(System.in);
        System.out.printf("Masukkan Waktu(0-23): ");
        time = inputUser.nextInt();
        System.out.printf("Sekarang Pukul %d:00 WIB \n",time);
        if(time>=0 && time<=9){
            System.out.println("Selamat Pagi!");
        }
        else if(time>9 && time<=16) {
            System.out.println("Selamat Siang!");
        }
        else if(time>16 && time<=19){
            System.out.println("Selamat Sore!");
        }
        else if (time>19 && time<24){
            System.out.println("Selamat Malam!");
        }
        else{
            System.out.println("Salah Input!");
        }
    }
}
