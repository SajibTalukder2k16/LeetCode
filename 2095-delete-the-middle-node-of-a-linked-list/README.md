<h2><a href="https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/">2095. Delete the Middle Node of a Linked List</a></h2><h3>Medium</h3><hr><div><p>You are given the <code style="font-family: monospace, Bangla845, sans-serif;">head</code> of a linked list. <strong>Delete</strong> the <strong>middle node</strong>, and return <em>the</em> <code style="font-family: monospace, Bangla845, sans-serif;">head</code> <em>of the modified linked list</em>.</p>

<p>The <strong>middle node</strong> of a linked list of size <code style="font-family: monospace, Bangla845, sans-serif;">n</code> is the <code style="font-family: monospace, Bangla845, sans-serif;">⌊n / 2⌋<sup>th</sup></code> node from the <b>start</b> using <strong>0-based indexing</strong>, where <code style="font-family: monospace, Bangla845, sans-serif;">⌊x⌋</code> denotes the largest integer less than or equal to <code style="font-family: monospace, Bangla845, sans-serif;">x</code>.</p>

<ul>
	<li>For <code style="font-family: monospace, Bangla845, sans-serif;">n</code> = <code style="font-family: monospace, Bangla845, sans-serif;">1</code>, <code style="font-family: monospace, Bangla845, sans-serif;">2</code>, <code style="font-family: monospace, Bangla845, sans-serif;">3</code>, <code style="font-family: monospace, Bangla845, sans-serif;">4</code>, and <code style="font-family: monospace, Bangla845, sans-serif;">5</code>, the middle nodes are <code style="font-family: monospace, Bangla845, sans-serif;">0</code>, <code style="font-family: monospace, Bangla845, sans-serif;">1</code>, <code style="font-family: monospace, Bangla845, sans-serif;">1</code>, <code style="font-family: monospace, Bangla845, sans-serif;">2</code>, and <code style="font-family: monospace, Bangla845, sans-serif;">2</code>, respectively.</li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/11/16/eg1drawio.png" style="width: 500px; height: 77px;">
<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla845, sans-serif;"><strong>Input:</strong> head = [1,3,4,7,1,2,6]
<strong>Output:</strong> [1,3,4,1,2,6]
<strong>Explanation:</strong>
The above figure represents the given linked list. The indices of the nodes are written below.
Since n = 7, node 3 with value 7 is the middle node, which is marked in red.
We return the new list after removing this node. 
</pre>

<p><strong class="example">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/11/16/eg2drawio.png" style="width: 250px; height: 43px;">
<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla845, sans-serif;"><strong>Input:</strong> head = [1,2,3,4]
<strong>Output:</strong> [1,2,4]
<strong>Explanation:</strong>
The above figure represents the given linked list.
For n = 4, node 2 with value 3 is the middle node, which is marked in red.
</pre>

<p><strong class="example">Example 3:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/11/16/eg3drawio.png" style="width: 150px; height: 58px;">
<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla845, sans-serif;"><strong>Input:</strong> head = [2,1]
<strong>Output:</strong> [2]
<strong>Explanation:</strong>
The above figure represents the given linked list.
For n = 2, node 1 with value 1 is the middle node, which is marked in red.
Node 0 with value 2 is the only node remaining after removing node 1.</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in the list is in the range <code style="font-family: monospace, Bangla845, sans-serif;">[1, 10<sup>5</sup>]</code>.</li>
	<li><code style="font-family: monospace, Bangla845, sans-serif;">1 &lt;= Node.val &lt;= 10<sup>5</sup></code></li>
</ul>
</div>