<h2>  N-th Tribonacci Number</h2><hr><div><p>The Tribonacci sequence T<sub>n</sub> is defined as follows:&nbsp;</p>

<p>T<sub>0</sub> = 0, T<sub>1</sub> = 1, T<sub>2</sub> = 1, and T<sub>n+3</sub> = T<sub>n</sub> + T<sub>n+1</sub> + T<sub>n+2</sub> for n &gt;= 0.</p>

<p>Given <code style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla935, sans-serif;">n</code>, return the value of T<sub>n</sub>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla935, sans-serif;"><strong>Input:</strong> n = 4
<strong>Output:</strong> 4
<strong>Explanation:</strong>
T_3 = 0 + 1 + 1 = 2
T_4 = 1 + 1 + 2 = 4
</pre>

<p><strong>Example 2:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla935, sans-serif;"><strong>Input:</strong> n = 25
<strong>Output:</strong> 1389537
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla935, sans-serif;">0 &lt;= n &lt;= 37</code></li>
	<li>The answer is guaranteed to fit within a 32-bit integer, ie. <code style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla935, sans-serif;">answer &lt;= 2^31 - 1</code>.</li>
</ul></div>