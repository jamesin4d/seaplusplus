#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "ch3inv.cpp"
using namespace std;
// again this doesn't technically do what the assignment called for
// but its got some advanced stuff.
// includes a file that has an inventory class 
// taht gets instanced here. 
// maybe i'll host on github too. 
// but i'm tired of messing with this so thats all folks
// it doesn't even work(well) either haha!

int main() {
  	cout << "Sup dawg\n>> ";
  	srand(time(0));
  	int randnum = rand()%11+10;
  	int encounter = 1;
	Inventory inv;
	inv.setData("nipple of resurrection","your prized possession");
	inv.setData("book of facts","quite heavy");
	inv.setData("pocket blade","for shiving your enemies");
	//inv.setDataByInput();
	//string t = inv.getData();
	//inv.setODB(1, "std::string val");
	//inv.listODB();
	//inv.listData();

  	bool debug = true;
	string req;
	switch(encounter){
		case 1:
			cout << "You leave your house one afternoon.\n " << endl;
			cout << "As the door closes locked behind you, \nyou flip your bag around\n" << endl;
			cout << "to check for your keys...\n not there" << endl;
			cout << "whats in the bag anyways..." << endl;
			inv.listData();
			cout << "well, at least you brought the nipple.\n\n" << endl;
			cout << "what now? \n";
			cout << "List of Commands Available:\n";
			cout << "use the number\n";
			cout << "1: try door again\n";
			cout << "2: leave\n";
			cout << "3: grab spare key from under nearby stone\n";
			
			getline(cin,req);
	
			if (req=="TRY"){encounter=2;}
			else if (req=="LEAVE"){encounter=3;}
			else if (req=="GRAB"){
				inv.setData("spare key", "valuable");
				encounter=4;
			}
			else {cout << "command not found"; encounter=1; }
		case 2:
			cout << "the door is still locked...\n";
			getline(cin,req);
	
			if (req=="TRY"){encounter=2;}
			else if (req=="LEAVE"){encounter=3;}
			else if (req=="GRAB"){
				inv.setData("spare key", "valuable");
				encounter=4;
			}
			else {cout << "command not found"; encounter=2; }
		case 3:
			cout << "you decide to just leave\n the spare is there anyways\n";
			encounter = 5;
		case 4:
			cout << "now you've got your spare key\n ";
			cout << "don't leave it somewhere as well...\n";
			cout << "but now you can leave.";
			encounter=5;
		case 5:
			cout << "you throw your bag in through the passenger\n";
			cout << "door of the junk pile you call a car\n";
			cout << "climbing in after it cause the drivers door is broke\n";
			
	}
	
	


}