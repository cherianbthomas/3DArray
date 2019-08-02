/*3D Array*/

#include <iostream>
#include <memory>
#include <iomanip>
using namespace std;


void fill(int*** arrayPtr, const int& rows, const int& columns, const int& zaxis)
{

	for (int rowIdx = 0; rowIdx < rows; rowIdx++)
	{
		for (int columnIdx = 0; columnIdx < columns; columnIdx++)
		{
			for (int zaxisIdx = 0; zaxisIdx < zaxis; zaxisIdx++)
			{
				cout << "Enter the Elements for [" << rowIdx << "][" << columnIdx << "][" << zaxisIdx
					<< "]:";
				cin>>arrayPtr[rowIdx][columnIdx][zaxisIdx];
			}
		}
	}
}

void print(int*** arrayPtr, const int& rows, const int& columns, const int& zaxis)
{
	cout << "Elements of Matrix:" << endl;
	for (int rowIdx = 0; rowIdx < rows; rowIdx++)
	{
		cout << "{";
		for (int columnIdx = 0; columnIdx < columns; columnIdx++)
		{
			cout << "{";
			for (int zaxisIdx = 0; zaxisIdx < zaxis; zaxisIdx++)
			{
				cout << arrayPtr[rowIdx][columnIdx][zaxisIdx];
				if (zaxisIdx+1 != zaxis)
					cout << ",";
			}
			cout << "}";
			if (columnIdx+1 != columns)
				cout << ",";
		}
		cout << "}"<<endl;
	}
}



// To execute C++, please define "int main()"
int main() {
	int ***dimensional_array = nullptr;
	int rows = 0, columns = 0, zaxis = 0;
	cout << "Enter The Rows:";
	cin >> rows;
	cout << "Enter The Columns:";
	cin >> columns;
	cout << "Enter z Axis:";
	cin >> zaxis;

	dimensional_array = new int**[rows];

	for (int idx = 0; idx < rows; idx++)
	{
		dimensional_array[idx] = new int*[columns];
		for (int columnIdx = 0; columnIdx <columns ; columnIdx++)
		{
			dimensional_array[idx][columnIdx] = new int[zaxis];
		}
	}

	fill(dimensional_array, rows, columns, zaxis);
	print(dimensional_array, rows, columns, zaxis);
	
	system("PAUSE");
}