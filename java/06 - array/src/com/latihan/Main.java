package com.latihan;
import java.util.*;
public class Main {
    public static void main(String[] args) {
        //print array
        int[] array1 = {1,2,3,4,5,6,7,8,9,10};
        printarray(array1);

        //reference array
        int [] array2 = new int[array1.length];
        array2=array1;
        printarray(array1);
        printarray(array2);
    }
    private static void printarray(int[] array1) {
        System.out.println(Arrays.toString(array1));
    }
    
}
