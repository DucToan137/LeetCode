public class solution {
    public int maxPower(String s) {
        int max = 1;
        int count = 1;

        for (int i = 0; i < s.length() - 1; ++i) {
            if (s.charAt(i) == s.charAt(i + 1)) {
                count++;
                if (count > max) {
                    max = count;
                }
            } else {
                count = 1;
            }
        }
        return max;
    }

    public static void main(String[] args) {
        solution sol = new solution();
        String s = "leetcode";
        int res = sol.maxPower(s);
        System.out.println(res);
    }
}
