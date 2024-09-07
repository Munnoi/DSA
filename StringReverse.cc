// #include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Stack {
  int top;
  char s[40];
public:
  Stack() { top = -1; }
  void push(char);
  char pop(char[], int);
  void reverse(char[]);
};

void Stack::reverse(char str[]) {
  for (int i = 0; i < strlen(str); i++) {
    top++;
    push(str[i]);
  }
  for (int i = 0; i < strlen(str); i++) {
    str[i] = pop(s, top);
    top--;
  }
  cout << "Reversed string is:" << endl;
  puts(str);
}

void Stack::push(char str) {
  s[top] = str;
}

char Stack::pop(char s[], int top) {
  return s[top--];
}

int main() {
  Stack s;
  char st[20];
  cout << "Enter a string: ";
  cin >> st;
  s.reverse(st);
  
  return 0;
}