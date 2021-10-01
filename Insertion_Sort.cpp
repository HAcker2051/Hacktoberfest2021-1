#include <iostream>
using namespace std;

void insertionSort(int *input, int size)
{
    //Write your code here
    for (int i = 0; i < size; i++)
    {
        int j, current = input[i];
        for (j = i - 1; j >= 0; j--)
        {
            if (current < input[j])
            {
                input[j + 1] = input[j];
            }
            else
            {
                break;
            }
        }
        input[j + 1] = current;
        for (int k = 0; k < size; k++)
        {
            cout << input[k] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int input[20], size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> input[i];
    }
    insertionSort(input, size);
    return 0;
}
