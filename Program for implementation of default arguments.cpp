#include<iostream>
using namespace std;
void NGO(string donor= "Sarah",int fund=10000 ){
	cout<<donor <<" "<<" has donated"<<" "<<"Rs. "<<" "<<fund<<endl;
}
int main(){
	NGO();
	NGO("Praveena",30000);
}
