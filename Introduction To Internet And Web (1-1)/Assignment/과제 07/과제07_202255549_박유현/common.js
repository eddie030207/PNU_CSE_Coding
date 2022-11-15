function getLogin() {
    var id = document.getElementById("id").value;
    var password = document.getElementById("password").value;
    var idarr = ["kim", "lee", "park"];
    var passwordarr = ["123", "456", "789"];
    for (x = 0; x <= 2; x++) {
        if (id == idarr[x]) {
            if (password == passwordarr[x]) {
                location.href = "/welcome.html";
                return alert("Hello! 202255549 박유현!");
            } 
            else {
                return alert ("wrong password!");
            }
        }
    }
    return alert ("check your id again!");
}

