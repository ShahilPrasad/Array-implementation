
#include "UnsortedList.h"
template<class T>
UnsortedList<T>::UnsortedList() {
    length = 0;
    currentPos = 0;
    // you don't do anything to the array
}
template<class T>
void UnsortedList<T>::MakeEmpty() { //making the length 0 turns it empty
    length = 0;

}
template<class T>
bool UnsortedList<T>::IsFull() const {

    return length == MAX_ITEMS; //self explinatory, if it's true it will return true
}
template<class T>
int UnsortedList<T>::GetLength() const {
    return length;
}
template<class T>
bool UnsortedList<T>::Contains(T someItem) { //trying to find the first isntance of an item
    for (int i = 0; i<length; i++){ //iterate through the list(length is better cause max item will iterate through trash values)
        if (arr[i] == someItem){ //searches the index for that item
            return true; //if found it will return true
        }

    }
    return false;
}
template<class T>
void UnsortedList<T>::AddItem(T item) {
    arr[length] = item; //adds the item to the array
    length++;

}
template<class T>
void UnsortedList<T>::DeleteItem(T item) {
    for (int i = 0; i < length; i++){ //loops through the array
        if (arr[i] == item){ //while loop if the item is found it will be set to arr[i]
            arr[i] = arr[length - 1]; //since arr[i] is storing the item we want to delete. We will remove it from the array

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

