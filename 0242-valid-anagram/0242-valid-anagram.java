class Solution {
    public boolean isAnagram(String s, String t) {
return Arrays.stream(s.toLowerCase().split("")).sorted().collect(Collectors.joining()).equals(
                Arrays.stream(t.toLowerCase().split("")).sorted().collect(Collectors.joining())
        );
    }
}