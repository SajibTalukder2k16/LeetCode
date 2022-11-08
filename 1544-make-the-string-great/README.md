<h2><a href="https://leetcode.com/problems/make-the-string-great/">1544. Make The String Great</a></h2><h3>Easy</h3><hr><div><p>Given a string <code style="font-family: monospace, Bangla793, sans-serif;">s</code> of lower and upper case English letters.</p>

<p>A good string is a string which doesn't have <strong>two adjacent characters</strong> <code style="font-family: monospace, Bangla793, sans-serif;">s[i]</code> and <code style="font-family: monospace, Bangla793, sans-serif;">s[i + 1]</code> where:</p>

<ul>
	<li><code style="font-family: monospace, Bangla793, sans-serif;">0 &lt;= i &lt;= s.length - 2</code></li>
	<li><code style="font-family: monospace, Bangla793, sans-serif;">s[i]</code> is a lower-case letter and <code style="font-family: monospace, Bangla793, sans-serif;">s[i + 1]</code> is the same letter but in upper-case or <strong>vice-versa</strong>.</li>
</ul>

<p>To make the string good, you can choose <strong>two adjacent</strong> characters that make the string bad and remove them. You can keep doing this until the string becomes good.</p>

<p>Return <em>the string</em> after making it good. The answer is guaranteed to be unique under the given constraints.</p>

<p><strong>Notice</strong> that an empty string is also good.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla793, sans-serif;"><strong>Input:</strong> s = "leEeetcode"
<strong>Output:</strong> "leetcode"
<strong>Explanation:</strong> In the first step, either you choose i = 1 or i = 2, both will result "leEeetcode" to be reduced to "leetcode".
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla793, sans-serif;"><strong>Input:</strong> s = "abBAcC"
<strong>Output:</strong> ""
<strong>Explanation:</strong> We have many possible scenarios, and all lead to the same answer. For example:
"abBAcC" --&gt; "aAcC" --&gt; "cC" --&gt; ""
"abBAcC" --&gt; "abBA" --&gt; "aA" --&gt; ""
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla793, sans-serif;"><strong>Input:</strong> s = "s"
<strong>Output:</strong> "s"
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="font-family: monospace, Bangla793, sans-serif;">1 &lt;= s.length &lt;= 100</code></li>
	<li><code style="font-family: monospace, Bangla793, sans-serif;">s</code> contains only lower and upper case English letters.</li>
</ul>
</div>