// Copyright 2022 UNN-IASR
#pragma once
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <map>

class textgen {
 private:
int index;
int prefixlength;
int resultlength;
std::vector<std::string> path;
std::vector<std::string> result;

 public:
std::vector < std::vector < std::string>> table;
textgen(std::string path) {
this->path.push_back(path);
index = -1;
prefixlength = 1;
this->result.push_back("");
table = std::vector<std::vector <std::string>>();
}
void setprefixlength(int);
int getprefixlength();
std::string getall();
std::vector<int> getindex();
void generate();
std::string getprefix();
std::string getsuffix();
void randomizeindex();
void getnewindex(std::vector<std::string>);
void readfile();
void checkprefix(std::vector<std::string>);
int getresultlength();
std::string getresult();
std::string getsuffix(int);
std::string getsuffix(int, int);
void generate(int);
};
