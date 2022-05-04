# Leetcode

## LinkedList
| Problem                               | Difficulty | Solved |note|
|---------------------------------------|------------|--------|-----|
| Linked List Cycle                     | Easy       |  2022/4/25      | nextのアドレスを記録して同じアドレスが出てくるとループと判定した。別解でfast(p->next->next)とslow(p->next)というポインタが一致するかどうか探索するスマートな方法もあった。|
| Linked List Cycle II                  | Medium     |  2022/4/25 ||
| Remove Duplicates from Sorted List    | Easy       |  2022/4/27 | LinkedListの操作をする練習問題|
| Remove Duplicates from Sorted List II | Medium     |  2022/4/28 | 答えを見た。少し複雑なリスト操作だった|
| Add Two Numbers                       | Medium     |        ||

## Stack

| Problem             | Difficulty | Solved |note|
|---------------------|------------|--------|-----|
| Valid Parentheses   | Easy       |  2022/4/23     | 括弧が対応しているかをスタックを使ってチェックする問題|
| Reverse Linked List | Easy       |   2022/4/24   | LinkedListのポインタ操作の復習みたいな問題。お絵かきしないと解きにくい。|

## Heap,PriorityQueue

| Problem                         | Difficulty | Solved |note|
|---------------------------------|------------|--------|-----|
| Kth Largest Element in a Stream | Easy       |  2022/4/20    | priority_queueを使う練習にちょうどいい。|
| Top K Frequent Elements         | Medium     |  2022/4/21      |mapをpriority_queueに再構成|
| Find K Pairs with Smallest Sums | Medium     |        | いいところまで行くがTimeOutで解けてない|


## HashMap

set/mapを使うと良い問題。
sort済みで格納される問題がないなら、unordered_set/unordered_mapを使った方が早い。

| Problem                            | Difficulty | Solved | note |
|------------------------------------|------------|--------|-------|
| Two Sum                            | Easy       |  2022/4/17    |純粋に解くとO(n^2)だが、ハッシュを使うとO(n)に。|
| Group Anagrams                     | Medium     |  2022/4/17    |ハッシュのバリューにvector<vector<int>>を使うと良い。|
| Intersection of Two Arrays         | Easy       |   2022/4/17   |setではなくunordered_setを使った方が10ms早い。|
| Unique Email Addresses             | Easy       |  2022/4/17   | stringのfind/substr/eraseを駆使する問題|
| First Unique Character in a String | Easy       |  2022/4/18     | mapのvectorで各文字のインデックスを保存する方式で解いた|
| Subarray Sum Equals K              | Medium     |  2022/4/19   | 累積和を使う問題。難しい。[Qiita](https://qiita.com/drken/items/56a6b68edef8fc605821)に累積和解説あり。|


## Graph, BFS, DFS


| Problem                            | Difficulty | Solved | note |
|------------------------------------|------------|--------|-------|
|Number of Islands|medium|2022/4/28| DFSの基本問題。定期的に忘れてしまう・・・。|
|Max Area of Island|medium|2022/4/28| DFSの基本問題。エリア数の最大値を求める。|
|Number of Connected Components in an Undirected Graph||||
|Word Ladder||||

## Tree, BST

| Problem                            | Difficulty | Solved | note |
|------------------------------------|------------|--------|-------|
|Minimum Depth of Binary Tree|easy|2022/4/29|BFSの基本問題だけど自力で解けず|
|Merge Two Binary Trees|easy|2022/4/30|わかれば簡単だけど解けなかった。|
|Convert Sorted Array to Binary Search Tree|easy|2022/5/1|解法を暗記する価値がありそう、初見は厳しいが良い技|œ
|Path Sum|easy|2022/5/1|解法を暗記する価値がありそう、初見は厳しいが良い技|
|Binary Tree Level Order Traversal|medium|2022/5/2|queueを使って幅優先をする基本問題|
|Binary Tree Zigzag Level Order Traversal|medium|2022/5/2|queueを使って幅優先をする問題。偶数レベル、奇数レベルを判定する。|
|Validate Binary Search Tree|||解けてない。INT_MIN, INT_MAXの値ばかりが使われるケースが回避できない・・・|
|Construct Binary Tree from Preorder and Inorder Traversal||||

## DP

| Problem                            | Difficulty | Solved | note |
|------------------------------------|------------|--------|-------|
|Paint Fence||||
|Longest Increasing Subsequence|medium|2022/5/4| 最長増加部分列問題。有名なアルゴリズムだけど、知らないと厳しい。蟻本P.65|
|Maximum Subarray|medium|2022/5/4| 部分和を２つの変数で持つ。自力では難しい。|
|Unique Paths||||
|Unique Paths II||||
|House Robber||||
|House Robber II||||
|Best Time to Buy and Sell Stock||||
|Best Time to Buy and Sell Stock II||||
|Word Break||||
|Coin Change||||

## Binary Search

| Problem                            | Difficulty | Solved | note |
|------------------------------------|------------|--------|-------|
|Search Insert Position||||
|Find Minimum in Rotated Sorted Array||||
|Search in Rotated Sorted Array||||
|Capacity To Ship Packages Within D Days||||

## Recusion

| Problem                            | Difficulty | Solved | note |
|------------------------------------|------------|--------|-------|
|Pow(x, n)||||
|K-th Symbol in Grammar||||
|Split BST||||

## SlidingWindow

| Problem                            | Difficulty | Solved | note |
|------------------------------------|------------|--------|-------|
|Longest Substring Without Repeating Characters||||
|Minimum Size Subarray Sum||||

## Greedy + Backtracking

| Problem                            | Difficulty | Solved | note |
|------------------------------------|------------|--------|-------|
|Permutations||||
|Subsets||||
|Combination Sum||||
|Generate Parentheses||||

## Others
| Problem                            | Difficulty | Solved | note |
|------------------------------------|------------|--------|-------|
|Move Zeroes||||
|Meeting Rooms||||
|Meeting Rooms II||||
|Is Subsequence||||
|Next Permutation||||
|String to Integer (atoi)||||
|ZigZag Conversion||||