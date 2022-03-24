#include <stdio.h>
#include <iostream>

using namespace std;

int* removeDuplicates(int[], int, int*);
int size_old;
int size_new;


int main(){
            
    int size_old = 11;
    int arr_old[size_old]={1,1,2,2,3,3,3,4,4,5,6};
    
    int size_new = 0;

    int* no_dup_arr = removeDuplicates(arr_old, size_old, &size_new);
    
    cout << "New array without duplicates: " << endl;

    for (int i=0; i<size_new; i++)
    {
        cout << no_dup_arr[i] << " ";
    }

    cout << "\n" << "Size of new array is: " << size_new;

    return 0;
}

int* removeDuplicates(int arr_old[], int size_old, int *size_new_p)
{
       
    if (size_old == 0)
    {
        cout << "ERROR!" << endl;
        return arr_old;
    }

    int new_index = 0; //to store index of next unique element
    int arr_new[size_old];
    arr_new[0] = arr_old[0];

    for (int i = 0; i < size_old; i++)
    {
        if(arr_new[new_index] != arr_old[i])
        {
            arr_new[new_index+1] = arr_old[i];
            new_index++;
        }
    }
    int size_new = new_index+1;

    if (size_new == size_old){
        return arr_old;
    }

    int *no_dup_arr = new int[size_new];

    for (int i=0; i<size_new; i++){
        no_dup_arr[i] = arr_new[i];
    
    }
    *size_new_p = size_new;
    return no_dup_arr;
    
}
