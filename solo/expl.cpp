#include <iostream>
using namespace std;
 
// функция с алгоритмом двоичного поиска 
int Search_Binary (int arr[], int left, int right, int key)
{
 int midd = 0;
 while (1)
 {
 midd = (left + right) / 2;
 
 if (key < arr[midd])       // если искомое меньше значения в ячейке
 right = midd - 1;      // смещаем правую границу поиска
 else if (key > arr[midd])  // если искомое больше значения в ячейке
 left = midd + 1;    // смещаем левую границу поиска
 else                       // иначе (значения равны)
 return midd;           // функция возвращает индекс ячейки
 
 if (left > right)          // если границы сомкнулись 
 return -1;
 }
}
 
int main()
{
 int x ; 
 setlocale (LC_ALL, "rus");
 cout <<"press border"<< endl;
 cin >> x;
 const int SIZE = x;
 int array[SIZE] = {};
 int key = 0;
 int index = 0; // индекс ячейки с искомым значением
 
 for (int i = 0; i < SIZE; i++) // заполняем и показываем массив
 {
 array[i] = i + 1;
 cout << array[i] << " | ";
 }
 
 cout << "\n\nenter u number ";
 cin >> key;
 
 index = Search_Binary (array, 0, SIZE, key);
 
 if (index >= 0) 
 cout << "u num there is in index: " << index << "\n\n";
 else
 cout << "in arrey no this num\n\n";
 
 return 0;
}