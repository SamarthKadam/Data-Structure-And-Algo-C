#include<stdio.h>
#define SIZE 10
#define PRIME 7
int PrimeHash(int key){
    return PRIME - (key % PRIME);
}
int Hash(int key){
    return key % SIZE;
}
int DoubleHash(int H[], int key){
    int idx = Hash(key);
    int i = 0;
    while (H[(Hash(idx) + i * PrimeHash(idx)) % SIZE] != 0){
        i++;
    }
    return (idx + i * PrimeHash(idx)) % SIZE;
}
void Insert(int H[], int key){
    int idx = Hash(key);
 
    if (H[idx] != 0){
        idx = DoubleHash(H, key);
    }
    H[idx] = key;
}
int Search(int H[], int key){
    int idx = Hash(key);
    int i = 0;
    while (H[(Hash(idx) + i * PrimeHash(idx)) % SIZE] != key){
        i++;
        if (H[(Hash(idx) + i * PrimeHash(idx)) % SIZE] == 0){
            return -1;
        }
    }
    return (Hash(idx) + i * PrimeHash(idx)) % SIZE;
}
int main()
{
	int A[] = {5, 25, 15, 35, 95};
    int n = sizeof(A)/sizeof(A[0]);
    int HT[10] = {0};
    for (int i=0; i<n; i++)
	{
        Insert(HT, A[i]);
    }
    int index = Search(HT, 15);
    printf("%d",index);
    return 0;
	
}
