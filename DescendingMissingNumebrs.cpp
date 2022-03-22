#include <iostream>
using namespace std;

void printMissingNumbers(int, int);

int main()
{
    int upperValue, lowerValue;
    cout << "Enter lower value and upper value" << endl;
    cin >> lowerValue >> upperValue;
    if(upperValue > lowerValue){
        printMissingNumbers(upperValue, lowerValue);
    }
    else{
        cout << "0xFF 0xFF";
    }
    return 0;
}

void printMissingNumbers(int upperValue, int lowerValue)
{
    int arrSize = upperValue - lowerValue - 1;
    int petya[arrSize];
    int startNumber = upperValue - 1;
    for(int k = 0; k < arrSize; k++)
    {
        petya[k] = startNumber;
        startNumber = startNumber - 1;
        cout << petya[k] << " ";
        
    }
    cout << "\n " << arrSize;

}