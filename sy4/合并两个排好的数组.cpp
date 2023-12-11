#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int size3[])
{
	for (int i = 0; i < size1; i++)
		size3[i] = list1[i];
	for (int k = 0; k < size2; k++)
		size3[size1+ k] = list2[k];
	for (int x = 0; x < size1 + size2; x++)
	{
		for (int y = 0; y < size1 + size2 - 1; y++)
			if (size3[y] > size3[y + 1])
			{
				int t = size3[y];
				size3[y] = size3[y + 1];
				size3[y + 1] = t;
			}
	}	
}
int main()
{
	int size1, size2;
	cin >> size1;
	cin >> size2;
	int* list1 = new int[size1];
	int* list2 = new int[size2];
	int* size3 = new int[size1 + size2];
	cout << "Enter size1£º" << size1 << endl;
	cout << "Enter list1£º";
	for (int i = 0; i < size1; i++)
		cin >> list1[i];
	cout << "Enter list2£º"<<size2<<endl;
	cout << "Enter list2£º";
	for (int i = 0; i < size2; i++)
		cin >> list2[i];
	cout << endl;
	cout << "The merged list is£º";
	merge(list1,size1,list2,size2,size3);
	for (int i = 0; i < (size1+size2); i++)
		cout << size3[i]<<'\t';
	cout << endl;
	delete[]list1;
	delete[]list2;
	delete[]size3;
}