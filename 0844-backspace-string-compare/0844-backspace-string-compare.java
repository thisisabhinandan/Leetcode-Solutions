import java.util.Stack;

class Solution {
    public boolean backspaceCompare(String s, String t) {
        Stack<Character> st1 = new Stack<>();
        Stack<Character> st2 = new Stack<>();

        // Process string s
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == '#') {
                if (!st1.isEmpty()) {
                    st1.pop();
                }
            } else {
                st1.push(s.charAt(i));
            }
        }

        // Process string t
        for (int i = 0; i < t.length(); i++) {
            if (t.charAt(i) == '#') {
                if (!st2.isEmpty()) {
                    st2.pop();
                }
            } else {
                st2.push(t.charAt(i));
            }
        }

        // Compare the two stacks
        while (!st1.isEmpty() && !st2.isEmpty()) {
            if (st1.pop() != st2.pop()) {
                return false;
            }
        }

        // If both stacks are empty, strings are equivalent
        return st1.isEmpty() && st2.isEmpty();
    }
}
