class Solution(object):
    def constructRectangle(self, area):
        """
        :type area: int
        :rtype: List[int]
        """
        sqrt_area = int(math.sqrt(area))
        for i in range(sqrt_area, 0, -1):
         if area % i == 0:
            return [area // i, i]
