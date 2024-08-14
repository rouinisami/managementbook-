#include<string>
#include<iostream>
#include "global.h"
using namespace std;

class book
{
private:
    int id;
    string name;
    string auth;
    int price;
    int qty;
public:
    void add();
    void update_price();
    void search();
    void update();
    void display();
    book(/* args */);
    ~book();
};

