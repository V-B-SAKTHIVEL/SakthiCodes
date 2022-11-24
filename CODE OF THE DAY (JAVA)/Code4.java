package com.example.codeoftheday;

import java.util.Scanner;

public class Code4
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the input string where u need to remove WhiteSpaces...:");
        String inputString = sc.nextLine();
        char[] charArray = inputString.toCharArray();
        String stringWithoutSpaces = "";

        for(int i = 0; i < charArray.length; i++)
        {
            if((charArray[i] != ' ')&&(charArray[i] != '\t'))
            {
                stringWithoutSpaces = stringWithoutSpaces + charArray[i];
            }
        }

        System.out.println("Input string: " + inputString);
        System.out.println("Input string without spaces: " + stringWithoutSpaces);

        sc.close();
    }
}
