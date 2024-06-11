#pragma once
#include <iostream> 
#include <cstdlib> // подключение директивы генерации рандомных чисел
#include <ctime>   //‘ункци€ ctime() определ€етс€ в заголовочном файле time.h. 
//‘ункци€ ctime() возвращает строку, представл€ющую локальное врем€, на основе аргумента timer. 
//¬ключение директивы позвол€ет генерировать числа на основе даты и времени.
using namespace std;
int secret_number;
int guess_number;
int scores = 100;
int tries = 0;