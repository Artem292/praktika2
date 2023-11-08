using namespace std;
#include <iostream>
#include <vector>

int main() 
{
    setlocale(0, "");
    int n;
    cout << "введите количество элементов : ";
    cin >> n;

    if (n <= 0) 
    {
        cout << "введите положительное число элементов.\n";
        return 0;
    }

    vector<int> sequence(n);  // Создаёт вектор размером n

    cout << "введите последовательность целых чисел:\n";
    for (int i = 0; i < n; ++i) 
    {
        cin >> sequence[i];
    }

    if (sequence.empty()) 
    {
        cout << "последовательность пустая.\n";
        return 0;
    }

    int min_num = *min_element(sequence.begin(), sequence.end());  // Находит минимальное число
    int min_count = count(sequence.begin(), sequence.end(), min_num);  // Считает количество повторений минимального числа

    cout << "минимальное число: " << min_num << endl;
    cout << "количество повторений минимального числа: " << min_count << endl;

    return 0;
}
