#include <iostream>
using namespace std;
int queue[100];
int front = -1, back = -1;
void enqueue(int x) {
  if (back == 99) {
    cout << "Queue Overflow" << endl;
    return;
  }
  back++;
  queue[back] = x;
  if (front == -1) {
    front++;
  }
}
void dequeue() {
  if (front == -1 || front > back) {
    cout << "Queue Underflow" << endl;
    return;
  }
  front++;
}
int peek() {
  if (front == -1 || front > back) {
    cout << "Queue Underflow" << endl;
    return -1;
  }
  return queue[front];
}
bool isEmpty() {
  if (front == -1 || front > back) {
    return true;
  }
  return false;
}
int main() { return 0; }
