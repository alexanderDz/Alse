#include "db_local.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;


db_local::db_local()
{
    int rc;
    string path1 = "../data_base/user.db";
    rc = sqlite3_open(path1.c_str(),&db);


}

bool db_local::open_database()
{
    int rc;
    sqlite3 *db;
    string path1 = "../data_base/user.db";
    rc = sqlite3_open(path1.c_str(),&db);
    if(rc != SQLITE_OK)
        return false;
    else
        return true;
}


void db_local::close_database()
{
    sqlite3_close(db);
}

bool db_local::insertUser(string first_name, string last_name,int national_id,string user_name,string psswd,QDate b_date, int age)
{
    stringstream sqlstream;
    int rc;
    char *zErrMsg = 0;

    sqlstream << "INSERT INTO usuario(Nombre,Apellido,national_id,user_name,password,";
    sqlstream << " birth_date,age) VALUES ( '" ;
    sqlstream << first_name << "' , '" << last_name << "' , '" << national_id << "' , '";
    sqlstream << user_name << "' , '"  << psswd << "' , '" << b_date.toString().toStdString() << "' , '" << age << " ' ";
    sqlstream << "); " ;

    string sql( sqlstream.str() );

    rc = sqlite3_exec(db, sql.c_str(), 0, 0, &zErrMsg);

    if( rc != SQLITE_OK ){
       fprintf(stderr, "SQL error: %s\n", zErrMsg);
       sqlite3_free(zErrMsg);
       return false;
    }else{
        return true;
        }
}

bool db_local::searchUser(string u, string pwd)
{

}

bool db_local::insertData(string username, int cb1, int cb2, int cb3){

    stringstream sqlstream;
    int rc;
    char *zErrMsg = 0;
   QDateTime local = QDateTime::currentDateTime();
   sqlstream << "INSERT INTO sensor(date, user, buttom_1, buttom_2, buttom_3) ";
   sqlstream << "VALUES ( '"<<local.toString().toStdString()<<"' , '"<<username<<"' , '"<<cb1<<"' , '"<<cb2<<"' , '"<<cb3<<"' );";
   string sql( sqlstream.str() );
   rc = sqlite3_exec(db, sql.c_str(), 0, 0, &zErrMsg);
   if( rc != SQLITE_OK ){
       fprintf(stderr, "SQL error: %s\n",zErrMsg);
       sqlite3_free(zErrMsg);
       return false;
    }else
       return true;
}









