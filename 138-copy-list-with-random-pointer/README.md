<h2><a href="https://leetcode.com/problems/copy-list-with-random-pointer/">138. Copy List with Random Pointer</a></h2><h3>Medium</h3><hr><div><p>A linked list of length <code style="font-family: monospace, Bangla1035, sans-serif;">n</code> is given such that each node contains an additional random pointer, which could point to any node in the list, or <code style="font-family: monospace, Bangla1035, sans-serif;">null</code>.</p>

<p>Construct a <a href="https://en.wikipedia.org/wiki/Object_copying#Deep_copy" target="_blank"><strong>deep copy</strong></a> of the list. The deep copy should consist of exactly <code style="font-family: monospace, Bangla1035, sans-serif;">n</code> <strong>brand new</strong> nodes, where each new node has its value set to the value of its corresponding original node. Both the <code style="font-family: monospace, Bangla1035, sans-serif;">next</code> and <code style="font-family: monospace, Bangla1035, sans-serif;">random</code> pointer of the new nodes should point to new nodes in the copied list such that the pointers in the original list and copied list represent the same list state. <strong>None of the pointers in the new list should point to nodes in the original list</strong>.</p>

<p>For example, if there are two nodes <code style="font-family: monospace, Bangla1035, sans-serif;">X</code> and <code style="font-family: monospace, Bangla1035, sans-serif;">Y</code> in the original list, where <code style="font-family: monospace, Bangla1035, sans-serif;">X.random --&gt; Y</code>, then for the corresponding two nodes <code style="font-family: monospace, Bangla1035, sans-serif;">x</code> and <code style="font-family: monospace, Bangla1035, sans-serif;">y</code> in the copied list, <code style="font-family: monospace, Bangla1035, sans-serif;">x.random --&gt; y</code>.</p>

<p>Return <em>the head of the copied linked list</em>.</p>

<p>The linked list is represented in the input/output as a list of <code style="font-family: monospace, Bangla1035, sans-serif;">n</code> nodes. Each node is represented as a pair of <code style="font-family: monospace, Bangla1035, sans-serif;">[val, random_index]</code> where:</p>

<ul>
	<li><code style="font-family: monospace, Bangla1035, sans-serif;">val</code>: an integer representing <code style="font-family: monospace, Bangla1035, sans-serif;">Node.val</code></li>
	<li><code style="font-family: monospace, Bangla1035, sans-serif;">random_index</code>: the index of the node (range from <code style="font-family: monospace, Bangla1035, sans-serif;">0</code> to <code style="font-family: monospace, Bangla1035, sans-serif;">n-1</code>) that the <code style="font-family: monospace, Bangla1035, sans-serif;">random</code> pointer points to, or <code style="font-family: monospace, Bangla1035, sans-serif;">null</code> if it does not point to any node.</li>
</ul>

<p>Your code will <strong>only</strong> be given the <code style="font-family: monospace, Bangla1035, sans-serif;">head</code> of the original linked list.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/12/18/e1.png" style="width: 700px; height: 142px;">
<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla1035, sans-serif;"><strong>Input:</strong> head = [[7,null],[13,0],[11,4],[10,2],[1,0]]
<strong>Output:</strong> [[7,null],[13,0],[11,4],[10,2],[1,0]]
</pre>

<p><strong>Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/12/18/e2.png" style="width: 700px; height: 114px;">
<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla1035, sans-serif;"><strong>Input:</strong> head = [[1,1],[2,1]]
<strong>Output:</strong> [[1,1],[2,1]]
</pre>

<p><strong>Example 3:</strong></p>

<p><strong><img alt="" src="https://assets.leetcode.com/uploads/2019/12/18/e3.png" style="width: 700px; height: 122px;"></strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla1035, sans-serif;"><strong>Input:</strong> head = [[3,null],[3,0],[3,null]]
<strong>Output:</strong> [[3,null],[3,0],[3,null]]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="font-family: monospace, Bangla1035, sans-serif;">0 &lt;= n &lt;= 1000</code></li>
	<li><code style="font-family: monospace, Bangla1035, sans-serif;">-10<sup>4</sup> &lt;= Node.val &lt;= 10<sup>4</sup></code></li>
	<li><code style="font-family: monospace, Bangla1035, sans-serif;">Node.random</code> is <code style="font-family: monospace, Bangla1035, sans-serif;">null</code> or is pointing to some node in the linked list.</li>
</ul>
</div>