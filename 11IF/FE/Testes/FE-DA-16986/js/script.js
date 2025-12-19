function calcularTempo(){
    let n_meses,texto_res=document.getElementById("txt_resultado"),objetivo=parseInt(document.getElementById("objetivo").value), valor_mensal=parseInt(document.getElementById("valor_mensal").value);
    let txt_meses=document.getElementById("meses");
    if (isNaN(objetivo) || isNaN(valor_mensal)) {
        alert("Os valores tem de ser números.");
    }
    else {
        if (objetivo%valor_mensal!=0){
            n_meses=parseInt(objetivo/valor_mensal)+1;
        }
        else {
            n_meses=parseInt(objetivo/valor_mensal);
        }
        if (n_meses<=6){
            document.getElementById("imagem_resultado").src="imagens/curto.png"
            document.getElementById("res").style.color= "green"
            texto_res.style.color= "green"
            txt_meses.style.color= "green"
            document.getElementById("resultado").style.boxShadow="rgba(0,255,0,0.5) 0 2px 4px";
        }
        else if (n_meses<24){
            document.getElementById("imagem_resultado").src="imagens/medio.png"
            document.getElementById("res").style.color="darkgoldenrod"
            texto_res.style.color= "darkgoldenrod"
            txt_meses.style.color= "darkgoldenrod"
            document.getElementById("resultado").style.boxShadow="rgba(204,204,0,0.5) 0 2px 4px";
        }
        else if (n_meses>24){
            document.getElementById("imagem_resultado").src="imagens/longo.png"
            document.getElementById("res").style.color= "red"
            texto_res.style.color= "red"
            txt_meses.style.color= "red"
            document.getElementById("resultado").style.boxShadow="rgba(153,0,0,0.5) 0 2px 4px";
        }
        document.getElementById("imagem_resultado").hidden=false;
        texto_res.innerHTML="O tempo necessário para atingir o objetivo de "+objetivo+"€ (objetivo) guardando "+valor_mensal+" por mês é de:";
        txt_meses.innerHTML=n_meses+" Meses";
    }
}