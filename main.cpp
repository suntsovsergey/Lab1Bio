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

using namespace std;


int main(int argc, char** argv) {
    string str = "fabcdeabfgabchfabc";
    string pattern ="abc";
    int n=0;
    int i=0;
    for (i=str.find(pattern,i);i!=string::npos; i=str.find(pattern,i+1)){
        n++;
        cout<<i<<endl;
    }
    
    
    cout<<n;
 
    return 0;
}

