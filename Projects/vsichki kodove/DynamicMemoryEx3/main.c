#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dyn_array_t {
    int *data;
    size_t capacity;
    size_t size;
};

struct dyn_array_t* create(size_t capacity)
{
    struct dyn_array_t *result = malloc(sizeof(struct dyn_array_t));
    if (result==NULL){
        fprintf(stderr, "Can not allocate memory.\n");
        exit(1);
    }
    result->data = malloc(capacity * sizeof(int));
    if (result->data==NULL){
        fprintf(stderr, "Can not allocate memory.\n");
        exit(1);
    }
    result->capacity = capacity;
    result->size = 0;
    return result;
}

void ensure_capacity(struct dyn_array_t *arr, size_t capacity){
    if (arr->capacity>=capacity) return;
    arr->data = realloc(arr->data, capacity*sizeof(int));
    if (arr->data==NULL){
        fprintf(stderr, "Can not reallocate memory.\n");
        exit(1);
    }
    arr->capacity = capacity;
}

void push(struct dyn_array_t *arr, int n){
    if (arr->capacity==arr->size){
        ensure_capacity(arr, arr->capacity*2);
    }
    arr->data[arr->size++] = n;
}

void insert_at(struct dyn_array_t *arr, size_t index, int value){
    if (index > arr->size) return;
    if (arr->capacity == arr->size){
        ensure_capacity(arr, arr->capacity*2);
    }
    int *p = &arr->data[arr->size-1];
    int *end = &arr->data[index];
    while(p >= end){
        *(p+1) = *p;
        p--;
    }
    arr->data[index] = value;
    arr->size++;
}

void delete_at(struct dyn_array_t *arr, size_t index){
    int *p = &arr->data[index];
    int *end = &arr->data[arr->size-1];
    while(p <= end){
        *p = *(p+1);
        p++;
    }
    arr->size--;
}

int* getAsPointer(struct dyn_array_t *arr, size_t index){
    if (index>=arr->size) return NULL;
    return &arr->data[index];
}

void set(struct dyn_array_t *arr, size_t index, int value){
    if (index>=arr->size) return;
    arr->data[index] = value;
}


int get(struct dyn_array_t *arr, size_t index){
    return arr->data[index];
}

size_t size(struct dyn_array_t *arr){
    return arr->size;
}

void destroy(struct dyn_array_t *arr){
    free(arr->data);
    free(arr);
}

void print(struct dyn_array_t *arr){
    for(size_t i = 0; i < arr->size; i++){
        printf("%d ", arr->data[i]);
   }
}

int main()
{
   struct dyn_array_t *arr = create(16);
   for(size_t i = 0; i < 17; i++){
        push(arr, i);
   }
   insert_at(arr, 3, 999);
   delete_at(arr, 3);
   set(arr,13,10);
   print(arr);
   destroy(arr);
}
