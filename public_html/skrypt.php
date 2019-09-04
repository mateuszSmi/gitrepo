<?php
	include('funkcje.php');
	$imie = "Anna";
	$nazwisko = "Kowalska";
	$wiek = 20;
?>

<h1>
<?php
	echo "Witaj! $imie $nazwisko ";
	echo 'Wiek: '.$wiek.' lat<br><br>';
	zrob_link('http://lo1.sandomierz.pl', 'Strona I LO');
	$link = zrob_link('http://lo1.sandomierz.pl', 'Strona I LO', 0);
	echo '<br>'.$link;
	echo '<br>'.$dane['imie'];
?>
</h1>