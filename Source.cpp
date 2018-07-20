#include <iostream> 
using namespace std; 
int LinearSearch(int arr[], int sopt, int num){
	int i; 
	for (i = 0; i < sopt; i++)
	{
		if (arr[i] == num)
		{
			return i; 
		}
	}
	return -1; 
}
int main(){
	int arr[100], i, sopt; 
	cout << "nhap so phan tu cho mang: "; cin >> sopt; 
	cout << "nhap gia tri mang: " << "\n";
	for (i = 0; i  < sopt; i ++)
	{
		cin >> arr[i];
	}
	// khai bao gt can tim. 
	int x;
	cout << "nhap so x: "; cin >> x; 
	// khai bao gt tra ve. 
	int location = LinearSearch(arr, sopt, x);
	if (location ==-1)
	{
		cout << x << " khong thuoc mang arr" << "\n";
	}
	else
	{
		cout << x << " thuoc mang arr, co vt la: " << location << "\n";
	}
	return 0;
}