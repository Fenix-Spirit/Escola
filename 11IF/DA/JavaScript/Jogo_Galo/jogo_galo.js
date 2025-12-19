jogo=[99,99,99,99,99,99,99,99,99];
next_play="X";
let v1=0,v2=0,empate=0,t=0,count=0,over=false;
function escolha(obj,i){
	let vit1=document.getElementById("v_1");
	let vit2=document.getElementById("v_2");
	let emp=document.getElementById("emp");
	let total=document.getElementById("total");
	if(jogo[i]==99 && over==false){
		obj.innerHTML=next_play;
		count++
		if (next_play=="X"){
			jogo[i]=1;
			next_play="O";

		}
		else if(next_play=="O"){
			jogo[i]=5;
			next_play="X";
		}
		if(jogo[0]+jogo[1]+jogo[2]==3){
			v1++
			vit1.innerHTML=v1;
			t++
			total.innerHTML=t;
			over=true;
		}
		else if(jogo[0]+jogo[1]+jogo[2]==15){
			v2++
			vit2.innerHTML=v2;
			t++
			total.innerHTML=t;
			over=true;
		}

		else if(jogo[3]+jogo[4]+jogo[5]==3){
			v1++
			vit1.innerHTML=v1;
			t++
			total.innerHTML=t;
			over=true;
		}
		else if(jogo[3]+jogo[4]+jogo[5]==15){
			v2++
			vit2.innerHTML=v2;
			t++
			total.innerHTML=t;
			over=true;
		}

		else if(jogo[6]+jogo[7]+jogo[8]==3){
			v1++
			vit1.innerHTML=v1;
			t++
			total.innerHTML=t;
			over=true;
		}
		else if(jogo[6]+jogo[7]+jogo[8]==15){
			v2++
			vit2.innerHTML=v2;
			t++
			total.innerHTML=t;
			over=true;
		}

		else if(jogo[0]+jogo[3]+jogo[6]==3){
			v1++
			vit1.innerHTML=v1;
			t++
			total.innerHTML=t;
			over=true;
		}
		else if(jogo[0]+jogo[3]+jogo[6]==15){
			v2++
			vit2.innerHTML=v2;
			t++
			total.innerHTML=t;
			over=true;
		}

		else if(jogo[1]+jogo[4]+jogo[7]==3){
			v1++
			vit1.innerHTML=v1;
			t++
			total.innerHTML=t;
			over=true;
		}
		else if(jogo[1]+jogo[4]+jogo[7]==15){
			v2++
			vit2.innerHTML=v2;
			t++
			total.innerHTML=t;
			over=true;
		}

		else if(jogo[2]+jogo[5]+jogo[8]==3){
			v1++
			vit1.innerHTML=v1;
			t++
			total.innerHTML=t;
			over=true;
		}
		else if(jogo[2]+jogo[5]+jogo[8]==15){
			v2++
			vit2.innerHTML=v2;
			t++
			total.innerHTML=t;
			over=true;
		}

		else if(jogo[0]+jogo[4]+jogo[8]==3){
			v1++
			vit1.innerHTML=v1;
			t++
			total.innerHTML=t;
			over=true;
		}
		else if(jogo[0]+jogo[4]+jogo[8]==15){
			v2++
			vit2.innerHTML=v2;
			t++
			total.innerHTML=t;
			over=true;
		}

		else if(jogo[2]+jogo[4]+jogo[6]==3){
			v1++
			vit1.innerHTML=v1;
			t++
			total.innerHTML=t;
			over=true;
		}
		else if(jogo[2]+jogo[4]+jogo[6]==15){
			v2++
			vit2.innerHTML=v2;
			t++
			total.innerHTML=t;
			over=true;
		}

		else if (count>=9){
			over=true;
			empate++
			t++
			total.innerHTML=t;
			emp.innerHTML=empate;
		}
	}
	if (over==true){
		document.getElementById("btn_again").disabled=false;
	}
}
function playAgain(){
	document.getElementById("btn_again").disabled=true;
	jogo=[99,99,99,99,99,99,99,99,99];
	over=false;
	count=0;
	for(let k=1;k<10;k++){
		document.getElementById("slot_"+k).innerHTML=" "
	}
}