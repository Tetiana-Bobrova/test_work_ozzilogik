//
//  Sqlite_.cpp
//  Databases
//
//  Created by user on 22.03.2022.
//

#include "Sqlite_.hpp"


static const char * CREATE_TABLE = "create table PracticeTable (Name varchar(128),Value varchar(128),Owner varchar(128));";
 
static sqlite3 *db;
char OutBuf[256] = {0};
 
 // Создать файл базы данных
void Db_Open(const char *path)
{
    int res = sqlite3_open(path,&db);
    if(res != SQLITE_OK)
    {
        sqlite3_close(db);
        throw string(path) + "open failed:" + sqlite3_errmsg(db);
    }
}
 
 // Закрыть базу данных
void Db_Close()
{
    sqlite3_close(db);
    db = NULL;
}
 
 // Установить функцию обратного вызова
static int select_callback(void *para,int argc, char **argv, char **col)
{
    strncpy((char *)para, argv[argc-1],sizeof(OutBuf)-1);
    return 0;
}
 
 // Установить функцию ecex
void Db_Exec(const char *sql)
{
    char *errmsg;
    if(NULL == db)
    {
        cout << "Error!";
    }
    int res = sqlite3_exec(db, sql, select_callback, (void *)OutBuf, &errmsg);
    if(res != SQLITE_OK)
    {
        string temp_msg;
        temp_msg = string("ErrMsg:") + errmsg;
        sqlite3_free(errmsg);
        throw temp_msg;
    }
}
 
 // Создать таблицу
void Db_CreateTable()
{
    try{
        Db_Exec(CREATE_TABLE);
    }catch(string &e){
        throw e;
    }
}



/*int Open_db(const char * writeFileDb){
    
    sqlite3 *db;
    int rc;
    
   rc = sqlite3_open(writeFileDb, &db);

   if( rc ) {
      fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
      return(0);
   } else {
      fprintf(stderr, "Opened database successfully\n");
   }
    
    
    
   sqlite3_close(db);
    return 1;
}*/
