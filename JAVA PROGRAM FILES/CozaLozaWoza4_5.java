package com.example.demo2;

public class CozaLozaWoza4_5
{
    public static void main(String[] args)
    {
        int number;
        final int upperbound = 110, lowerbound = 1;

        for(number = lowerbound; number <= upperbound; number++)
        {
            if(number % 3 == 0)
            {
                System.out.println("Coza\t");
            }

            if(number % 5 == 0)
            {
                System.out.println("Loza\t");
            }

            if(number % 7 == 0)
            {
                System.out.println("Woza\t");
            }

            if((number % 3 != 0) && (number % 5 != 0) && (number % 7 != 0))
            {
                System.out.println(number + "\t");
            }

            if(number % 11 == 0)
            {
                System.out.println(number + "\n");
            }

            else
            {
                System.out.println(" ");
            }
        }
    }
}
