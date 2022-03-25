// bytesHW.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include "pch.h"
#include <iostream>
//Question 23
int CircularLeftShift(int n, int k)
{	
	return n << k | n >> (32 - k);
}
//Question 24
int Xor(int a, int b)
{
	return (a | b) - (a & b);
}
//Question 20
int Swap(int a)
{
	return a ^ 1;
}
//Question 41
int Square(int a)
{
	int b = a;
	for (int i =1; i < b; i++)
	{
		a += b;
	}
	return a;
}

//Question 47
int Max(int a,int b)
{

	return	b ^ (a^b & -(a > b));
}
0010 0000
0100 0000
0110 0000
int main()
{
	/*std::cout << CircularLeftShift(1, 8);*/
	/*std::cout << Xor(1, 5);*/
	/*std::cout << Swap(5);*/
	/*std::cout << Square(5);*/
}
