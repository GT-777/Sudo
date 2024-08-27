
#include <iostream>



int* Test()
{
	int L_X = 10;
	int* ptr = &L_X;

	return ptr;
}

int main()
{
	int arr [4] {};
	int* _Ptr = Test();                                                        
	std::cout << _Ptr;
	
	
}                      