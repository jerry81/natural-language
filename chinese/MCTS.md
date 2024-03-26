# 探索与利用

探索与利用正好有个数学公式， 我们自己不需要发明， 别人已经帮我们算好了
这个公式被称为 “上限置信区间算法”  Upper confidence bound
wi/ni + ( c * sqrt(ln t / ni) )

wi - 赢得数量
ni - i次移动后仿真的次数

so wi/ni is basically win percentage
wi/ni 代表节点胜率


c 参数 - 可调节， c 越大， 我们🈷越偏好探索
t 是总仿真次数

加号后是偏向探索
加号前是偏好利用