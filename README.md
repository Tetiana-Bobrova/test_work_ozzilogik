# test_work_ozzilogik
Тестовое задание
Сделать на С++ Qt:
1. Базы данных
A. Сгенерировать csv файл из 1024 записей по 6 столбцов, заполненных строками
случайных символов (цифры и латинские буквы) длиной по 8 символов.
B. Считать содержимое файла, заменить нечетные цифры символом #, удалить
записи, в которых любая из шести строк начинается с гласной буквы, сохранить
отредактированный файл с другим именем.
C. Считать содержимое файла из пункта А, создать программно базу данных sqlite,
сохранить все данные в таблицу.
Средствами sql удалить записи, в которых во втором столбце первый символ цифра.

2. Скомпилировать приложение из предыдущего задания для Raspberry Pi и
прислать бинарник.

3. Сети
Сделать программу сервер TCP, которая при подключении клиента отправляет ему файл, который лежит рядом с исполняемым файлом сервера (response.txt), после чего закрывает соединение.
Множественное подключение клиентов НЕ требуется, но будет плюсом.
Сделать программу клиент, которая подключается к серверу, получает файл, сохраняет его на жесткий диск и завершают свою работу.



Все “непонятные вам моменты” и “не однозначные формулировки” в ТЗ - вы можете
сделать на свое усмотрение.



1. Завдання виконано в середовищі Xcode. Виконано пункти А, Б.
2. Не виконано.
3. Завдання виконано в середовищі Qt по інструкції. Сервер обмінюється повідомленнями з клієнтами. Передача файлу не реалізована.
