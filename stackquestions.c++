//Nearest greatest element to right 

#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main() {
    vector<int> arr = {1,3,0,0,1,2,4};
    int n = arr.size();
    stack<int> s;
    vector<int> res(n);
    for (int i=n-1;i>=0;i--) {
        while (!s.empty()&&arr[i]>=s.top()) {
            s.pop();
        }
        if (s.empty()){
            res[i]=-1;
        } else {
            res[i]=s.top();
        }
        s.push(arr[i]);
    }
    for (int i=0;i<arr.size();i++) {
        cout<<res[i]<<endl;
    }
    return 0;
}

// nearest greatest element to left 

#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main() {
    vector<int> arr = {4, 6, 3, 2, 8, 1, 9};
    int n = arr.size();
    stack<int> s;
    vector<int> res(n);
    for (int i = 0; i < n; i++) {
        while (!s.empty() && s.top() <= arr[i]) {
            s.pop();
        }
        if (s.empty()) {
            res[i] = -1;
        } else {
            res[i] = s.top();
        }
        s.push(arr[i]);
    }
    for (int i = 0; i < arr.size(); i++) {
        cout<<res[i] << endl;
    }
    return 0;
}

//nearest smallest element to right

#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main() {
    vector<int> arr = {4, 6, 3, 2, 8, 1, 9};
    int n = arr.size();
    stack<int> s;
    vector<int> res(n);
    for (int i = 0; i < n; i++) {
        while (!s.empty() && s.top() >= arr[i]) {
            s.pop();
        }
        if (s.empty()) {
            res[i] = -1;
        } else {
            res[i] = s.top();
        }
        s.push(arr[i]);
    }
    for (int i = 0; i < arr.size(); i++) {
        cout <<res[i] << endl;
    }
    return 0;
}

// nearest smallest element to left 

#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main() {
    vector<int> arr = {1, 3, 0, 6, 0, 6, 9};
    int n = arr.size();
    stack<int> s;
    vector<int> res(n);
    for (int i = 0; i < n; i++) {
        while (!s.empty() && s.top() >= arr[i]) {
            s.pop();
        }
        if (s.empty()) {
            res[i] = -1;
        } else {
            res[i] = s.top();
        }
        s.push(arr[i]);
    }
    for (int i = 0; i < arr.size(); i++) {
        cout <<res[i] << endl;
    }
    return 0;
}
