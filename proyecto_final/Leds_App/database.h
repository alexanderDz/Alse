#ifndef DATABASE_H
#define DATABASE_H

#include<QSqlDatabase>
#include<QtDebug>

class DataBase
{
public:
    DataBase();
    void connClose();
    bool connOpen();
private:
    QSqlDatabase db;


};

#endif // DATABASE_H
