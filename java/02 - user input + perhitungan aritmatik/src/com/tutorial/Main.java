package com.tutorial;
import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner inputUser = new Scanner(System.in);
        int a=5,b,c;
        System.out.printf("angka dalam varibel a = %d \n",a);
        System.out.print("masukkan angka b = ");
        b = inputUser.nextInt();
        c = a+b;
        System.out.printf("%d + %d = %d\n",a,b,c);
        c = a-b;
        System.out.printf("%d - %d = %d\n",a,b,c);
        c = a*b;
        System.out.printf("%d * %d = %d\n",a,b,c);
        c = a/b;
        System.out.printf("%d / %d = %d\n",a,b,c);
        c = a%b;
        System.out.printf("%d %% %d = %d\n",a,b,c);
        inputUser.close();
    }
    
}
