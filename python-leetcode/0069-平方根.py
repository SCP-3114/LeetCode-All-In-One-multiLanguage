class Solution:
    def mySqrt(self, x: int) -> int:
        if x == 0:
            return 0
        
        # 初始猜测值，可以从 x 开始，也可以从 x/2 开始
        C = x
        x0 = x
        
        while True:
            # 迭代公式：xi = (x0 + C/x0) / 2
            # 这里使用整数除法 // 2
            xi = (x0 + C // x0) // 2
            
            # 如果迭代不再变化，说明已经找到整数解
            if xi >= x0:
                return x0
            
            x0 = xi
