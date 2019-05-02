#include "database.h"

#define Path_to_DB "../data_base/user.db"


DataBase::DataBase()
{

}

bool DataBase::connOpen(){
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(Path_to_DB);
    if(!db.open()){
        qDebug()<<"FAILED TO CONNECT DATABASE";
        return false;
    }
    else{
        qDebug()<<"DATABASE OPEN SUCCESFULLY";
        return true;
    }
}

void DataBase::connClose(){
    db.close();
    db.removeDatabase(QSqlDatabase::defaultConnection);
}
