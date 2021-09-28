const howSum=(target,numbers,memo={})=>{
    if(target in memo)return memo[target];
    if(target==0)return [];
    if(target<0)return null;

    for(var num of numbers){
        const remainder=target-num;
        const ans=howSum(remainder,numbers,memo);
        if(ans!==null){
            memo[target]=[...ans,num];
            return memo[target];
        }
    }
    memo[target]=null;
    return null;
}
console.log(howSum(9,[2,4]));
console.log(howSum(9,[2,3,4],memo={}));

//originl--->O(n^m*m)//O(m)
//now--->O(nm^2)//O(m^2);