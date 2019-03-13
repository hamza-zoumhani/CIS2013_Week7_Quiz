#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

	

int main(){
	ifstream infile;
	
	int cCount=0;
	int A=0;
	int F=0;
	int a=0;
	int b=0;
	
	infile.open("info.dat");
	
	if(infile.fail()){
		cout << "Failed!\n";
		exit(1);
	}
	
	while(!infile.eof()){
		char next;
		infile.get(next);
		
		cCount++;
		
		switch(next){
			case 'A':
				A++;
			break;
				
			case 'F':
				F++;
			break;
				
			case 'a':
				a++;
			break;
				
			case 'b':
				b++;
			break;
				
			
		}
		
	}
	infile.close();
	cout << "Total character count: " << cCount << endl;
	cout << "Number of: " << endl;
	cout << "	A: " << A << endl;
	cout << "	F: " << F << endl;
	cout << "	a: " << a << endl;
	cout << "	b: " << b << endl;
		
	return 0;
}