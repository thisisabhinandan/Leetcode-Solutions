import java.util.ArrayList;
import java.util.List;

class Solution {
    public List<String> stringSequence(String target) {
        List<String> list = new ArrayList<>();
        String ini = "";
        int i = 0;
        while (!ini.equals(target)) {
            String to = target.substring(0, i + 1);
            char ch = 'a';
            StringBuilder sb = new StringBuilder(ini);

            while (!sb.toString().equals(to)) {
                if (sb.length() < to.length()) {
                    sb.append('a');
                } else {
                    if (sb.charAt(sb.length() - 1) == 'z') {
                        sb.setCharAt(sb.length() - 1, 'a');
                    } else {
                        sb.setCharAt(sb.length() - 1, (char) (sb.charAt(sb.length() - 1) + 1));
                    }
                }
                list.add(sb.toString());
            }

            ini = sb.toString();
            i++;
        }

        return list;
    }
}
