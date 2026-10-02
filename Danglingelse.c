#include <stdio.h>
int y = 8;
int x = 5;
int main(){
    puts("a)");
    if (y == 8){
    if (x == 5)
    puts("@@@@@");
    else{
    puts("#####");}
    puts("$$$$$");
    puts("&&&&&");}  
    puts("b)");
    if (y == 8){
    if (x == 5){}
    puts("@@@@@");
    }
    else{
    puts("#####");
    puts("$$$$$");
    puts("&&&&&");}
    puts("c)");
    if (y == 8){
    if (x == 5){
    puts("@@@@@");}
    else {
    puts("#####");
    puts("$$$$$");}
    puts("&&&&&");}
    y = 7;  
    puts("d)");
    if (y == 8){
    if (x == 5){}
    puts("@@@@@");}
    else{
    puts("#####");
    puts("$$$$$");
    puts("&&&&&");}
   
    return 0;
}





