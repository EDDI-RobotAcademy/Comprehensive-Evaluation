////
//// Created by eddi on 23. 12. 15.
////
//
//#include "DbProcess.h"
//
//DbProcess* DbProcess::instance = nullptr;
//
//DbProcess::DbProcess(const char* host, const char* user, const char* pass, const char* dbName)
//        : conn(nullptr), DB_HOST(host), DB_USER(user), DB_PASS(pass), DB_NAME(dbName) {}
//
//DbProcess::~DbProcess() {
//    if (conn != nullptr) {
//        mysql_close(conn);
//    }
//}
//
//DbProcess* DbProcess::getInstance(const char* host, const char* user, const char* pass, const char* dbName) {
//    if (instance == nullptr) {
//        instance = new DbProcess(host, user, pass, dbName);
//    }
//    return instance;
//}
//
//MYSQL* DbProcess::getConn() {
//    return conn;
//}
//
//bool DbProcess::connect() {
//    conn = mysql_init(nullptr);
//    return (mysql_real_connect(conn, DB_HOST, DB_USER, DB_PASS, DB_NAME, 3306, nullptr, 0) != nullptr);
//}
//
//bool DbProcess::insertData(const std::string& queryString) {
//    return (mysql_query(conn, queryString.c_str()) == 0);
//}