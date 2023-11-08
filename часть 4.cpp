
using namespace std;
#include <iostream>
int main()
{
    setlocale(LC_ALL, "");
    const int MAX_SIZE = 100;
    int n;
    int X[MAX_SIZE];
    int maxElement, minElement;
    int indexOfMax, indexOfMin;
    cout << "Введите размер массива: ";
    cin >> n;
    cout << "Введите элементы массива:\n";
    for (int i = 0; i < n; ++i) 
    {
        cout << "X[" << i << "]: ";
        cin >> X[i];
    }
    maxElement = minElement = X[0];
    indexOfMax = indexOfMin = 0;
    for (int i = 1; i < n; ++i) 
    {
        if (X[i] > maxElement)
        {
            maxElement = X[i];
            indexOfMax = i;
        }

        if (X[i] < minElement) 
        {
            minElement = X[i];
            indexOfMin = i;
        }
    }
    cout << "Максимальный элемент: " << maxElement << "\n";
    cout << "Индекс максимального элемента: " << indexOfMax << "\n";
    cout << "Минимальный элемент: " << minElement << "\n";
    cout << "Индекс минимального элемента: " << indexOfMin << "\n";

    return 0;
}
