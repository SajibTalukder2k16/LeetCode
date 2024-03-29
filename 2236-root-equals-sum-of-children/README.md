<h2><a href="https://leetcode.com/problems/root-equals-sum-of-children/">2236. Root Equals Sum of Children</a></h2><h3>Easy</h3><hr><div><p>You are given the <code style="font-family: monospace, Bangla544, sans-serif;">root</code> of a <strong>binary tree</strong> that consists of exactly <code style="font-family: monospace, Bangla544, sans-serif;">3</code> nodes: the root, its left child, and its right child.</p>

<p>Return <code style="font-family: monospace, Bangla544, sans-serif;">true</code> <em>if the value of the root is equal to the <strong>sum</strong> of the values of its two children, or </em><code style="font-family: monospace, Bangla544, sans-serif;">false</code><em> otherwise</em>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/04/08/graph3drawio.png" style="width: 281px; height: 199px;">
<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla544, sans-serif;"><strong>Input:</strong> root = [10,4,6]
<strong>Output:</strong> true
<strong>Explanation:</strong> The values of the root, its left child, and its right child are 10, 4, and 6, respectively.
10 is equal to 4 + 6, so we return true.
</pre>

<p><strong>Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/04/08/graph3drawio-1.png" style="width: 281px; height: 199px;">
<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla544, sans-serif;"><strong>Input:</strong> root = [5,3,1]
<strong>Output:</strong> false
<strong>Explanation:</strong> The values of the root, its left child, and its right child are 5, 3, and 1, respectively.
5 is not equal to 3 + 1, so we return false.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The tree consists only of the root, its left child, and its right child.</li>
	<li><code style="font-family: monospace, Bangla544, sans-serif;">-100 &lt;= Node.val &lt;= 100</code></li>
</ul>
</div>