//
//  Sqlite_.hpp
//  Databases
//
//  Created by user on 22.03.2022.
//

#ifndef Sqlite__hpp
#define Sqlite__hpp

#include <stdio.h>
#include <sqlite3.h>
#include <iostream>
using namespace std;

extern void Db_Open (const char * Path); // Создать файл базы данных
 extern void Db_Close (); // Закрыть базу данных
 extern void Db_CreateTable (); //Создать таблицу
 
//int Open_db(const char * writeFileDb);

#endif /* Sqlite__hpp */
