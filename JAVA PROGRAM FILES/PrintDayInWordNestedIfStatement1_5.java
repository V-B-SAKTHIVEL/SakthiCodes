package com.example.demo2;

public class PrintDayInWordNestedIfStatement1_5
{
    public static void main(String[] args)
    {
        int dayNumber = 8;

        if(dayNumber == 1)
        {
            System.out.println("SUNDAY");
        }

        else if(dayNumber == 2)
        {
            System.out.println("MONDAY");
        }

        else if(dayNumber == 3)
        {
            System.out.println("TUESDAY");
        }

        else if(dayNumber == 4)
        {
            System.out.println("WEDNESDAY");
        }

        else if(dayNumber == 5)
        {
            System.out.println("THURSDAY");
        }

        else if(dayNumber == 6)
        {
            System.out.println("FRIDAY");
        }

        else if(dayNumber == 7)
        {
            System.out.println("SATURDAY");
        }

        else
        {
            System.out.println("INVALID DAY NUMBER...");
        }
    }
}
