#include <iostream>
int main(void) {
int i,j,n;
int currentNumber;
int count;
double primeCount=0;
double sum=0;
double average;

std::cout<<"Enter N :";
std::cin>>n;

for (i=1;i<=n;i++){
	currentNumber = i;
	count = 0;

	for (j=1;j<=currentNumber;j++){
		if (currentNumber%j==0){
			count++;
		}
	}
	if (count==2){
		std::cout<<"The prime number: \n";
		std::cout<<currentNumber << std::endl;
		sum+=currentNumber;
		primeCount++;
	}
}
average=sum/primeCount;
std::cout<< "the sum is " << sum<<std::endl;
std::cout<<"the number of prime numbers is " << primeCount <<std::endl;
std::cout<<"the average is " << average;
	return 0;
}
