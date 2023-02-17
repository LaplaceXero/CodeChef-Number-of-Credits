#include <iostream>
using namespace std;

int main() {
	
	int testCases{};
	int x; //the number of RTP courses.
	int y; //the number of Audit courses.
	int z; //the number of non-RTP courses.
	
	cin >>testCases;
	
	for(int i{}; i < testCases; i++)
	{
	    cin >>x >>y >>z;
	    
	    cout <<((x*4) + (y*2)) <<"\n";
	}
	
	return 0;
}
