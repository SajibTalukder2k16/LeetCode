<h2><a href="https://leetcode.com/problems/remove-linked-list-elements/">203. Remove Linked List Elements</a></h2><h3>Easy</h3><hr><div><p>Given the <code style="font-family: monospace, Bangla1024, sans-serif;">head</code> of a linked list and an integer <code style="font-family: monospace, Bangla1024, sans-serif;">val</code>, remove all the nodes of the linked list that has <code style="font-family: monospace, Bangla1024, sans-serif;">Node.val == val</code>, and return <em>the new head</em>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/03/06/removelinked-list.jpg" style="width: 500px; height: 142px;">
<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla1024, sans-serif;"><strong>Input:</strong> head = [1,2,6,3,4,5,6], val = 6
<strong>Output:</strong> [1,2,3,4,5]
</pre>

<p><strong>Example 2:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla1024, sans-serif;"><strong>Input:</strong> head = [], val = 1
<strong>Output:</strong> []
</pre>

<p><strong>Example 3:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla1024, sans-serif;"><strong>Input:</strong> head = [7,7,7,7], val = 7
<strong>Output:</strong> []
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in the list is in the range <code style="font-family: monospace, Bangla1024, sans-serif;">[0, 10<sup>4</sup>]</code>.</li>
	<li><code style="font-family: monospace, Bangla1024, sans-serif;">1 &lt;= Node.val &lt;= 50</code></li>
	<li><code style="font-family: monospace, Bangla1024, sans-serif;">0 &lt;= val &lt;= 50</code></li>
</ul>
</div>