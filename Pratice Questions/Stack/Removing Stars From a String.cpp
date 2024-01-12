 char* stack;
    int top = -1;

void push(char c) {
    top = top + 1;
    stack[top] = c;
}

char pop() {
    char ch = stack[top];
    top = top - 1;
    return ch;
}
   string removeStars(string s) {
    top = -1; 
    stack = new char[s.length()]; 

    for (int i = 0; i < s.length(); i++) {
        if (s[i] != '*') {
            push(s[i]);
        } else {
            pop();
        }
    }

 
    string result = "";
    for (int i = 0; i <= top; i++) {
        result += stack[i];
    }

    delete[] stack;  // Free the allocated memory

    return result;
}
