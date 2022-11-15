function order() {
alert("주문해 주셔서 감사합니다!");

var today = new Date();
var dateString = today.toLocaleDateString();
var timeString = today.toLocaleTimeString();
document.getElementById("date").innerHTML = dateString;
document.getElementById("time").innerHTML = timeString;


menutotal = ["totalJajang", "totalBob", "totalTang", "totalGun"];
menu = ["jajang", "bob", "tang", "gun"];
menuname = ["자장면", "볶음밥", "탕수육", "군만두"];
menuprice = [5000, 6000, 10000, 5000];
var address = document.getElementById("address").value;
var destination = document.getElementById("destination");
var answer = 0;
destination.innerHTML = address;

for(i=0; i<4; i++){
document.getElementById(menutotal[i]).innerHTML = `${menuname[i]} : ${document.getElementById(menu[i]).value}개`;
answer += document.getElementById(menu[i]).value * menuprice[i]
document.getElementById("price").innerHTML = `${answer}원`;
}
}

