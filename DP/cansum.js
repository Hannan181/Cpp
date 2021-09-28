const cansum=(targetSum,numbers,memo={})=>{
    if(targetSum in memo)return memo[targetSum];
    if(targetSum==0)return true;
    if(targetSum<0)return false;

    for(var num of numbers){
        const remainder=targetSum-num;
        if(cansum(remainder,numbers,memo)===true){
            memo[targetSum]=true;
            return true;
        }
    }
    memo[targetSum]=false;
    return false;
}
console.log(cansum(14,[7,2,3],memo={}));
console.log(cansum(739,[7],memo={}));
console.log(cansum(9,[3],memo={}));

//Earlier--->O(n power m)////O(m)
//now--->O(m)//O(m)