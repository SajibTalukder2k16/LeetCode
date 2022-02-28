<h2><a href="https://leetcode.com/problems/summary-ranges/">228. Summary Ranges</a></h2><h3>Easy</h3><hr><div><p>You are given a <strong>sorted unique</strong> integer array <code style="font-family: monospace, Bangla501, sans-serif;">nums</code>.</p>

<p>Return <em>the <strong>smallest sorted</strong> list of ranges that <strong>cover all the numbers in the array exactly</strong></em>. That is, each element of <code style="font-family: monospace, Bangla501, sans-serif;">nums</code> is covered by exactly one of the ranges, and there is no integer <code style="font-family: monospace, Bangla501, sans-serif;">x</code> such that <code style="font-family: monospace, Bangla501, sans-serif;">x</code> is in one of the ranges but not in <code style="font-family: monospace, Bangla501, sans-serif;">nums</code>.</p>

<p>Each range <code style="font-family: monospace, Bangla501, sans-serif;">[a,b]</code> in the list should be output as:</p>

<ul>
	<li><code style="font-family: monospace, Bangla501, sans-serif;">"a-&gt;b"</code> if <code style="font-family: monospace, Bangla501, sans-serif;">a != b</code></li>
	<li><code style="font-family: monospace, Bangla501, sans-serif;">"a"</code> if <code style="font-family: monospace, Bangla501, sans-serif;">a == b</code></li>
</ul>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla501, sans-serif;"><strong>Input:</strong> nums = [0,1,2,4,5,7]
<strong>Output:</strong> ["0-&gt;2","4-&gt;5","7"]
<strong>Explanation:</strong> The ranges are:
[0,2] --&gt; "0-&gt;2"
[4,5] --&gt; "4-&gt;5"
[7,7] --&gt; "7"
</pre>

<p><strong>Example 2:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla501, sans-serif;"><strong>Input:</strong> nums = [0,2,3,4,6,8,9]
<strong>Output:</strong> ["0","2-&gt;4","6","8-&gt;9"]
<strong>Explanation:</strong> The ranges are:
[0,0] --&gt; "0"
[2,4] --&gt; "2-&gt;4"
[6,6] --&gt; "6"
[8,9] --&gt; "8-&gt;9"
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="font-family: monospace, Bangla501, sans-serif;">0 &lt;= nums.length &lt;= 20</code></li>
	<li><code style="font-family: monospace, Bangla501, sans-serif;">-2<sup>31</sup> &lt;= nums[i] &lt;= 2<sup>31</sup> - 1</code></li>
	<li>All the values of <code style="font-family: monospace, Bangla501, sans-serif;">nums</code> are <strong>unique</strong>.</li>
	<li><code style="font-family: monospace, Bangla501, sans-serif;">nums</code> is sorted in ascending order.</li>
</ul>
</div>