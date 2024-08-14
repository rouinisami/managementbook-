#include "../include/book.h"

book::book(/* args */) { cout << "Create book object" << endl; }

book::~book() { cout << "Delete book object" << endl; }

void book::add() {
  cout << "Enter the name of the book : ";
  cin >> name;
  cout << "Enter the name of the author : ";
  cin >> auth;
  cout << "Enter the Price : ";
  cin >> price;
  cout << "Enter the Qty Recived : ";
  cin >> qty;
  
  /* Open database */
  open_database();

  snprintf(sql, sizeof(sql),
           "INSERT INTO BOOKS (name, auth, price, qty) VALUES ('%s', '%s', "
           "'%d', '%d');",
           name.c_str(), auth.c_str(), price, qty);

  /* Execute SQL statement */
  execute_sql();
  sqlite3_close(db);
}
void book::update_price() {

  cout << "Enter the ID of the book for update price: ";
  cin >> id;

  /* Open database */
  open_database();
  snprintf(sql, sizeof(sql), "SELECT name, price from BOOKS where id='%d';",
           id);

  /* Execute SQL statement */
  execute_sql();
  char choice;
  cout << "Do you Want to Update the Price [y/n] : ";
  cin >> choice;
  if (choice == 'Y' || choice == 'y') {
    cout << "Enter the new price : ";
    cin >> price;
    snprintf(sql, sizeof(sql), "UPDATE BOOKS set price='%d' where id='%d';",
             price, id);
    /* Execute SQL statement */
   execute_sql();
  }
  sqlite3_close(db);
}

void book::search(){

  cout << "Enter the ID of the book: ";
  cin >> id;

  /* Open database */
  open_database();
  snprintf(sql, sizeof(sql), "SELECT * from BOOKS where id='%d';",
           id);

  /* Execute SQL statement */
  execute_sql();
}