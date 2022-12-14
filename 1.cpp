#include <iostream>
//#include <windows.h>

using namespace std;

const unsigned char aucCRCHi[] = {
	0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x01, 0xC0, 0x80, 0x41,
	0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x00, 0xC1, 0x81, 0x40,
	0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x01, 0xC0, 0x80, 0x41,
	0x00, 0xC1, 0x81, 0x40, 0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41,
	0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x01, 0xC0, 0x80, 0x41,
	0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x00, 0xC1, 0x81, 0x40,
	0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x00, 0xC1, 0x81, 0x40,
	0x01, 0xC0, 0x80, 0x41, 0x01, 0xC0, 0x80, 0x41, 0x00, 0xC1, 0x81, 0x40,
	0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x01, 0xC0, 0x80, 0x41,
	0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x00, 0xC1, 0x81, 0x40,
	0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x01, 0xC0, 0x80, 0x41,
	0x00, 0xC1, 0x81, 0x40, 0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41,
	0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x01, 0xC0, 0x80, 0x41,
	0x00, 0xC1, 0x81, 0x40, 0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41,
	0x01, 0xC0, 0x80, 0x41, 0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41,
	0x00, 0xC1, 0x81, 0x40, 0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41,
	0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x01, 0xC0, 0x80, 0x41,
	0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x00, 0xC1, 0x81, 0x40,
	0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x01, 0xC0, 0x80, 0x41,
	0x00, 0xC1, 0x81, 0x40, 0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41,
	0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x01, 0xC0, 0x80, 0x41,
	0x00, 0xC1, 0x81, 0x40
};

const unsigned char aucCRCHi1[] ={
	0x0, 0xc1, 0x81, 0x40, 0x1, 0xc0, 0x80, 0x41,
	0x1, 0xc0, 0x80, 0x41, 0x0, 0xc1, 0x81, 0x40,
	0x1, 0xc0, 0x80, 0x41, 0x0, 0xc1, 0x81, 0x40,
	0x0, 0xc1, 0x81, 0x40, 0x1, 0xc0, 0x80, 0x41,
	0x1, 0xc0, 0x80, 0x41, 0x0, 0xc1, 0x81, 0x40,
	0x0, 0xc1, 0x81, 0x40, 0x1, 0xc0, 0x80, 0x41,
	0x0, 0xc1, 0x81, 0x40, 0x1, 0xc0, 0x80, 0x41,
	0x1, 0xc0, 0x80, 0x41, 0x0, 0xc1, 0x81, 0x40,
	0x1, 0xc0, 0x80, 0x41, 0x0, 0xc1, 0x81, 0x40,
	0x0, 0xc1, 0x81, 0x40, 0x1, 0xc0, 0x80, 0x41,
	0x0, 0xc1, 0x81, 0x40, 0x1, 0xc0, 0x80, 0x41,
	0x1, 0xc0, 0x80, 0x41, 0x0, 0xc1, 0x81, 0x40,
	0x0, 0xc1, 0x81, 0x40, 0x1, 0xc0, 0x80, 0x41,
	0x1, 0xc0, 0x80, 0x41, 0x0, 0xc1, 0x81, 0x40,
	0x1, 0xc0, 0x80, 0x41, 0x0, 0xc1, 0x81, 0x40,
	0x0, 0xc1, 0x81, 0x40, 0x1, 0xc0, 0x80, 0x41,
	0x1, 0xc0, 0x80, 0x41, 0x0, 0xc1, 0x81, 0x40,
	0x0, 0xc1, 0x81, 0x40, 0x1, 0xc0, 0x80, 0x41,
	0x0, 0xc1, 0x81, 0x40, 0x1, 0xc0, 0x80, 0x41,
	0x1, 0xc0, 0x80, 0x41, 0x0, 0xc1, 0x81, 0x40,
	0x0, 0xc1, 0x81, 0x40, 0x1, 0xc0, 0x80, 0x41,
	0x1, 0xc0, 0x80, 0x41, 0x0, 0xc1, 0x81, 0x40,
	0x1, 0xc0, 0x80, 0x41, 0x0, 0xc1, 0x81, 0x40,
	0x0, 0xc1, 0x81, 0x40, 0x1, 0xc0, 0x80, 0x41,
	0x0, 0xc1, 0x81, 0x40, 0x1, 0xc0, 0x80, 0x41,
	0x1, 0xc0, 0x80, 0x41, 0x0, 0xc1, 0x81, 0x40,
	0x1, 0xc0, 0x80, 0x41, 0x0, 0xc1, 0x81, 0x40,
	0x0, 0xc1, 0x81, 0x40, 0x1, 0xc0, 0x80, 0x41,
	0x1, 0xc0, 0x80, 0x41, 0x0, 0xc1, 0x81, 0x40,
	0x0, 0xc1, 0x81, 0x40, 0x1, 0xc0, 0x80, 0x41,
	0x0, 0xc1, 0x81, 0x40, 0x1, 0xc0, 0x80, 0x41,
	0x1, 0xc0, 0x80, 0x41, 0x0, 0xc1, 0x81, 0x40
};

int main()
{
	cout<<hex;
	for(int i=0; i<256 ;i++){
		if(aucCRCHi[i] != aucCRCHi1[i])
		{
			cout<<i<<endl;
		}
		/*
		int io = aucCRCHi[i];
		cout<<"0x"<<io<<",";
		if((i+1)%8 == 0){
			cout<<endl;
		}else{
			cout<<" ";
		}
		*/
	}
	//cout << "sizeof dcb" << sizeof(DCB) <<endl;
}