var friends = ["rahim", "karim", "abdul", "sadsd", "heroAlom"];
var ans = "";
var nameLen = friends[0].length;

for (const name of friends) {
    if (name.length > nameLen) {
        nameLen = name.length;
        ans = name;
    }
}

console.log(ans);