#include <iostream>
using namespace std;
int main (){
	int function;
	cout << "1.輸出靠左，向下的直角三角形。 \n2.輸出靠左，向上的直角三角形。\n3.輸出靠右，向下的直角三角形\n請選擇欲使用之功能(輸入代號即可):";
	cin >> function;
	
	int lines;
	cout << "請輸入欲有幾行:";
	cin >> lines;
	
	if ( function == 1 ){
		for (int a = 1 ; a<=lines ; a++){
			for (int b = 1 ; b<=a ;b++){
				cout << "*";
			}
			cout << "\n";
		}	
	}
	
	else if ( function == 2 ){
		for (int a = 1 ; a<=lines ; a++){
			for (int b = lines ; b>=a ;b--){
				cout << "*";
			}
		cout << "\n";
		}
	}
	
		else if ( function == 3 ){
			for ( int a = 0; a < lines; a++){
				for ( int b = 0; b < lines-a; b++){
					cout <<" ";
				}
				for ( int c =0; c <= a; c++){
					cout <<"*";
				}
			cout <<"\n";
			}
		}
	system ("PAUSE");
	return 0;
}