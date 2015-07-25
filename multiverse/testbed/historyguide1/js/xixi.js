$(document).ready(function(){	
	$('#gallery').spacegallery({loadingClass: 'loading', perspective: 100});
	
	x = $('#gallery img:last').attr("class");
	$('#sub_col div.'+x).show();
	
	$('#gallery a').click(function(){
		$('#sub_col div').hide();
		x = $(this).prev('img').prev('img').attr("class");
		$('#sub_col div.'+x).fadeIn();
	});
	
	$(".external").click(function() {
		window.open( $(this).attr('href') );
		return false;
	})
});