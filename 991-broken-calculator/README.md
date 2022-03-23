<h2><a href="https://leetcode.com/problems/broken-calculator/">991. Broken Calculator</a></h2><h3>Medium</h3><hr><div><p>There is a broken calculator that has the integer <code style="font-family: monospace, Bangla158, sans-serif;">startValue</code> on its display initially. In one operation, you can:</p>

<ul>
	<li>multiply the number on display by <code style="font-family: monospace, Bangla158, sans-serif;">2</code>, or</li>
	<li>subtract <code style="font-family: monospace, Bangla158, sans-serif;">1</code> from the number on display.</li>
</ul>

<p>Given two integers <code style="font-family: monospace, Bangla158, sans-serif;">startValue</code> and <code style="font-family: monospace, Bangla158, sans-serif;">target</code>, return <em>the minimum number of operations needed to display </em><code style="font-family: monospace, Bangla158, sans-serif;">target</code><em> on the calculator</em>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla158, sans-serif;"><strong>Input:</strong> startValue = 2, target = 3
<strong>Output:</strong> 2
<strong>Explanation:</strong> Use double operation and then decrement operation {2 -&gt; 4 -&gt; 3}.
</pre>

<p><strong>Example 2:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla158, sans-serif;"><strong>Input:</strong> startValue = 5, target = 8
<strong>Output:</strong> 2
<strong>Explanation:</strong> Use decrement and then double {5 -&gt; 4 -&gt; 8}.
</pre>

<p><strong>Example 3:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla158, sans-serif;"><strong>Input:</strong> startValue = 3, target = 10
<strong>Output:</strong> 3
<strong>Explanation:</strong> Use double, decrement and double {3 -&gt; 6 -&gt; 5 -&gt; 10}.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="font-family: monospace, Bangla158, sans-serif;">1 &lt;= x, y &lt;= 10<sup>9</sup></code></li>
</ul>
</div>