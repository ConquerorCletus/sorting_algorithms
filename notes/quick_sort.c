#include <stdio.h>
  2 
  3 void swap(int *a, int *b){
  4     int t = *a;
  5     *a = *b;
  6     *b = t;
  7 }
  8 
  9 int partition(int array[], int low, int high){
 10     int pivot = array[high];
 11 
 12     int i = low - 1;
 13 
 14     for (int j = low; j < high; j++){
 15         if(array[j] <= pivot){
 16             i++;
 17             swap(&array[i], &array[j]);
 18         }
 19     }
 20     swap(&array[i + 1], &array[high]);
 21     return (i + 1);
 22 }
 23 
 24 void quickSort(int array[], int low, int high){
 25     if (low < high){
 26         int p = partition(array, low, high);
 27 
 28         quickSort(array, low, p - 1); // left
 29         quickSort(array, p + 1, high); //right
 30     }
 31 }
 32 
 33 void printData(int array[], int size){
 34     for (int i = 0; i < size; i++){
 35         printf("%d ", array[i]);
 36     }
 37     printf("\n");
 38 }

    int main(){
 41     int data[] = {8, 7, 2, 1, 0, 9, 6};
 42     int n = sizeof(data) / sizeof(data[0]);
 43 
 44     printf("Before sorting\n");
 45     printData(data, n);
 46 
 47     quickSort(data, 0, n - 1);
 48 
 49     printf("After sorting\n");
 50     printData(data, n);
 51 wap(int *a, int *b){
  4     int t = *a;
  5     *a = *b;
  6     *b = t;
  7 }
  8 
  9 int partition(int array[], int low, int high){
 10     int pivot = array[high];
 11 
 12     int i = low - 1;
 13 
 14     for (int j = low; j < high; j++){
 15         if(array[j] <= pivot){
 16             i++;
 17             swap(&array[i], &array[j]);
 18         }
 19     }
 20     swap(&array[i + 1], &array[high]);
 21     return (i + 1);
 22 }
 23 
 24 void quickSort(int array[], int low, int high){
 25     if (low < high){
 26         int p = partition(array, low, high);
 27 
 28         quickSort(array, low, p - 1); // left
 29         quickSort(array, p + 1, high); //right
 30     }
 31 }
 32 
 33 void printData(int array[], int size){
 34     for (int i = 0; i < size; i++){
 35         printf("%d ", array[i]);
 36     }
 37     printf("\n");
 38 }

    int main(){
 41     int data[] = {8, 7, 2, 1, 0, 9, 6};
 42     int n = sizeof(data) / sizeof(data[0]);
 43 
 44     printf("Before sorting\n");
 45     printData(data, n);
 46 
 47     quickSort(data, 0, n - 1);
 48 
 49     printf("After sorting\n");
 50     printData(data, n);
 51 wap(int *a, int *b){
  4     int t = *a;
  5     *a = *b;
  6     *b = t;
  7 }
  8 
  9 int partition(int array[], int low, int high){
 10     int pivot = array[high];
 11 
 12     int i = low - 1;
 13 
 14     for (int j = low; j < high; j++){
 15         if(array[j] <= pivot){
 16             i++;
 17             swap(&array[i], &array[j]);
 18         }
 19     }
 20     swap(&array[i + 1], &array[high]);
 21     return (i + 1);
 22 }
 23 
 24 void quickSort(int array[], int low, int high){
 25     if (low < high){
 26         int p = partition(array, low, high);
 27 
 28         quickSort(array, low, p - 1); // left
 29         quickSort(array, p + 1, high); //right
 30     }
 31 }
 32 
 33 void printData(int array[], int size){
 34     for (int i = 0; i < size; i++){
 35         printf("%d ", array[i]);
 36     }
 37     printf("\n");
 38 }

    int main(){
 41     int data[] = {8, 7, 2, 1, 0, 9, 6};
 42     int n = sizeof(data) / sizeof(data[0]);
 43 
 44     printf("Before sorting\n");
 45     printData(data, n);
 46 
 47     quickSort(data, 0, n - 1);
 48 
 49     printf("After sorting\n");
 50     printData(data, n);
 51 wap(int *a, int *b){
  4     int t = *a;
  5     *a = *b;
  6     *b = t;
  7 }
  8 
  9 int partition(int array[], int low, int high){
 10     int pivot = array[high];
 11 
 12     int i = low - 1;
 13 
 14     for (int j = low; j < high; j++){
 15         if(array[j] <= pivot){
 16             i++;
 17             swap(&array[i], &array[j]);
 18         }
 19     }
 20     swap(&array[i + 1], &array[high]);
 21     return (i + 1);
 22 }
 23 
 24 void quickSort(int array[], int low, int high){
 25     if (low < high){
 26         int p = partition(array, low, high);
 27 
 28         quickSort(array, low, p - 1); // left
 29         quickSort(array, p + 1, high); //right
 30     }
 31 }
 32 
 33 void printData(int array[], int size){
 34     for (int i = 0; i < size; i++){
 35         printf("%d ", array[i]);
 36     }
 37     printf("\n");
 38 }

    int main(){
 41     int data[] = {8, 7, 2, 1, 0, 9, 6};
 42     int n = sizeof(data) / sizeof(data[0]);
 43 
 44     printf("Before sorting\n");
 45     printData(data, n);
 46 
 47     quickSort(data, 0, n - 1);
 48 
 49     printf("After sorting\n");
 50     printData(data, n);
 51 }
