// Time Complexity:  O(n)
// Space Complexity: O(n)

class Solution {
public:
    int calPoints(const vector<string>& operations) {
        stack<int32_t> record;
        int32_t sum = 0;
        for (const std::string &operation : operations) {
            if (operation == "+") {
                const int32_t top = record.top();
                record.pop();
                const int32_t newTop = top + record.top();

                record.push(top);
                record.push(newTop);

                sum += newTop;
            } else if (operation == "D") {
                record.push(record.top()*2);

                sum += record.top();
            } else if (operation == "C") {
                sum -= record.top();
                record.pop();
            } else {
                record.push(stoi(operation));
                sum += record.top();
            }
        }

        return sum;
    }
};
