package com.example.codeoftheday;

public class Code3
{
    //To create the pyramid of numbers in Java

    public static void main(String[] args)
    {
        secondTriangle();
    }

    public static void secondTriangle()
    {
        int NoOfRows = 5;
        int rowCount = NoOfRows;
        for(int i = 0; i < NoOfRows; i++)
        {
            for(int j = 1; j <= i*2; j++)
            {
                System.out.print(" ");
            }

            for(int j = 1; j <= rowCount; j++)
            {
                System.out.print(j + " ");
            }

            //Printing j where j value will be from rowcount -1 to 1
            for(int j = rowCount-1; j >= 1; j--)
            {
                System.out.print(j + " ");
            }
            System.out.println();
            rowCount--;
        }
    }
}
