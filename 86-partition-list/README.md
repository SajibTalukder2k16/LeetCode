<h2><a href="https://leetcode.com/problems/partition-list/">86. Partition List</a></h2><h3>Medium</h3><hr><div><p>Given the <code style="font-family: monospace, Bangla421, sans-serif;">head</code> of a linked list and a value <code style="font-family: monospace, Bangla421, sans-serif;">x</code>, partition it such that all nodes <strong>less than</strong> <code style="font-family: monospace, Bangla421, sans-serif;">x</code> come before nodes <strong>greater than or equal</strong> to <code style="font-family: monospace, Bangla421, sans-serif;">x</code>.</p>

<p>You should <strong>preserve</strong> the original relative order of the nodes in each of the two partitions.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/01/04/partition.jpg" style="width: 662px; height: 222px;">
<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla421, sans-serif;"><strong>Input:</strong> head = [1,4,3,2,5,2], x = 3
<strong>Output:</strong> [1,2,2,4,3,5]
</pre>

<p><strong>Example 2:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla421, sans-serif;"><strong>Input:</strong> head = [2,1], x = 2
<strong>Output:</strong> [1,2]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in the list is in the range <code style="font-family: monospace, Bangla421, sans-serif;">[0, 200]</code>.</li>
	<li><code style="font-family: monospace, Bangla421, sans-serif;">-100 &lt;= Node.val &lt;= 100</code></li>
	<li><code style="font-family: monospace, Bangla421, sans-serif;">-200 &lt;= x &lt;= 200</code></li>
</ul>
</div>