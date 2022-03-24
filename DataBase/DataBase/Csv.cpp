//
//  Csv.cpp
//  Databases
//
//  Created by user on 22.03.2022.
//

#include "Csv.hpp"


//  A. Сгенерировать csv файл из 1024 записей по 6 столбцов, заполненных строками
//  случайных символов (цифры и латинские буквы) длиной по 8 символов.

int Rand_csv(const char * writeFile, const int n){
    
    char * Arr = new char[n];
    
    for(int i = 1; i < n; ++i){
        if(i%9 == 0){
            Arr[i-1] = ',';
        } else {
            Arr[i-1] = alphabet[rand()%(sizeof(alphabet)-1)];
        }
        if(i%54 == 0){
            Arr[i-1] = '\n';
        }
    }
    
    ofstream fout;
    fout.open(writeFile);
    if(!fout.is_open()){
        cout << "Error! File not open!" << endl;
        return 0;
    }
    fout.write(Arr, n);
    fout.close();
    
    delete [] Arr;
    return 1;
    
}

//  B. Считать содержимое файла, заменить нечетные цифры символом #, удалить
//  записи, в которых любая из шести строк начинается с гласной буквы, сохранить
//  отредактированный файл с другим именем.

int Edit_csv(const char * readFile, const char * writeFile){

    ifstream in(readFile, ios::binary);
    if(!in.is_open()){
        cout << "Error! File not open!" << endl;
        return 0;
    }

    in.seekg(0, ios::end);
    long long int n = in.tellg();
    in.seekg(0, ios::beg);
    
    char *str = new char[n];
    char ch;
    
    int c = 0;
    while(true)
    {
        in.get(ch);
        if (in.eof()) break;
        str[c] = ch;
        c++;
    }
     
    in.close();
    
    for(int i = 0; i < n; i++){
        if((static_cast<int>(str[i]) > 47) && (static_cast<int>(str[i]) < 58) && ((static_cast<int>(str[i]))%2 == 0))
        {
            str[i] = '#';
        }
    }
  
    char *new_str = new char[n];
    int k = 0;
   
    
    for(int i = 0; i < n; i++){
        bool cond = 0;
        for(int j = 0; j < 54; j++){
            
            cond = cond || (str[i + j] == 'A') || (str[i + j] == 'a')
                        || (str[i + j] == 'E') || (str[i + j] == 'e')
                        || (str[i + j] == 'I') || (str[i + j] == 'i')
                        || (str[i + j] == 'O') || (str[i + j] == 'o')
                        || (str[i + j] == 'U') || (str[i + j] == 'u');
               
               
            j += 8;
        }
        if (!cond){
            for(int j = 0; j < 54; j++){
                new_str[j+k] = str[i + j];
                
            } k +=54;
        } i += 53;
    }
               
   
    ofstream fout;
    fout.open(writeFile);
    if(!fout.is_open()){
        cout << "Error! File not open!" << endl;
        return 0;
    }
    fout.write(new_str, n);
    fout.close();
    
    delete [] new_str;
    delete [] str;
    return 1;
}
