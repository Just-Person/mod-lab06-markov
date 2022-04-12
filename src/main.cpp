// Copyright 2022 UNN-IASR
#include <iostream>
#include "textgen.h"
#include <locale>
#include <ctime>
int main()
{
    setlocale(LC_ALL, "rus");
    textgen text = textgen("test.txt");
    srand(time(NULL));
    text.setprefixlength(1);
    text.readfile();
    std::cout << text.getall();
    for (int i = 0; i < 300; i++)
    {
        text.generate();
    }
    std::cout << text.getresultlength();
}
