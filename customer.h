#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

class customer: public user{
    public:
    char mobile[10];
    char hostel[2];
    char roomnumber[3];
    customer(){
        strcpy(id,"customer");
       // id="admin";
        strcpy(username,"customer");
         strcpy(password,"customer");
          strcpy(mobile,"customer");
        // username="admin";
        // password="admin";
        // mobile="1234567890";
    }
};