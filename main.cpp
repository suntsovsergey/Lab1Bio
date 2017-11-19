/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: macbookpro
 *
 * Created on 5 ноября 2017 г., 20:27
 */
// 1.поиск кол-в вхождений подстроки в строке 
// 2.поиск самой часто встречающейся пары из n символов в строке
#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int main(int argc, char** argv) {
   
    ifstream input_file("/Users/macbookpro/NetBeansProjects/Lab1/Input.txt");
    ofstream output_file("/Users/macbookpro/NetBeansProjects/Lab1/Output.txt");
    string str ;
    string pattern;
    int n=0;
    int i=0;
   //считываем первую строку
    getline(input_file, str, '\n' );
   //считываем вторую строку
    getline(input_file,pattern,'\n');
   //поиск pattern и считаем по кол-ву номеров с которых начинается pattern
    for (i=str.find(pattern,i);i!=string::npos; i=str.find(pattern,i+1)){
        n++;
    }
    output_file<<n;
    output_file.close();
    input_file.close();
    
    cout<<n;
 
    return 0;
}

