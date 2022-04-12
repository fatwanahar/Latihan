package com.latihan;
import java.util.*;
public class Main {
    public static void main(String[] args) {
        //print array
        int[] array1 = {1,2,3,4,5,6,7,8,9,10};
        printarray(array1,"array 1");

        //reference array
        int [] array2 = new int[array1.length];
        array2=array1;
        printarray(array1,"array 1");
        printarray(array2,"array 2");

        //operator array/utility
        System.out.println("\nMengkopi array dengan copyof");
        int[]array3 = new int [array1.length];
        array3 = Arrays.copyOf(array1, array1.length);
        printarray(array3, "array 3");
        System.out.println("memory array1 = "+array1);
        System.out.println("memory array2 = "+array2);
        System.out.println("memory array3 = "+array3);
        
        // for(int i=0;i<array1.length;i++){
        //     System.out.print(array1[i]);
        // }
    }
    private static void printarray(int[] array1,String a) {
        System.out.println(a+ " : " +Arrays.toString(array1));
    }
    
}
