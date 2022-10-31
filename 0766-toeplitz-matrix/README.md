<h2><a href="https://leetcode.com/problems/toeplitz-matrix/">766. Toeplitz Matrix</a></h2><h3>Easy</h3><hr><div><p>Given an <code style="font-family: monospace, Bangla646, sans-serif;">m x n</code> <code style="font-family: monospace, Bangla646, sans-serif;">matrix</code>, return&nbsp;<em><code style="font-family: monospace, Bangla646, sans-serif;">true</code>&nbsp;if the matrix is Toeplitz. Otherwise, return <code style="font-family: monospace, Bangla646, sans-serif;">false</code>.</em></p>

<p>A matrix is <strong>Toeplitz</strong> if every diagonal from top-left to bottom-right has the same elements.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/11/04/ex1.jpg" style="width: 322px; height: 242px;">
<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla646, sans-serif;"><strong>Input:</strong> matrix = [[1,2,3,4],[5,1,2,3],[9,5,1,2]]
<strong>Output:</strong> true
<strong>Explanation:</strong>
In the above grid, the&nbsp;diagonals are:
"[9]", "[5, 5]", "[1, 1, 1]", "[2, 2, 2]", "[3, 3]", "[4]".
In each diagonal all elements are the same, so the answer is True.
</pre>

<p><strong class="example">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/11/04/ex2.jpg" style="width: 162px; height: 162px;">
<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla646, sans-serif;"><strong>Input:</strong> matrix = [[1,2],[2,2]]
<strong>Output:</strong> false
<strong>Explanation:</strong>
The diagonal "[1, 2]" has different elements.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="font-family: monospace, Bangla646, sans-serif;">m == matrix.length</code></li>
	<li><code style="font-family: monospace, Bangla646, sans-serif;">n == matrix[i].length</code></li>
	<li><code style="font-family: monospace, Bangla646, sans-serif;">1 &lt;= m, n &lt;= 20</code></li>
	<li><code style="font-family: monospace, Bangla646, sans-serif;">0 &lt;= matrix[i][j] &lt;= 99</code></li>
</ul>

<p>&nbsp;</p>
<p><strong>Follow up:</strong></p>

<ul>
	<li>What if the <code style="font-family: monospace, Bangla646, sans-serif;">matrix</code> is stored on disk, and the memory is limited such that you can only load at most one row of the matrix into the memory at once?</li>
	<li>What if the <code style="font-family: monospace, Bangla646, sans-serif;">matrix</code> is so large that you can only load up a partial row into the memory at once?</li>
</ul>
</div>