const fibb=(n,memo={})=>{
    if(memo[n])return memo[n];
    if(n<=2)return 1;
    memo[n]=fibb(n-1,memo)+fibb(n-2,memo);
    return memo[n];
}
console.log(fibb(6,memo={}));
console.log(fibb(500,memo={}));
//7778742049