#include <stdio.h>
#include <stdlib.h>
#include <sqlite3.h> 
#include <string>

using namespace std;

static int callback(void *NotUsed, int argc, char **argv, char **azColName) {
   int i;
   for(i = 0; i<argc; i++) {
      printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
   }
   printf("\n");
   return 0;
}

int main(int argc, char* argv[]) {
   sqlite3 *db;
   char *zErrMsg = 0;
   int rc;
   string sqlstr;

   /* Open database */
   rc = sqlite3_open("test.db", &db);
   
   if( rc ) {
      fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
      return(0);
   } else {
      fprintf(stdout, "Opened database successfully\n");
   }

   /* Create SQL statement */
   sqlstr = "CREATE TABLE usuario (id_usuario INTEGER PRIMARY KEY NOT NULL," \
      "Nombre TEXT NOT NULL, Apellido TEXT NOT NULL," \
      "user_name CHAR(10) NOT NULL, passwd CHAR(10) NOT NULL);";

   /* Execute SQL statement */
   rc = sqlite3_exec(db, sqlstr.c_str(), callback, 0, &zErrMsg);
   
   if( rc != SQLITE_OK ){
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
   } else {
      fprintf(stdout, "Table created successfully\n");
   }

   /* Create SQL statement */
   sqlstr = "CREATE TABLE sensor (id_medida INTEGER PRIMARY KEY NOT NULL," \
      "Temperatura REAL NOT NULL, Humedad REAL NOT NULL," \
      "Fecha TEXT NOT NULL );";

   /* Execute SQL statement */
   rc = sqlite3_exec(db, sqlstr.c_str(), callback, 0, &zErrMsg);

   if( rc != SQLITE_OK ){
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
   } else {
      fprintf(stdout, "Table created successfully\n");
   }
   sqlite3_close(db);
   return 0;
}
