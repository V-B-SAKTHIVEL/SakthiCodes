package com.example.demo2;

public class Product1ToN4_2
{
    public static void main(String[] args)
    {
        int product = 1;
        int lowerbound = 1;
        int upperbound = 10;
        for(lowerbound = 1; lowerbound < upperbound; lowerbound++)
        {
            product *= lowerbound;
        }

        System.out.println("THE FACTORIAL OF " + upperbound + "IS: " + product);
    }
}
