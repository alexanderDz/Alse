#include "db_local.h"

db_local::db_local()
{

}

bool db_local::open_database()
{
    int rc;
    rc = sqlite3_open(path.c_str(),&db);
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
    sqlstream << " birth_date,age) VALUES ( ' " ;
    sqlstream << first_name << "' , ' " << last_name << "' , ' " << national_id << "' , ' ";
    sqlstream << user_name << "' , ' "  << psswd << "' , ' " << b_date.toString().toStdString() << "' , '" << age << " ' ";
    sqlstream << "); " ;

    string sql( sqlstream.str() );

    rc = sqlite3_exec(db, sql.c_str(), 0, 0, &zErrMsg);

    if( rc != SQLITE_OK ){
       fprintf(stderr, "SQL error: %s\n", zErrMsg);
       sqlite3_free(zErrMsg);
       return false;
    }else{
        printf("datos insertados correctamente");
        return true;
        }
}

bool db_local::searchUser(string user_name, string password)
{
    int rc;
    stringstream sqlstream;
    sqlstream << "SELECT * ";
    sqlstream << "FROM usuario WHERE user_name = ' ";
    sqlstream << user_name <<"' AND password = ' ";
    sqlstream << password <<"' ;";
    string sql( sqlstream.str() );
    //rc = sqlite

}
