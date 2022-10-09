<?php
/*
Pour module 
A utiliser après Simplify3D avec script de retopuchage suivant :
{REPLACE "; layer " "M117 INDICATOR-Layer"}
{REPLACE ", Z = " "\n; Z="}
*/
parse_str(implode('&', array_slice($argv, 1)), $_GET);

/*
$f = fopen($filename, 'r');

if ($f) {
    $contents = fread($f, filesize($filename));
    fclose($f);
    echo nl2br($contents);
}
*/

if(isset($_GET['inputfile']) && isset($_GET['outputfile'])) {
	$inputfilename = $_GET['inputfile'];

	if(is_readable($inputfilename)) {
		$f = fopen($inputfilename, 'r');
		
		if (!$f) {
			echo "Impossible d'ouvrir le fichier ($inputfilename)";
			exit;
		}
		
		$lines = [];
		while (!feof($f)) {
			$lines[] = fgets($f);
		}
		fclose($f);

		$outputfilename = $_GET['outputfile'];

		$f = fopen($outputfilename, 'w');
		if (!$f) {
			echo "Impossible d'ouvrir le fichier ($outputfilename)";
			exit;
		}

		$strsearch = 'M117 INDICATOR-Layer';
		foreach ($lines as $line) {
			if(!strstr($line, 'postProcessing') && strstr($line, $strsearch)) {
				//On récupère le numéro après $strsearch
				//On ajout "; layer xx" avant la ligne en cours
				$num = substr($line, -(strlen($line)-strlen($strsearch)));
				$line = '; layer '.$num.$line;
			}
		
			if (fwrite($f, $line) === FALSE) {
				echo "Impossible d'écrire dans le fichier ($outputfilename)";
			exit;
			}
		}
		fclose($f);
	

	} else {
		echo 'Le fichier n\'est pas accessible en lecture !';
	}
	
} else {
	echo 'Syntaxe : php -f .\ChangeLayer.php inputfile=".\xxx.gcode" outputfile=".\xxx.gcode';	
}



