#include <stdlib.h>

#define SIZE 10007   // prime number for hash table

typedef struct Node {
    int key;
    int value;
    struct Node* next;
} Node;

Node* hashTable[SIZE];

int hash(int key) {
    if (key < 0) key = -key;
    return key % SIZE;
}

void insert(int key, int value) {
    int idx = hash(key);
    Node* node = (Node*)malloc(sizeof(Node));
    node->key = key;
    node->value = value;
    node->next = hashTable[idx];
    hashTable[idx] = node;
}

int find(int key) {
    int idx = hash(key);
    Node* curr = hashTable[idx];
    while (curr) {
        if (curr->key == key)
            return curr->value;
        curr = curr->next;
    }
    return -1;
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    for (int i = 0; i < SIZE; i++)
        hashTable[i] = NULL;

    int* result = (int*)malloc(2 * sizeof(int));

    for (int i = 0; i < numsSize; i++) {
        int need = target - nums[i];
        int idx = find(need);

        if (idx != -1) {
            result[0] = idx;
            result[1] = i;
            *returnSize = 2;
            return result;
        }
        insert(nums[i], i);
    }

    *returnSize = 0;
    return result;
}