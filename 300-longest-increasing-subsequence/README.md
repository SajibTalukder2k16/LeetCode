<h2><a href="https://leetcode.com/problems/longest-increasing-subsequence/">300. Longest Increasing Subsequence</a></h2><h3>Medium</h3><hr><div><p>Given an integer array <code style="font-family: monospace, Bangla388, sans-serif;">nums</code>, return the length of the longest strictly increasing subsequence.</p>

<p>A <strong>subsequence</strong> is a sequence that can be derived from an array by deleting some or no elements without changing the order of the remaining elements. For example, <code style="font-family: monospace, Bangla388, sans-serif;">[3,6,2,7]</code> is a subsequence of the array <code style="font-family: monospace, Bangla388, sans-serif;">[0,3,1,6,2,2,7]</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla388, sans-serif;"><strong>Input:</strong> nums = [10,9,2,5,3,7,101,18]
<strong>Output:</strong> 4
<strong>Explanation:</strong> The longest increasing subsequence is [2,3,7,101], therefore the length is 4.
</pre>

<p><strong>Example 2:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla388, sans-serif;"><strong>Input:</strong> nums = [0,1,0,3,2,3]
<strong>Output:</strong> 4
</pre>

<p><strong>Example 3:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla388, sans-serif;"><strong>Input:</strong> nums = [7,7,7,7,7,7,7]
<strong>Output:</strong> 1
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="font-family: monospace, Bangla388, sans-serif;">1 &lt;= nums.length &lt;= 2500</code></li>
	<li><code style="font-family: monospace, Bangla388, sans-serif;">-10<sup>4</sup> &lt;= nums[i] &lt;= 10<sup>4</sup></code></li>
</ul>

<p>&nbsp;</p>
<p><b>Follow up:</b>&nbsp;Can you come up with an algorithm that runs in&nbsp;<code style="font-family: monospace, Bangla388, sans-serif;">O(n log(n))</code> time complexity?</p>
</div>