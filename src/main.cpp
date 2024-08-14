#include "../include/book.h"
#include "../include/purchases.h"
#include "../include/suppliers.h"
void printerror() { cout << "Error in choice" << endl; }
void book_menu() {
  int c;
  book b;
  cout << "*************************************************" << endl;
  cout << "                  BOOK MENU" << endl;
  cout << "*************************************************" << endl;
  cout << "   1. ADD" << endl;
  cout << "   2. UPDATE PRICE" << endl;
  cout << "   3. SEARCH" << endl;

  cout << "Enter Your Choice : ";
  cin >> c;
  switch (c) {
  case 1:
    b.add();
    break;
  case 2:
    b.update_price();
    break;
  case 3:
    b.search();
    break;

  default:
    printerror();
    break;
  }
}

void supplier_menu() {
  int c;
  suppliers b;
  cout << "*************************************************" << endl;
  cout << "                  Supplieres MENU" << endl;
  cout << "*************************************************" << endl;
  cout << "   1. ADD" << endl;
  cout << "   2. Remove" << endl;

  cout << "Enter Your Choice : ";
  cin >> c;
  switch (c) {
  case 1:
    b.add_sup();
    break;
  case 2:
    b.remove_supplier();
    break;

  default:
    printerror();
    break;
  }
}

int main() {
  int c;
  while (true) {
    cout << "*************************************************" << endl;
    cout << "                   MENU G" << endl;
    cout << "*************************************************" << endl;
    cout << "   1. Operation on books" << endl;
    cout << "   2. Operation on suppliers" << endl;

    cout << "Enter Your Choice : ";
    cin >> c;
    if (c == 1)
      book_menu();
    if (c == 2)
      supplier_menu();

    /* code */
  }

  return 0;
}