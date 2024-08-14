#include "../include/suppliers.h"

void suppliers::add_sup() {

  cout << "Enter the name of the suppliers : ";
  cin >> name;

  cout << "Enter the number phone of the suppliers : ";
  cin >> phn;

  cout << "Enter adress 1 the suppliers : ";
  cin >> addr_line1;

  cout << "Enter adress 2 the suppliers : ";
  cin >> addr_line2;

  cout << "Enter adress city the suppliers : ";
  cin >> addr_city;

  cout << "Enter adress state the suppliers : ";
  cin >> addr_state;

  /* Open database */
  open_database();

  snprintf(sql, sizeof(sql),
           "INSERT INTO suppliers (name, phn, addr_line1, addr_line2, "
           "addr_city, addr_state) VALUES ('%s', '%ld', "
           "'%s', '%s', '%s', '%s');",
           name.c_str(), phn, addr_line1.c_str(), addr_line2.c_str(),
           addr_city.c_str(), addr_city.c_str());

  /* Execute SQL statement */
  execute_sql();
  sqlite3_close(db);
}
void suppliers::remove_supplier() {
  cout << "Enter the supplier id to remove the Supplier : ";
  cin >> id;
  /* Open database */
  open_database();
  snprintf(sql, sizeof(sql), "DELETE FROM SUPPLIERS WHERE id=('%d');", id);

  /* Execute SQL statement */
  execute_sql();
  sqlite3_close(db);
}
void suppliers::search_id() {}