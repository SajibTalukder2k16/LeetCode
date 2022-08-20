<h2><a href="https://leetcode.com/problems/product-of-array-except-self/">238. Product of Array Except Self</a></h2><h3>Medium</h3><hr><div><p>Given an integer array <code style="font-family: monospace, Bangla564, sans-serif;">nums</code>, return <em>an array</em> <code style="font-family: monospace, Bangla564, sans-serif;">answer</code> <em>such that</em> <code style="font-family: monospace, Bangla564, sans-serif;">answer[i]</code> <em>is equal to the product of all the elements of</em> <code style="font-family: monospace, Bangla564, sans-serif;">nums</code> <em>except</em> <code style="font-family: monospace, Bangla564, sans-serif;">nums[i]</code>.</p>

<p>The product of any prefix or suffix of <code style="font-family: monospace, Bangla564, sans-serif;">nums</code> is <strong>guaranteed</strong> to fit in a <strong>32-bit</strong> integer.</p>

<p>You must write an algorithm that runs in&nbsp;<code style="font-family: monospace, Bangla564, sans-serif;">O(n)</code>&nbsp;time and without using the division operation.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla564, sans-serif;"><strong>Input:</strong> nums = [1,2,3,4]
<strong>Output:</strong> [24,12,8,6]
</pre><p><strong>Example 2:</strong></p>
<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla564, sans-serif;"><strong>Input:</strong> nums = [-1,1,0,-3,3]
<strong>Output:</strong> [0,0,9,0,0]
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="font-family: monospace, Bangla564, sans-serif;">2 &lt;= nums.length &lt;= 10<sup>5</sup></code></li>
	<li><code style="font-family: monospace, Bangla564, sans-serif;">-30 &lt;= nums[i] &lt;= 30</code></li>
	<li>The product of any prefix or suffix of <code style="font-family: monospace, Bangla564, sans-serif;">nums</code> is <strong>guaranteed</strong> to fit in a <strong>32-bit</strong> integer.</li>
</ul>

<p>&nbsp;</p>
<p><strong>Follow up:</strong>&nbsp;Can you solve the problem in <code style="font-family: monospace, Bangla564, sans-serif;">O(1)&nbsp;</code>extra&nbsp;space complexity? (The output array <strong>does not</strong> count as extra space for space complexity analysis.)</p>
</div>