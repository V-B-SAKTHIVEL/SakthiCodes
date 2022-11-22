package com.example.codeoftheday;

public class Code3
{
    public static void main(String[] args)
    {
        firstTriangle();
    }

    public static void firstTriangle()
    {
        int rowCount = 1;
        int i;
        int j;
        for(i = 5; i > 0; i--)//printing i spaces at the beginning of the row
        {
           for(j = 1; j <= i; j++)
           {
               System.out.print(" ");
           }

           for(j = 1; j <= rowCount; j++)
           {
               System.out.print(j + " ");
           }
           System.out.println();
           rowCount++;
        }
    }
}
