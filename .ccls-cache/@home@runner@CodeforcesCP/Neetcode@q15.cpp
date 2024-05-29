// // https://neetcode.io/problems/trapping-rain-water

// int l=0, r= height.size()-1;
// int leftmax = height[l], rightmax = height[r];

// int res =0 ;

// while(l < r){
//   if(leftmax < rightmax){
//     l++;
//     leftmax = max(leftmax, height[l]);
//     res += leftmax - height[l];
//   }
//   else{
//     r--;
//     rightmax = msx(rightmax, height[r]);
//     res += rightmax - height(r);
//   }
// }