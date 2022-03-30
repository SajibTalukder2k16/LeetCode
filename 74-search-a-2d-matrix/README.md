<h2><a href="https://leetcode.com/problems/search-a-2d-matrix/">74. Search a 2D Matrix</a></h2><h3>Medium</h3><hr><div><p>Write an efficient algorithm that searches for a value <code style="font-family: monospace, Bangla728, sans-serif;">target</code> in an <code style="font-family: monospace, Bangla728, sans-serif;">m x n</code> integer matrix <code style="font-family: monospace, Bangla728, sans-serif;">matrix</code>. This matrix has the following properties:</p>

<ul>
	<li>Integers in each row are sorted from left to right.</li>
	<li>The first integer of each row is greater than the last integer of the previous row.</li>
</ul>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/10/05/mat.jpg" style="width: 322px; height: 242px;">
<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla728, sans-serif;"><strong>Input:</strong> matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
<strong>Output:</strong> true
</pre>

<p><strong>Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/10/05/mat2.jpg" style="width: 322px; height: 242px;">
<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla728, sans-serif;"><strong>Input:</strong> matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
<strong>Output:</strong> false
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="font-family: monospace, Bangla728, sans-serif;">m == matrix.length</code></li>
	<li><code style="font-family: monospace, Bangla728, sans-serif;">n == matrix[i].length</code></li>
	<li><code style="font-family: monospace, Bangla728, sans-serif;">1 &lt;= m, n &lt;= 100</code></li>
	<li><code style="font-family: monospace, Bangla728, sans-serif;">-10<sup>4</sup> &lt;= matrix[i][j], target &lt;= 10<sup>4</sup></code></li>
</ul>
</div>