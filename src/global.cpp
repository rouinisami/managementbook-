#include "../include/global.h"

sqlite3 *db = nullptr;
char *zErrMsg = nullptr;
int rc = 0;
char sql[256];

int callback(void *NotUsed, int argc, char **argv, char **azColName) {
  int i;
  cout << "arg :" << argc << endl;
  for (i = 0; i < argc; i++) {
    printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
  }
  printf("\n");
  return 0;
}

void open_database() {

  rc = sqlite3_open("../test.db", &db);

  if (rc) {
    fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
  } else {
    fprintf(stderr, "Opened database successfully\n");
  }
}
void execute_sql() {
  rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
  if (rc != SQLITE_OK) {
    fprintf(stderr, "SQL error: %s\n", zErrMsg);
    sqlite3_free(zErrMsg);
  } else {
    fprintf(stdout, "ADD suppliers created successfully\n");
  }
}