//array 
#include <iostream>
using namespace std;
int main(){
   	int  numbers[] = {1,2,3,4,5};
	int *dir_numbers;
	
	dir_numbers = numbers;
	
	for(int i=0;i<5;i++){
		cout<<"Elemento del vector ["<<i<<"]: "<<*dir_numbers++<<endl;
	}
	
    return 0;
}