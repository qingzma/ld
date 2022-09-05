#include<iostream>
#include<cassert>

#include "leveldb/db.h"
int main(int argc, char* argv[]){
    std::cout<<"Welcome"<<std::endl;

    leveldb::DB* db;
leveldb::Options options;
options.create_if_missing = true;
leveldb::Status s = leveldb::DB::Open(options, "mydb", &db);
    int maxVal= std::stoi(argv[1]);
    for (int i=0;i<maxVal;i++){
        if (s.ok()) db->Put(leveldb::WriteOptions(), "key"+std::to_string(i), std::to_string(i));
    }
    return 0;
}