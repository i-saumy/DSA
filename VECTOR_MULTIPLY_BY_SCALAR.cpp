#include <iostream>
using namespace std;
class vector_5811
{
private:
int size_5811;
int *coord_5811;
public:
vector_5811();
void modify_5811();
void display_5811();
void multiply_5811();
};
vector_5811::vector_5811()
{
cout << "\nEnter Number of Co-ordinates : ";
cin >> size_5811;
coord_5811 = new int[size_5811];
cout << "\nEnter " << size_5811 << " Co-ordinates : \n";
for (int i_5811 = 0; i_5811 < size_5811; i_5811++)
{
cin >> coord_5811[i_5811];
}
}
void vector_5811::modify_5811()
{
cout << "\nEnter " << size_5811 << " New Co-ordinates : \n";
for (int i5811 = 0; i5811 < size_5811; i5811++)
{
cout << " ";
cin >> coord_5811[i5811];
}
}
void vector_5811::multiply_5811()
{
int num_5811;
cout << "\nEnter Number to multiply : ";
cin >> num_5811;
for (int i5811 = 0; i5811 < size_5811; i5811++)
{
coord_5811[i5811] = coord_5811[i5811] * num_5811;
}
}
void vector_5811::display_5811()
{
cout << "\nVector : (";
for (int i_5811 = 0; i_5811 < size_5811; i_5811++)
{
cout << coord_5811[i_5811];
if (i_5811 != size_5811 - 1)
cout << ",";
}
cout << ")";
}
int main()
{
vector_5811 v_5811;
v_5811.display_5811();
v_5811.modify_5811();
v_5811.display_5811();
v_5811.multiply_5811();
v_5811.display_5811();
return 0;
}
