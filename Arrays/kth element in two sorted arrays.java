private int kthElement(int[] arr1, int[] arr2, int k) {
        if (k < 1 || k > (arr1.length + arr2.length))
            return -1;
        return helper(arr1, 0, arr1.length - 1, arr2, 0, arr2.length - 1, k);
    }


private int helper(int[] arr1, int low1, int high1, int[] arr2, int low2, int high2, int k) {
    if (low1 > high1) {
        return arr2[low2 + k - 1];
    } else if (low2 > high2) {
        return arr1[low1 + k - 1];
    }
    if (k == 1) {
        return Math.min(arr1[low1], arr2[low2]);
    }
    int i = Math.min(low1 + k / 2, high1 + 1);
    int j = Math.min(low2 + k / 2, high2 + 1);
    if (arr1[i - 1] > arr2[j - 1]) {
        return helper(arr1, low1, high1, arr2, j, high2, k - (j - low2));
    } else {
        return helper(arr1, i, high1, arr2, low2, high2, k - (i - low1));
    }
}
