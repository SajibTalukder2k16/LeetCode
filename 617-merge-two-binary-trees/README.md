<h2><a href="https://leetcode.com/problems/merge-two-binary-trees/">617. Merge Two Binary Trees</a></h2><h3>Easy</h3><hr><div><p>You are given two binary trees <code style="font-family: monospace, Bangla458, sans-serif;">root1</code> and <code style="font-family: monospace, Bangla458, sans-serif;">root2</code>.</p>

<p>Imagine that when you put one of them to cover the other, some nodes of the two trees are overlapped while the others are not. You need to merge the two trees into a new binary tree. The merge rule is that if two nodes overlap, then sum node values up as the new value of the merged node. Otherwise, the NOT null node will be used as the node of the new tree.</p>

<p>Return <em>the merged tree</em>.</p>

<p><strong>Note:</strong> The merging process must start from the root nodes of both trees.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/02/05/merge.jpg" style="width: 600px; height: 163px;">
<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla458, sans-serif;"><strong>Input:</strong> root1 = [1,3,2,5], root2 = [2,1,3,null,4,null,7]
<strong>Output:</strong> [3,4,5,5,4,null,7]
</pre>

<p><strong>Example 2:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla458, sans-serif;"><strong>Input:</strong> root1 = [1], root2 = [1,2]
<strong>Output:</strong> [2,2]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in both trees is in the range <code style="font-family: monospace, Bangla458, sans-serif;">[0, 2000]</code>.</li>
	<li><code style="font-family: monospace, Bangla458, sans-serif;">-10<sup>4</sup> &lt;= Node.val &lt;= 10<sup>4</sup></code></li>
</ul>
</div>