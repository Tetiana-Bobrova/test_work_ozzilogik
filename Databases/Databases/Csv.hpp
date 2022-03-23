//
//  Csv.hpp
//  Databases
//
//  Created by user on 22.03.2022.
//

#ifndef Csv_hpp
#define Csv_hpp

#include <stdio.h>
#include <iostream>
#include <fstream>
using namespace std;

const int N = 1024*6*9;
static char alphabet[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";





int Rand_csv(const char * writeFile, const int n);

int Edit_csv(const char * readFile, const char * writeFile);




#endif /* Csv_hpp */
