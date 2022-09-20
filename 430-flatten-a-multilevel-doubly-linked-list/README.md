<h2><a href="https://leetcode.com/problems/flatten-a-multilevel-doubly-linked-list/">430. Flatten a Multilevel Doubly Linked List</a></h2><h3>Medium</h3><hr><div><p>You are given a doubly linked list, which contains nodes that have a next pointer, a previous pointer, and an additional <strong>child pointer</strong>. This child pointer may or may not point to a separate doubly linked list, also containing these special nodes. These child lists may have one or more children of their own, and so on, to produce a <strong>multilevel data structure</strong> as shown in the example below.</p>

<p>Given the <code style="font-family: monospace, Bangla732, sans-serif;">head</code> of the first level of the list, <strong>flatten</strong> the list so that all the nodes appear in a single-level, doubly linked list. Let <code style="font-family: monospace, Bangla732, sans-serif;">curr</code> be a node with a child list. The nodes in the child list should appear <strong>after</strong> <code style="font-family: monospace, Bangla732, sans-serif;">curr</code> and <strong>before</strong> <code style="font-family: monospace, Bangla732, sans-serif;">curr.next</code> in the flattened list.</p>

<p>Return <em>the </em><code style="font-family: monospace, Bangla732, sans-serif;">head</code><em> of the flattened list. The nodes in the list must have <strong>all</strong> of their child pointers set to </em><code style="font-family: monospace, Bangla732, sans-serif;">null</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/11/09/flatten11.jpg" style="width: 700px; height: 339px;">
<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla732, sans-serif;"><strong>Input:</strong> head = [1,2,3,4,5,6,null,null,null,7,8,9,10,null,null,11,12]
<strong>Output:</strong> [1,2,3,7,8,11,12,9,10,4,5,6]
<strong>Explanation:</strong> The multilevel linked list in the input is shown.
After flattening the multilevel linked list it becomes:
<img src="https://assets.leetcode.com/uploads/2021/11/09/flatten12.jpg" style="width: 1000px; height: 69px;">
</pre>

<p><strong>Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/11/09/flatten2.1jpg" style="width: 200px; height: 200px;">
<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla732, sans-serif;"><strong>Input:</strong> head = [1,2,null,3]
<strong>Output:</strong> [1,3,2]
<strong>Explanation:</strong> The multilevel linked list in the input is shown.
After flattening the multilevel linked list it becomes:
<img src="https://assets.leetcode.com/uploads/2021/11/24/list.jpg" style="width: 300px; height: 87px;">
</pre>

<p><strong>Example 3:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla732, sans-serif;"><strong>Input:</strong> head = []
<strong>Output:</strong> []
<strong>Explanation:</strong> There could be empty list in the input.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of Nodes will not exceed <code style="font-family: monospace, Bangla732, sans-serif;">1000</code>.</li>
	<li><code style="font-family: monospace, Bangla732, sans-serif;">1 &lt;= Node.val &lt;= 10<sup>5</sup></code></li>
</ul>

<p>&nbsp;</p>
<p><strong>How the multilevel linked list is represented in test cases:</strong></p>

<p>We use the multilevel linked list from <strong>Example 1</strong> above:</p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla732, sans-serif;"> 1---2---3---4---5---6--NULL
         |
         7---8---9---10--NULL
             |
             11--12--NULL</pre>

<p>The serialization of each level is as follows:</p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla732, sans-serif;">[1,2,3,4,5,6,null]
[7,8,9,10,null]
[11,12,null]
</pre>

<p>To serialize all levels together, we will add nulls in each level to signify no node connects to the upper node of the previous level. The serialization becomes:</p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla732, sans-serif;">[1,    2,    3, 4, 5, 6, null]
             |
[null, null, 7,    8, 9, 10, null]
                   |
[            null, 11, 12, null]
</pre>

<p>Merging the serialization of each level and removing trailing nulls we obtain:</p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla732, sans-serif;">[1,2,3,4,5,6,null,null,null,7,8,9,10,null,null,11,12]
</pre>
</div>