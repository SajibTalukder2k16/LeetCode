<h2><a href="https://leetcode.com/problems/construct-string-from-binary-tree/">606. Construct String from Binary Tree</a></h2><h3>Easy</h3><hr><div><p>Given the <code style="font-family: monospace, Bangla463, sans-serif;">root</code> of a binary tree, construct a string consisting of parenthesis and integers from a binary tree with the preorder traversal way, and return it.</p>

<p>Omit all the empty parenthesis pairs that do not affect the one-to-one mapping relationship between the string and the original binary tree.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/05/03/cons1-tree.jpg" style="width: 292px; height: 301px;">
<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla463, sans-serif;"><strong>Input:</strong> root = [1,2,3,4]
<strong>Output:</strong> "1(2(4))(3)"
<strong>Explanation:</strong> Originally, it needs to be "1(2(4)())(3()())", but you need to omit all the unnecessary empty parenthesis pairs. And it will be "1(2(4))(3)"
</pre>

<p><strong>Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/05/03/cons2-tree.jpg" style="width: 207px; height: 293px;">
<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla463, sans-serif;"><strong>Input:</strong> root = [1,2,3,null,4]
<strong>Output:</strong> "1(2()(4))(3)"
<strong>Explanation:</strong> Almost the same as the first example, except we cannot omit the first parenthesis pair to break the one-to-one mapping relationship between the input and the output.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in the tree is in the range <code style="font-family: monospace, Bangla463, sans-serif;">[1, 10<sup>4</sup>]</code>.</li>
	<li><code style="font-family: monospace, Bangla463, sans-serif;">-1000 &lt;= Node.val &lt;= 1000</code></li>
</ul>
</div>