<h2><a href="https://leetcode.com/problems/maximum-length-of-pair-chain/">646. Maximum Length of Pair Chain</a></h2><h3>Medium</h3><hr><div><p>You are given an array of <code style="font-family: monospace, Bangla530, sans-serif;">n</code> pairs <code style="font-family: monospace, Bangla530, sans-serif;">pairs</code> where <code style="font-family: monospace, Bangla530, sans-serif;">pairs[i] = [left<sub>i</sub>, right<sub>i</sub>]</code> and <code style="font-family: monospace, Bangla530, sans-serif;">left<sub>i</sub> &lt; right<sub>i</sub></code>.</p>

<p>A pair <code style="font-family: monospace, Bangla530, sans-serif;">p2 = [c, d]</code> <strong>follows</strong> a pair <code style="font-family: monospace, Bangla530, sans-serif;">p1 = [a, b]</code> if <code style="font-family: monospace, Bangla530, sans-serif;">b &lt; c</code>. A <strong>chain</strong> of pairs can be formed in this fashion.</p>

<p>Return <em>the length longest chain which can be formed</em>.</p>

<p>You do not need to use up all the given intervals. You can select pairs in any order.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla530, sans-serif;"><strong>Input:</strong> pairs = [[1,2],[2,3],[3,4]]
<strong>Output:</strong> 2
<strong>Explanation:</strong> The longest chain is [1,2] -&gt; [3,4].
</pre>

<p><strong>Example 2:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla530, sans-serif;"><strong>Input:</strong> pairs = [[1,2],[7,8],[4,5]]
<strong>Output:</strong> 3
<strong>Explanation:</strong> The longest chain is [1,2] -&gt; [4,5] -&gt; [7,8].
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="font-family: monospace, Bangla530, sans-serif;">n == pairs.length</code></li>
	<li><code style="font-family: monospace, Bangla530, sans-serif;">1 &lt;= n &lt;= 1000</code></li>
	<li><code style="font-family: monospace, Bangla530, sans-serif;">-1000 &lt;= left<sub>i</sub> &lt; right<sub>i</sub> &lt;= 1000</code></li>
</ul>
</div>