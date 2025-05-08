#include<iostream>
using namespace std;
#define SIZE 1001

int heap[SIZE];
int heapsize;

void max_heapify(int arr[], int n, int i) {
    int L = 2 * i + 1;
    int R = 2 * i + 2;
    int largest = i;

    if (L < n && arr[L] > arr[largest]) {
        largest = L;
    }

    if (R < n && arr[R] > arr[largest]) {
        largest = R;
    }

    if (largest != i) {
        swap(arr[i], arr[largest]);
        max_heapify(arr, n, largest);
    }
}

void heap_push(int val){
    if(heapsize >= SIZE){
        cout<<"Heap Overflow"<<endl;
        return;
    }
    heap[heapsize]=val; // simple put value in
    heapsize++; // increase the size of heap
    // percolate up
    int curr = heapsize-1;
    while(curr>0 && heap[(curr-1)/2]<heap[curr]){
        swap(heap[(curr-1)/2],heap[curr]);
        curr = (curr-1)/2;
    }
}

int heap_pop(){
    if (heapsize <= 0) {
        cout << "heap underflow\n";
        return -1;
    }
    int maxi = heap[0];
    heap[0] = heap[heapsize-1];
    heapsize--;
    max_heapify(heap, heapsize, 0);
    return maxi;
}

void show_heap(){
    for(int i=0;i<heapsize;i++){
        cout<<heap[i]<<" ";
    }
    cout<<endl;
}

void init(){
    heapsize=0;
}
int main(){
    init();
    while(true){
        cout<<"1.push...2.pop...3.heap_show...4.terminate"<<endl;
        int option;
        int element;
        cin>>option;
        switch(option){
            case 1:
                cout<<"enter element"<<endl;
                cin>>element;
                heap_push(element);
                break;
            case 2:
                cout<<"Popped "<<heap_pop()<<endl;
                break;
            case 3:
                show_heap();
                break;
            default:
                return 0;
        }
    }
}