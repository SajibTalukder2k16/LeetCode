<h2><a href="https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix/">1337. The K Weakest Rows in a Matrix</a></h2><h3>Easy</h3><hr><div><p>You are given an <code style="font-family: monospace, Bangla792, sans-serif;">m x n</code> binary matrix <code style="font-family: monospace, Bangla792, sans-serif;">mat</code> of <code style="font-family: monospace, Bangla792, sans-serif;">1</code>'s (representing soldiers) and <code style="font-family: monospace, Bangla792, sans-serif;">0</code>'s (representing civilians). The soldiers are positioned <strong>in front</strong> of the civilians. That is, all the <code style="font-family: monospace, Bangla792, sans-serif;">1</code>'s will appear to the <strong>left</strong> of all the <code style="font-family: monospace, Bangla792, sans-serif;">0</code>'s in each row.</p>

<p>A row <code style="font-family: monospace, Bangla792, sans-serif;">i</code> is <strong>weaker</strong> than a row <code style="font-family: monospace, Bangla792, sans-serif;">j</code> if one of the following is true:</p>

<ul>
	<li>The number of soldiers in row <code style="font-family: monospace, Bangla792, sans-serif;">i</code> is less than the number of soldiers in row <code style="font-family: monospace, Bangla792, sans-serif;">j</code>.</li>
	<li>Both rows have the same number of soldiers and <code style="font-family: monospace, Bangla792, sans-serif;">i &lt; j</code>.</li>
</ul>

<p>Return <em>the indices of the </em><code style="font-family: monospace, Bangla792, sans-serif;">k</code><em> <strong>weakest</strong> rows in the matrix ordered from weakest to strongest</em>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla792, sans-serif;"><strong>Input:</strong> mat = 
[[1,1,0,0,0],
 [1,1,1,1,0],
 [1,0,0,0,0],
 [1,1,0,0,0],
 [1,1,1,1,1]], 
k = 3
<strong>Output:</strong> [2,0,3]
<strong>Explanation:</strong> 
The number of soldiers in each row is: 
- Row 0: 2 
- Row 1: 4 
- Row 2: 1 
- Row 3: 2 
- Row 4: 5 
The rows ordered from weakest to strongest are [2,0,3,1,4].
</pre>

<p><strong>Example 2:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla792, sans-serif;"><strong>Input:</strong> mat = 
[[1,0,0,0],
 [1,1,1,1],
 [1,0,0,0],
 [1,0,0,0]], 
k = 2
<strong>Output:</strong> [0,2]
<strong>Explanation:</strong> 
The number of soldiers in each row is: 
- Row 0: 1 
- Row 1: 4 
- Row 2: 1 
- Row 3: 1 
The rows ordered from weakest to strongest are [0,2,3,1].
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="font-family: monospace, Bangla792, sans-serif;">m == mat.length</code></li>
	<li><code style="font-family: monospace, Bangla792, sans-serif;">n == mat[i].length</code></li>
	<li><code style="font-family: monospace, Bangla792, sans-serif;">2 &lt;= n, m &lt;= 100</code></li>
	<li><code style="font-family: monospace, Bangla792, sans-serif;">1 &lt;= k &lt;= m</code></li>
	<li><code style="font-family: monospace, Bangla792, sans-serif;">matrix[i][j]</code> is either 0 or 1.</li>
</ul>
</div>