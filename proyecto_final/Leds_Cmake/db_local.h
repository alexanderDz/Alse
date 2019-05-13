#ifndef DB_LOCAL_H
#define DB_LOCAL_H

#include<sqlite3.h>
#include<string>
#include<sstream>
#include<QDate>

using namespace std;

class db_local
{
public:
    db_local();

    bool open_database();

    void close_database();

    bool insertUser(string first_name, string last_name,int national_id, string user_name, string password, QDate b_date, int age);

    bool insertData();

    bool searchUser(string user_name, string password);

private:

    sqlite3 *db;
    string path = "../data_base/user.db";
};

#endif // DB_LOCAL_H
