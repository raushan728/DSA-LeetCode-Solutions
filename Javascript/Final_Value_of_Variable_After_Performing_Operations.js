/**
 * @param {string[]} operations
 * @return {number}
 */
var finalValueAfterOperations = function(operations) {
     let ans = 0;
    for (let x of operations) {
        if (x.includes("++"))
            ans++;
        else
            ans--;
    }
    return ans;
};