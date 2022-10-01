package com.example.demo2;

public class CylinderComputation
{
    public static void main(String[] args)
    {
        double radius, height, surface_area, base_area, volume;
        radius = 10;
        height = 20;
        surface_area = (2 * 3.14 * radius * height) + (2 * 3.14 * radius * radius);
        base_area = (3.14 * radius * radius);
        volume = (3.14 * radius * radius * height);
        System.out.println("THE RADIUS OF CYLINDER IS: " + radius);
        System.out.println("THE HEIGHT OF CYLINDER IS: " + height);
        System.out.println("THE SURFACE AREA OF CYLINDER IS: " + surface_area);
        System.out.println("THE BASE AREA OF CYLNDER IS: " + base_area);
        System.out.println("THE VOLUME OF CYLINDER IS: " + volume);
    }
}
