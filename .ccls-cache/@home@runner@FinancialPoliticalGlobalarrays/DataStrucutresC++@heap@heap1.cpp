#include <iostream>

class MinHeap {

private:
  int *heapArr;
  int capacity;
  int heap_size;

public:
  MinHeap(int cap) {
    heapArr = new int [cap];
    capacity = cap;
    heap_size = 0;
  }
  int getParent(int i) { return (i - 1) / 2; }
  int getLeftChild(int i) {
    return (i * 2) + 1;
  }
	  int getRightChild(int i){return (i*2)+2;};
    void addkey(int key) {
      if (heap_size == capacity) {
        std::cout << " reached heap limit with size: " << heap_size
                  << std::endl;
        return;
      }
      heap_size++;
      int i = heap_size - 1;
      heapArr[i] = key;
      while (i >= 0 && heapArr[getParent(i)] > heapArr[i]) {
                   std::swap(heapArr[getParent(i)] ,heapArr[i]);
                   i = getParent(i);
      }
    }

    void deleteRootKey() {
      // parent key  .
      if (heap_size == 0) {
        std::cout << " heap is empty" << std::endl;
      }
      heap_size--;
      heapArr[0] = heapArr[heap_size];
      int i = 0;
      while (i < heap_size) {
        int left = getLeftChild(i);
        int right = getRightChild(i);
        int smallest = i;

        if (left < heap_size && heapArr[left] < heapArr[smallest])
             {
               smallest = left;
             }
        else if (right < heap_size && heapArr[right] < heapArr[smallest])
             {
               smallest =  right;
             }
        if (smallest != i) {
          std::swap(heapArr[i], heapArr[smallest]);
        } else {
          break;
        }
        i = smallest;
      }
    }

    void deleteTheHeap(int key) {
      int i = 0;
      while (i < heap_size && heapArr[i] != key) {
        i++;
      }
      if (i == heap_size) {

        std::cout << "key not found" << std::endl;
        return;
      }

      std::swap(heapArr[i], heapArr[heap_size - 1]);

      heap_size--;

      while (i < heap_size) {
        int left = getLeftChild(i);
        int right = getRightChild(i);
        int smallest = i;

        if (left < heap_size && heapArr[left] < heapArr[smallest]) {
          smallest = left;

        } else if (right < heap_size && heapArr[right] < heapArr[smallest]) {
          smallest = right;
        }
        if (smallest != i) {
          std::swap(heapArr[i], heapArr[smallest]);
        } else {
          break;
        }
        i = smallest;
      }
    }
    void printHeap() {
      std::cout << " print heap" << std::endl;
      std::cout << "heap size: " << heap_size << std::endl;
      for (int i = 0; i < heap_size; i++) {
        std::cout << heapArr[i] << " ";
      }
    }
  
  void minheapfy(int i) {
    int left = getLeftChild(i);
    int right = getRightChild(i);
    int smallest = i;

    if (left < heap_size && heapArr[left] < heapArr[smallest]) {
      smallest = left;
    }
    if (right < heap_size && heapArr[right] < heapArr[smallest])
    {
      smallest = right;
    }
    if (smallest != i) {
      std::swap(heapArr[i], heapArr[smallest]);
      minheapfy(smallest);
    }
  }
};

class MaxHeap {

  int *heapArr;
  int capacity;
  int heap_size;

public:
  int getParent(int i) { return (i - 1) / 2; }
  int getLeftChild(int i)
{
    return (i * 2) + 1;
}
int getRightChild(int i){return (i*2)+2;};
    MaxHeap(int cap)
    {
      heapArr = new int[cap];
      capacity = cap;
      heap_size = 0;
    }
    void maxAddkey(int key) {
      if (heap_size == capacity) {
        std::cout << " reached heap limit with size: " << heap_size << std::endl;
        return;
      }

      heap_size++;
      heapArr[heap_size] = key;
      int i = heap_size;
      while (i > 0 && heapArr[getParent(i)] < heapArr[i])
      {
          int temp = heapArr[getParent(i)];
          std::swap(heapArr[getParent(i)], heapArr[i]);
        }
    }
    void deleteKey(int key) {
      if (heap_size == 0) {
        std::cout << " heap is empty" << std::endl;
      }
      int i = 0;
      while (i < heap_size && heapArr[i] != key) {
        i++;
      }
      if (i == heap_size) {
        std::cout << "key not found" << std::endl;
        return;
      }
      std::swap(heapArr[i], heapArr[heap_size - 1]);

      heap_size--;
      maxheapfy(i);
    }

    void maxheapfy(int i)
    {
      int left = getLeftChild(i);
      int right = getRightChild(i);
      int largest = i;
      if (left < heap_size && heapArr[left] > heapArr[largest])
        largest = left;
      else if (right < heap_size && heapArr[right] > heapArr[largest])
        largest = right;
      if (largest != i) {
        std::swap(heapArr[i], heapArr[largest]);
        maxheapfy(largest);
      }
    }
  };

  int main() {
    //	int array[10] = {1,2,3,4,5,6,7,8,9,10};
    MinHeap minheap(10);

    minheap.addkey(3);
    minheap.addkey(2);
    minheap.addkey(15);
    minheap.addkey(5);
    minheap.addkey(4);
    minheap.addkey(1);
    minheap.addkey(6);
    minheap.addkey(2);
    minheap.printHeap();
    return 0;
  }
