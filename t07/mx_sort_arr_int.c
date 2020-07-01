#include <stdio.h>

void mx_sort_arr_int(int *arr, int size){
	for(int i = 0; i < size - 1; i++){
		for(int j = (size - 1); j > i; j--){
			if(arr[j - 1] > arr[j]){
				int temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
//int main(){
//	int arr[] = {3, 55, -11, 1, 0, 4, 22};
//	mx_sort_arr_int(arr, 7);
//	printf("%d %d %d %d %d %d %d", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5], arr[6]);
//}
