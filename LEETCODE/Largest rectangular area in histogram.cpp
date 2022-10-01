//Largest Rectangular Area in Histogram using Stack
class Solution {
    public int largestRectangleArea(int[] heights) {
        if(heights == null || heights.length == 0) return 0;
        Stack<Integer> stack = new Stack<>();
        int len = heights.length;
        stack.push(heights[0]);
        int result = 0;
        int count = 0;
        for(int i = 1; i < len; i++){
            int add = heights[i];
            if(add >= stack.peek())
                stack.push(heights[i]);
            else{
                count = 0;
                while(!stack.isEmpty() && stack.peek() > add){
                    count++;
                    int val = stack.pop();
                    result = Math.max(result, val * count);
                }
                while(count != 0){
                    count--;
                    stack.push(add);
                }
                stack.push(add);
            }
        }
        count = 1;
        while(!stack.isEmpty()){
            int last = stack.pop();
            result = Math.max(result, last * count++);
        }
        return result;
    }
}