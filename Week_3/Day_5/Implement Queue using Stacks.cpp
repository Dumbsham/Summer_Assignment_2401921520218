#include <stack>

using namespace std;

class MyQueue {
private:
    stack<int> inSt;
    stack<int> outSt;
    void shiftStacks() {
        if (outSt.empty()) {
            while (!inSt.empty()) {
                outSt.push(inSt.top());
                inSt.pop();
            }
        }
    }
public:
    MyQueue() {}
    
    void push(int x) {
        inSt.push(x);
    }
    
    int pop() {
        shiftStacks();
        int val = outSt.top();
        outSt.pop();
        return val;
    }
    
    int peek() {
        shiftStacks();
        return outSt.top();
    }
    
    bool empty() {
        return inSt.empty() && outSt.empty();
    }
};
