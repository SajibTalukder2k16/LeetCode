<h2>  Calculate Special Bonus</h2><hr><div><p>Table: <code style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla946, sans-serif;">Employees</code></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla946, sans-serif;">+-------------+---------+
| Column Name | Type    |
+-------------+---------+
| employee_id | int     |
| name        | varchar |
| salary      | int     |
+-------------+---------+
employee_id is the primary key for this table.
Each row of this table indicates the employee ID, employee name, and salary.
</pre>

<p>&nbsp;</p>

<p>Write an SQL query to calculate the bonus of each employee. The bonus of an employee is <code style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla946, sans-serif;">100%</code> of their salary if the ID of the employee is <strong>an odd number</strong> and <strong>the employee name does not start with the character </strong><code style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla946, sans-serif;">'M'</code>. The bonus of an employee is <code style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla946, sans-serif;">0</code> otherwise.</p>

<p>Return the result table ordered by <code style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla946, sans-serif;">employee_id</code>.</p>

<p>The query result format is in the following example.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla946, sans-serif;"><strong>Input:</strong> 
Employees table:
+-------------+---------+--------+
| employee_id | name    | salary |
+-------------+---------+--------+
| 2           | Meir    | 3000   |
| 3           | Michael | 3800   |
| 7           | Addilyn | 7400   |
| 8           | Juan    | 6100   |
| 9           | Kannon  | 7700   |
+-------------+---------+--------+
<strong>Output:</strong> 
+-------------+-------+
| employee_id | bonus |
+-------------+-------+
| 2           | 0     |
| 3           | 0     |
| 7           | 7400  |
| 8           | 0     |
| 9           | 7700  |
+-------------+-------+
<strong>Explanation:</strong> 
The employees with IDs 2 and 8 get 0 bonus because they have an even employee_id.
The employee with ID 3 gets 0 bonus because their name starts with 'M'.
The rest of the employees get a 100% bonus.
</pre>
</div>