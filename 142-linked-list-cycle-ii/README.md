<h2><a href="https://leetcode.com/problems/linked-list-cycle-ii/">142. Linked List Cycle II</a></h2><h3>Medium</h3><hr><div><p>Given the <code style="font-family: monospace, Bangla887, sans-serif;">head</code> of a linked list, return <em>the node where the cycle begins. If there is no cycle, return </em><code style="font-family: monospace, Bangla887, sans-serif;">null</code>.</p>

<p>There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the <code style="font-family: monospace, Bangla887, sans-serif;">next</code> pointer. Internally, <code style="font-family: monospace, Bangla887, sans-serif;">pos</code> is used to denote the index of the node that tail's <code style="font-family: monospace, Bangla887, sans-serif;">next</code> pointer is connected to (<strong>0-indexed</strong>). It is <code style="font-family: monospace, Bangla887, sans-serif;">-1</code> if there is no cycle. <strong>Note that</strong> <code style="font-family: monospace, Bangla887, sans-serif;">pos</code> <strong>is not passed as a parameter</strong>.</p>

<p><strong>Do not modify</strong> the linked list.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2018/12/07/circularlinkedlist.png" style="height: 145px; width: 450px;">
<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla887, sans-serif;"><strong>Input:</strong> head = [3,2,0,-4], pos = 1
<strong>Output:</strong> tail connects to node index 1
<strong>Explanation:</strong> There is a cycle in the linked list, where tail connects to the second node.
</pre>

<p><strong>Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2018/12/07/circularlinkedlist_test2.png" style="height: 105px; width: 201px;">
<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla887, sans-serif;"><strong>Input:</strong> head = [1,2], pos = 0
<strong>Output:</strong> tail connects to node index 0
<strong>Explanation:</strong> There is a cycle in the linked list, where tail connects to the first node.
</pre>

<p><strong>Example 3:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2018/12/07/circularlinkedlist_test3.png" style="height: 65px; width: 65px;">
<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla887, sans-serif;"><strong>Input:</strong> head = [1], pos = -1
<strong>Output:</strong> no cycle
<strong>Explanation:</strong> There is no cycle in the linked list.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of the nodes in the list is in the range <code style="font-family: monospace, Bangla887, sans-serif;">[0, 10<sup>4</sup>]</code>.</li>
	<li><code style="font-family: monospace, Bangla887, sans-serif;">-10<sup>5</sup> &lt;= Node.val &lt;= 10<sup>5</sup></code></li>
	<li><code style="font-family: monospace, Bangla887, sans-serif;">pos</code> is <code style="font-family: monospace, Bangla887, sans-serif;">-1</code> or a <strong>valid index</strong> in the linked-list.</li>
</ul>

<p>&nbsp;</p>
<p><strong>Follow up:</strong> Can you solve it using <code style="font-family: monospace, Bangla887, sans-serif;">O(1)</code> (i.e. constant) memory?</p>
</div>