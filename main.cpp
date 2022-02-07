#include <iostream>
using namespace std;

int main(int argc, char **argv){
	if (argc>=2){
		for (int i=1; i<argc; i++){
			cout << argv[i] <<" ";
		}
		cout << endl;
	}
	else
		cout << "hello world" << endl;
	
	return 0;

}
