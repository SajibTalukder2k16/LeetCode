<h2><a href="https://leetcode.com/problems/arithmetic-slices/">413. Arithmetic Slices</a></h2><h3>Medium</h3><hr><div><p>An integer array is called arithmetic if it consists of <strong>at least three elements</strong> and if the difference between any two consecutive elements is the same.</p>

<ul>
	<li>For example, <code style="font-family: monospace, Bangla775, sans-serif;">[1,3,5,7,9]</code>, <code style="font-family: monospace, Bangla775, sans-serif;">[7,7,7,7]</code>, and <code style="font-family: monospace, Bangla775, sans-serif;">[3,-1,-5,-9]</code> are arithmetic sequences.</li>
</ul>

<p>Given an integer array <code style="font-family: monospace, Bangla775, sans-serif;">nums</code>, return <em>the number of arithmetic <strong>subarrays</strong> of</em> <code style="font-family: monospace, Bangla775, sans-serif;">nums</code>.</p>

<p>A <strong>subarray</strong> is a contiguous subsequence of the array.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla775, sans-serif;"><strong>Input:</strong> nums = [1,2,3,4]
<strong>Output:</strong> 3
<strong>Explanation:</strong> We have 3 arithmetic slices in nums: [1, 2, 3], [2, 3, 4] and [1,2,3,4] itself.
</pre>

<p><strong>Example 2:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla775, sans-serif;"><strong>Input:</strong> nums = [1]
<strong>Output:</strong> 0
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="font-family: monospace, Bangla775, sans-serif;">1 &lt;= nums.length &lt;= 5000</code></li>
	<li><code style="font-family: monospace, Bangla775, sans-serif;">-1000 &lt;= nums[i] &lt;= 1000</code></li>
</ul>
</div>