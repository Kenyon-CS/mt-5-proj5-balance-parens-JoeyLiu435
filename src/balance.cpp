#include "balance.hpp"
#include <string>

static bool is_balanced_rec(const std::string& s, int idx, int open) {
    // Base cases
    if (open < 0) return false;              // too many closing ')'
    if (idx == (int)s.size()) return open == 0;  // end of string → all opens must close

    char c = s[idx];
    if (c == '(') {
        return is_balanced_rec(s, idx + 1, open + 1);
    } else if (c == ')') {
        return is_balanced_rec(s, idx + 1, open - 1);
    } else {
        // ignore non-parenthesis characters
        return is_balanced_rec(s, idx + 1, open);
    }
}

bool is_balanced(const std::string& s) {
    return is_balanced_rec(s, 0, 0);
}
