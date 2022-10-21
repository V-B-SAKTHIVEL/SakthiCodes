package com.example.demo2;

public class SumAverageRunningInt4_1
{
    public static void main(String[] args)
    {
        final int lowerbound = 1;
        final int upperbound = 100;
        int number;
        int add = 0;
        double average = 0.0;

        for(number = lowerbound;number <= upperbound;number++)
        {
            add += number;
        }

        System.out.println("THE SUM OF 1 TO 100 IS: " + add);
        average = add / upperbound;
        System.out.println("THE AVERAGE IS: " + average);
    }
}
