
#include "UnsortedList.h"
template<class T>
UnsortedList<T>::UnsortedList() {
    length = 0;
    currentPos = 0;
}
template<class T>
void UnsortedList<T>::MakeEmpty() {
    length = 0;

}
template<class T>
bool UnsortedList<T>::IsFull() const {

    return length == MAX_ITEMS;
}
template<class T>
int UnsortedList<T>::GetLength() const {
    return 0;
}
template<class T>
bool UnsortedList<T>::Contains(int someItem) {

    for (int i = 0; i<length; i++){
        if (arr[i] == someItem){
            return true;
        }
    }
    return false;
}
template<class T>
void UnsortedList<T>::AddItem(int item) {
    arr[length] = item;
    length++;

}
template<class T>
void UnsortedList<T>::DeleteItem(int item) {
    for (int i = 0; i < length; i++){
        if (arr[i] == item){
            arr[i] = arr[length - 1];

        }
    }

}
template<class T>
void UnsortedList<T>::ResetIterator() {
    currentPos = 0; //keep tracks where we are


}
template<class T>
int UnsortedList<T>::GetNextItem() {
    return arr[currentPos++];
}

