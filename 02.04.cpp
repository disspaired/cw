#include <iostream>
using namespace std;

#define PI cout<<"WASAAAAAP"<<endl;
#define SUM(a, b) cout<<a + b<<endl;
#define ADD(a, b) cout<<a * b<<endl;
#define SQUARE(x) cout<<x * x<<endl;
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define DEBUG

#ifdef DEBUG
#define DEBUG_LOG(x) cout << "Debug mode ON " << endl;
#else
#define DEBUG_LOG(x)
#endif

#ifdef RELEASE
#define RELEASE_LOG(x) cout<<"RELEASE macro is defined"<<endl;
#else
#define RELEASE_LOG(x) cout<<"RELEASE macro is not defined"<<endl;
#endif 
#define VERSION 2

#if VERSION == 1
#define VERSION_LOG cout<<"V1"<<endl;
#else
#define VERSION_LOG cout<<"other version"<<endl;
#endif 


int main() {
	PI;
	SUM(2, 3);
	ADD(2 + 3, 4); //сначала умножение, потом сложение
	ADD((2 + 3), 4); //сначала сложение, потом умножение
	SQUARE(3);
	cout << MIN(32, 23) << endl;
	DEBUG_LOG();
	RELEASE_LOG();
	VERSION_LOG;
}
