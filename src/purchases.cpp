#include "../include/purchases.h"
#include <cstring>
int ord_id;  // Primary Key
int book_id; // FK ref (books)
int sup_id;  // FK ref (suppliers)
int qty;
date dt_ordered;
int eta;
char received; // Check(T or C or F) def (F)
int inv;

void purchases::new_ord() {
  cout << "Enter the book Id : ";
  cin >> book_id;
  cout << "Enter Supplier Id : ";
  cin >> sup_id;
  cout << "Enter the Quantity : ";
  cin >> qty;
  cout << "Estimated expected Delivery (in days) : ";
  cin >> eta;

  /* Open database */
  open_database();

  snprintf(sql, sizeof(sql),
           "INSERT INTO purchases (book_id, sup_id, qty, dt_ordered, eta) "
           "VALUES (%d, %d, %d, CURRENT_DATE, DATE(CURRENT_DATE, '+1 YEAR'));",
           book_id, sup_id, qty);

  // strcpy(sql,"INSERT INTO purchases(book_id, sup_id, qty, dt_ordered, eta)
  // values (6,6,2,CURRENT_DATE, DATE(CURRENT_DATE,'+1 YEAR'));");
  /* Execute SQL statement */
  execute_sql();
  sqlite3_close(db);
  cout << "New order Added!!";
}