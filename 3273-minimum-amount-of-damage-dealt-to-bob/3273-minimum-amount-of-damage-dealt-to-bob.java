import java.util.*;

class Solution {

    public long minDamage(int power, int[] damage, int[] health) {
        // Step 1: Calculate the time required to kill each enemy
        double[] time = new double[health.length];
        for (int i = 0; i < health.length; i++) {
            time[i] = Math.ceil(health[i] * 1.0 / power);
        }

        // Step 2: Create a list of pairs (damage/time, index) and sort it in descending order
        List<Pair> arr = new ArrayList<>();
        for (int i = 0; i < damage.length; i++) {
            double effectiveness = damage[i] / time[i];
            arr.add(new Pair(effectiveness, i));
        }

        // Sort the list based on effectiveness in descending order
        arr.sort((a, b) -> Double.compare(b.effectiveness, a.effectiveness));

        // Step 3: Calculate the total damage to Bob
        long ans = 0;
        long prev = 0;
        for (Pair p : arr) {
            int idx = p.index;
            prev += time[idx];
            ans += damage[idx] * prev;
        }

        return ans;
    }

    // Pair class to hold effectiveness and index of the enemy
    class Pair {
        double effectiveness;
        int index;

        Pair(double effectiveness, int index) {
            this.effectiveness = effectiveness;
            this.index = index;
        }
    }
}
