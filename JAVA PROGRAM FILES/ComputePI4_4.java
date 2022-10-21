package com.example.demo2;

public class ComputePI4_4
{
    public static void main(String[] args)
    {
        double sum = 0.0;
        int MAX_DENOMINATOR = 1000;

        for (double denominator = 1.0; denominator <= MAX_DENOMINATOR;denominator += 2)
        {
            if (denominator % 4 == 1)
            {
                sum += (1/denominator);
            }
            else if (denominator % 4 == 3)
            {
                sum -= (1/denominator);
            }
            else
            {
                System.out.println("Impossible!!!");
            }
        }

        System.out.println("THE PI VALUE IN THIS SERIES IS: " + sum*4);
    }
}
