class Solution {
public:
    bool isValid(string s) {
        vector<char> stack;

        for (char a : s) {
            if (a == '{' || a == '[' || a == '(') {
                stack.push_back(a);
            }
            else {
                if (stack.empty()) {
                    return false;
                }

                char top = stack.back();

                if ((top == '(' && a == ')') ||
                    (top == '[' && a == ']') ||
                    (top == '{' && a == '}')) {
                    stack.pop_back();
                }
                else {
                    return false;
                }
            }
        }

        return stack.empty();
    }
};
