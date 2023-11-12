// просто динамическое выделение памяти
int *ptr0 = new int; // создаёт указатель на динамически аллоцированный int
delete pointer;         // освобождает память
int *ptr1 = new int(7);  // прямая инициализация
int *ptr2 = new int{8};  // uniform-инициализация

// динамическое выделение памяти для массивов
int *ptr_to_array = new int[n]; // n - размер массива
delete[] pa; // освобождение памяти (обязательно со скобками [])

// инициализация
int *array1 = new int[5] {9, 7, 5, 3, 1}; // инициализация значениями
int *array2 = new int[5] {};              // инициализация всего массива значением 0
int *array3 = new int[10]();              // инициализация всего массива значением 0

// Динамическое выделение памяти под двумерный массив m*n
int **arr;                    // указатель на указатель на int
arr = new int *[m];           // выделение памяти под массив указателей на int, размером m (количество строк aka row)
for (int i = 0; i < m; i++) { // выделяем для каждой строки память под массив размера n (количество столбцов aka column)
      mas[i] = new int[n];    // присвоение адреса каждого ряда, каждой строке
}
// Очистка памяти
for (int i = 0; i < m; i++){
	delete [] mas[i];
}
delete [] mas;
```