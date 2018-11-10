var nama=/^([a-z]{5,5})*_([A-Z]{2,6})$/i

function username(e){
var mengembalikannama=nama.test(e.value)
if (mengembalikannama==false){
alert("Masukkan Alamat Email yang Benar.")
e.select()
}
return mengembalikanemail
}


