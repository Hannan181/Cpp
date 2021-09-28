const bestSum=(target,numbers,memo={})=>{
    if(target in memo)return memo[target];
    if(target==0)return [];
    if(target<0)return null;
    
    let shortestcomb=null;
    for(var num of numbers){
        var rem=target-num;
       const ans= bestSum(rem,numbers,memo);
       if(ans!=null){
        const comb=[...ans,num];
        if(shortestcomb==null||shortestcomb.length>comb.length){
            shortestcomb=comb;
        }
       }
    }
    memo[target]=shortestcomb;
    return shortestcomb;
}
console.log(bestSum(7,[2,3,1]));
console.log(bestSum(306,[2,5,8,9,10]));
//original--->(n^m*m)
//O(m^2*n)


