//============================================================================
// Name        : Sortowanie.cpp
// Author      : Tomasz Wasacz
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void insert_sort(int *table, int table_size)
{
	int i=1;
	while(i < table_size)
	{
		int min=table[i];
		int j=i-1;
		while(j>=0 and table[j]>min)
		{
			if(min<table[j])
			{
				table[j+1]=table[j];
			}
			j--;
		}
		table[j+1]=min;
		i++;
	}
}

void show_table(int *table, int table_size)
{
	for(int i=0;i<table_size;i++)
		cout << table[i] << ' ';
}

int main() {
	srand(time(NULL));
	int table_size=20;
	int *table = new int[table_size];

	for(int i=0; i<table_size; i++)
		table[i]=rand() % table_size;

	cout << "Before sort: " << endl;
	show_table(table, table_size);
	insert_sort(table, table_size);

	cout << "After sort: " << endl;
	show_table(table, table_size);
	return 0;
}
