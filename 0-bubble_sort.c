#include "sort.h"

void bubble_sort(int *array, size_t size){

    for(unsigned int  n=1; n<size-1; ++n){
        for ( unsigned num=0; num<size; ++num){
            if (array[num] > array[num+1]){
                int bigVal = array[num];
                array[num] = array[num+1];
                array[num+1] = bigVal;
                print_array(array, size);
            }
        }
    }


}
