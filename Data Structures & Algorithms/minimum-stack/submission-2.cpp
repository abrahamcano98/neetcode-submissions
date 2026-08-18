class MinStack {
public:
    vector<int> values;
    vector<int> mins;
    int abs_min=0;
    int size;

    MinStack() {
        abs_min = 2147483647;
        size = 0;
    }

    void push(int val) {
        values.push_back(val);
        size++;

        if (val < abs_min) {
            abs_min = val;
        }
        mins.push_back(abs_min);
    }

    void pop() {
        values.pop_back();
        int min=mins.back();
        mins.pop_back();
        if(min==abs_min && values.size()>0)
        {
            abs_min=mins.back();
        } else
        {
            abs_min=2147483647;
        }
        size--;
    }

    int top() {
        return values[size - 1];
    }

    int getMin() {
        return mins[size-1];
    }
};