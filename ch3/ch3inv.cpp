#include <iostream>
#include <map>
#include <string>
#include <ctime>
#include <cstdlib> 
using namespace std;


class Inventory
{
	int maxSize = 10; // useless unused...
	map<string,string> db; // database
	map<int,string> odb; //ol' database
	public:// public interface
		void setODB(int key,string val){
			odb[key] = val;
		}
		void listODB() {
			cout << "ODBInventory Contents:" << endl;
			for (auto it = odb.begin(); it != odb.end();it++)
			{
				cout << it->first <<": "<< it->second << endl;
			}
		}
// couple methods for setting daata in the map<db> 
		void setData(string key,string val){
			db[key] = val;
		}
		void setDataByInput() {
			string key;
			string value;
			cout << "Enter key:\n>> ";
			getline(cin,key);
			cout << "enter value:\n>> ";
			getline(cin,value);
			db[key] = value;
		}
// returns string of the data you request from db
		string getData(){
			cout << "enterwhatyouwant:\n>> ";
			string key;
			getline(cin,key);
			if (db.find(key)!=db.end()) {
				cout << "whatyouwanted: "<< db[key]<< endl;
				return db[key];
			}
			else 
				cout << "not there:";
				return " ";
			}
// lists the entirety of db in cout
		void listData() {
			cout << "Inventory Contents:" << endl;
			for (auto it = db.begin(); it != db.end();it++)
			{
				cout << it->first <<": "<< it->second << endl;
			}
		}

};