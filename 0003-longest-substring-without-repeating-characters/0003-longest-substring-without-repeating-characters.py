class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        start = 0
        maxlen = 0

        hashed = {}

        for i, char in enumerate(s):
            if char in hashed and start <= hashed[char]:
                start = hashed[char] + 1
            else:
                maxlen = max(maxlen, i - start + 1)
            hashed[char] = i
        return maxlen
