// // https://neetcode.io/problems/max-water-container

// int left = 0;
// int right = heights.size() -1;

// int curr =0;
// int result =0;

// while(left < result){
//   curr = (right -left) * min(heights[left], heights[r]);
//   result = max(curr, result);
//   if(heights[left] == heights[right]){
//     left++;
//   }
//   else{
//     right++;
//   }
// }
