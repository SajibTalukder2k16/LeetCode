<h2><a href="https://leetcode.com/problems/flood-fill/">733. Flood Fill</a></h2><h3>Easy</h3><hr><div><p>An image is represented by an <code style="font-family: monospace, Bangla777, sans-serif;">m x n</code> integer grid <code style="font-family: monospace, Bangla777, sans-serif;">image</code> where <code style="font-family: monospace, Bangla777, sans-serif;">image[i][j]</code> represents the pixel value of the image.</p>

<p>You are also given three integers <code style="font-family: monospace, Bangla777, sans-serif;">sr</code>, <code style="font-family: monospace, Bangla777, sans-serif;">sc</code>, and <code style="font-family: monospace, Bangla777, sans-serif;">newColor</code>. You should perform a <strong>flood fill</strong> on the image starting from the pixel <code style="font-family: monospace, Bangla777, sans-serif;">image[sr][sc]</code>.</p>

<p>To perform a <strong>flood fill</strong>, consider the starting pixel, plus any pixels connected <strong>4-directionally</strong> to the starting pixel of the same color as the starting pixel, plus any pixels connected <strong>4-directionally</strong> to those pixels (also with the same color), and so on. Replace the color of all of the aforementioned pixels with <code style="font-family: monospace, Bangla777, sans-serif;">newColor</code>.</p>

<p>Return <em>the modified image after performing the flood fill</em>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/06/01/flood1-grid.jpg" style="width: 613px; height: 253px;">
<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla777, sans-serif;"><strong>Input:</strong> image = [[1,1,1],[1,1,0],[1,0,1]], sr = 1, sc = 1, newColor = 2
<strong>Output:</strong> [[2,2,2],[2,2,0],[2,0,1]]
<strong>Explanation:</strong> From the center of the image with position (sr, sc) = (1, 1) (i.e., the red pixel), all pixels connected by a path of the same color as the starting pixel (i.e., the blue pixels) are colored with the new color.
Note the bottom corner is not colored 2, because it is not 4-directionally connected to the starting pixel.
</pre>

<p><strong>Example 2:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla777, sans-serif;"><strong>Input:</strong> image = [[0,0,0],[0,0,0]], sr = 0, sc = 0, newColor = 2
<strong>Output:</strong> [[2,2,2],[2,2,2]]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="font-family: monospace, Bangla777, sans-serif;">m == image.length</code></li>
	<li><code style="font-family: monospace, Bangla777, sans-serif;">n == image[i].length</code></li>
	<li><code style="font-family: monospace, Bangla777, sans-serif;">1 &lt;= m, n &lt;= 50</code></li>
	<li><code style="font-family: monospace, Bangla777, sans-serif;">0 &lt;= image[i][j], newColor &lt; 2<sup>16</sup></code></li>
	<li><code style="font-family: monospace, Bangla777, sans-serif;">0 &lt;= sr &lt;&nbsp;m</code></li>
	<li><code style="font-family: monospace, Bangla777, sans-serif;">0 &lt;= sc &lt;&nbsp;n</code></li>
</ul>
</div>