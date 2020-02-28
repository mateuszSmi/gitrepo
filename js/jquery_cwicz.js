$(document).ready(function(){
  $(".wynik").text("Nowa treść");
  console.log($("p").text());
  $("#przycisk").click(function(){
    var vnk = parseInt($("#vnk").val());
    var nk = parseInt($("#nk").val());
    var R = vnk / nk * 100;
    var div2 = '<div class="wspolczynnik">'+R+'</div>';
    $("div.wynik").after(div2);
  });
  $("input").mouseover(function(){
    $(this).addClass("tloBlue");
  });
  $("input").mouseout(function(){
    $(this).removeClass("tloBlue");
  });
  $("#obraz1").dblclick(function(){
    $(this).hide();
  });
  $("#obraz2").mouseover(function(){
    $(this).hide();
  });
  $("#img1").mouseover(function(){
    $("#img2").hide(100);
  });
  $("#img1").mouseout(function(){
    $("#img2").show(100);
  });
  $("#img2").mouseover(function(){
    $("#img1").hide(100);
  });
  $("#img2").mouseout(function(){
    $("#img1").show(100);
  });
});
