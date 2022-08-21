<h2><a href="https://leetcode.com/problems/container-with-most-water/">11. Container With Most Water</a></h2><h3>Medium</h3><hr><div><p>You are given an integer array <code style="font-family: monospace, Bangla661, sans-serif;">height</code> of length <code style="font-family: monospace, Bangla661, sans-serif;">n</code>. There are <code style="font-family: monospace, Bangla661, sans-serif;">n</code> vertical lines drawn such that the two endpoints of the <code style="font-family: monospace, Bangla661, sans-serif;">i<sup>th</sup></code> line are <code style="font-family: monospace, Bangla661, sans-serif;">(i, 0)</code> and <code style="font-family: monospace, Bangla661, sans-serif;">(i, height[i])</code>.</p>

<p>Find two lines that together with the x-axis form a container, such that the container contains the most water.</p>

<p>Return <em>the maximum amount of water a container can store</em>.</p>

<p><strong>Notice</strong> that you may not slant the container.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://s3-lc-upload.s3.amazonaws.com/uploads/2018/07/17/question_11.jpg" style="width: 600px; height: 287px;">
<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla661, sans-serif;"><strong>Input:</strong> height = [1,8,6,2,5,4,8,3,7]
<strong>Output:</strong> 49
<strong>Explanation:</strong> The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.
</pre>

<p><strong>Example 2:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla661, sans-serif;"><strong>Input:</strong> height = [1,1]
<strong>Output:</strong> 1
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="font-family: monospace, Bangla661, sans-serif;">n == height.length</code></li>
	<li><code style="font-family: monospace, Bangla661, sans-serif;">2 &lt;= n &lt;= 10<sup>5</sup></code></li>
	<li><code style="font-family: monospace, Bangla661, sans-serif;">0 &lt;= height[i] &lt;= 10<sup>4</sup></code></li>
</ul>
</div>