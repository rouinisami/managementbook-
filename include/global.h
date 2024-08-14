#ifndef GLOBALS_H
#define GLOBALS_H
#include <cstdio>
#include<iostream>
using namespace std;
#include <sqlite3.h>

extern sqlite3 *db;
extern char *zErrMsg;
extern int rc;
extern char sql[256];

int callback(void *NotUsed, int argc, char **argv, char **azColName);

void open_database();
void execute_sql();
#endif // GLOBALS_H
