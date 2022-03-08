<h2><a href="https://leetcode.com/problems/rotting-oranges/">994. Rotting Oranges</a></h2><h3>Medium</h3><hr><div><p>You are given an <code style="font-family: monospace, Bangla143, sans-serif;">m x n</code> <code style="font-family: monospace, Bangla143, sans-serif;">grid</code> where each cell can have one of three values:</p>

<ul>
	<li><code style="font-family: monospace, Bangla143, sans-serif;">0</code> representing an empty cell,</li>
	<li><code style="font-family: monospace, Bangla143, sans-serif;">1</code> representing a fresh orange, or</li>
	<li><code style="font-family: monospace, Bangla143, sans-serif;">2</code> representing a rotten orange.</li>
</ul>

<p>Every minute, any fresh orange that is <strong>4-directionally adjacent</strong> to a rotten orange becomes rotten.</p>

<p>Return <em>the minimum number of minutes that must elapse until no cell has a fresh orange</em>. If <em>this is impossible, return</em> <code style="font-family: monospace, Bangla143, sans-serif;">-1</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/02/16/oranges.png" style="width: 650px; height: 137px;">
<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla143, sans-serif;"><strong>Input:</strong> grid = [[2,1,1],[1,1,0],[0,1,1]]
<strong>Output:</strong> 4
</pre>

<p><strong>Example 2:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla143, sans-serif;"><strong>Input:</strong> grid = [[2,1,1],[0,1,1],[1,0,1]]
<strong>Output:</strong> -1
<strong>Explanation:</strong> The orange in the bottom left corner (row 2, column 0) is never rotten, because rotting only happens 4-directionally.
</pre>

<p><strong>Example 3:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla143, sans-serif;"><strong>Input:</strong> grid = [[0,2]]
<strong>Output:</strong> 0
<strong>Explanation:</strong> Since there are already no fresh oranges at minute 0, the answer is just 0.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="font-family: monospace, Bangla143, sans-serif;">m == grid.length</code></li>
	<li><code style="font-family: monospace, Bangla143, sans-serif;">n == grid[i].length</code></li>
	<li><code style="font-family: monospace, Bangla143, sans-serif;">1 &lt;= m, n &lt;= 10</code></li>
	<li><code style="font-family: monospace, Bangla143, sans-serif;">grid[i][j]</code> is <code style="font-family: monospace, Bangla143, sans-serif;">0</code>, <code style="font-family: monospace, Bangla143, sans-serif;">1</code>, or <code style="font-family: monospace, Bangla143, sans-serif;">2</code>.</li>
</ul>
</div>