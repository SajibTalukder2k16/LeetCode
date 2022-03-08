<h2><a href="https://leetcode.com/problems/max-area-of-island/">695. Max Area of Island</a></h2><h3>Medium</h3><hr><div><p>You are given an <code style="font-family: monospace, Bangla919, sans-serif;">m x n</code> binary matrix <code style="font-family: monospace, Bangla919, sans-serif;">grid</code>. An island is a group of <code style="font-family: monospace, Bangla919, sans-serif;">1</code>'s (representing land) connected <strong>4-directionally</strong> (horizontal or vertical.) You may assume all four edges of the grid are surrounded by water.</p>

<p>The <strong>area</strong> of an island is the number of cells with a value <code style="font-family: monospace, Bangla919, sans-serif;">1</code> in the island.</p>

<p>Return <em>the maximum <strong>area</strong> of an island in </em><code style="font-family: monospace, Bangla919, sans-serif;">grid</code>. If there is no island, return <code style="font-family: monospace, Bangla919, sans-serif;">0</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/05/01/maxarea1-grid.jpg" style="width: 500px; height: 310px;">
<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla919, sans-serif;"><strong>Input:</strong> grid = [[0,0,1,0,0,0,0,1,0,0,0,0,0],[0,0,0,0,0,0,0,1,1,1,0,0,0],[0,1,1,0,1,0,0,0,0,0,0,0,0],[0,1,0,0,1,1,0,0,1,0,1,0,0],[0,1,0,0,1,1,0,0,1,1,1,0,0],[0,0,0,0,0,0,0,0,0,0,1,0,0],[0,0,0,0,0,0,0,1,1,1,0,0,0],[0,0,0,0,0,0,0,1,1,0,0,0,0]]
<strong>Output:</strong> 6
<strong>Explanation:</strong> The answer is not 11, because the island must be connected 4-directionally.
</pre>

<p><strong>Example 2:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla919, sans-serif;"><strong>Input:</strong> grid = [[0,0,0,0,0,0,0,0]]
<strong>Output:</strong> 0
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="font-family: monospace, Bangla919, sans-serif;">m == grid.length</code></li>
	<li><code style="font-family: monospace, Bangla919, sans-serif;">n == grid[i].length</code></li>
	<li><code style="font-family: monospace, Bangla919, sans-serif;">1 &lt;= m, n &lt;= 50</code></li>
	<li><code style="font-family: monospace, Bangla919, sans-serif;">grid[i][j]</code> is either <code style="font-family: monospace, Bangla919, sans-serif;">0</code> or <code style="font-family: monospace, Bangla919, sans-serif;">1</code>.</li>
</ul>
</div>