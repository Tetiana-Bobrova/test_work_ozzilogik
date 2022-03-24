//
//  main.cpp
//  Databases
//
//  Created by user on 21.03.2022.
//  1. Базы данных
//  A. Сгенерировать csv файл из 1024 записей по 6 столбцов, заполненных строками
//  случайных символов (цифры и латинские буквы) длиной по 8 символов.
//  B. Считать содержимое файла, заменить нечетные цифры символом #, удалить
//  записи, в которых любая из шести строк начинается с гласной буквы, сохранить
//  отредактированный файл с другим именем.
//  C. Считать содержимое файла из пункта А, создать программно базу данных sqlite,
//  сохранить все данные в таблицу.
//  Средствами sql удалить записи, в которых во втором столбце первый символ цифра.


#include "Csv.hpp"
#include "Sqlite_.hpp"






int main() {
    
   if(Rand_csv("/Users/user/Desktop/Stepik/test_work_ozzilogik/DataBase/DataBase/Rand.csv", N)){
        cout << "The generated csv file was successfully created!" << endl;
    } else{
        cout << "Error creating generated csv file" << endl;
    }
    
    Edit_csv("/Users/user/Desktop/Stepik/test_work_ozzilogik/DataBase/DataBase/Rand.csv","/Users/user/Desktop/Stepik/test_work_ozzilogik/DataBase/DataBase/Ed.csv");
    
    
  /*  Db_Open("/Users/user/Desktop/Stepik/test_work_ozzilogik/Databases/Databases/Second.db");
    Db_CreateTable();
    
    
    Db_Close();*/
    return 0;
}
