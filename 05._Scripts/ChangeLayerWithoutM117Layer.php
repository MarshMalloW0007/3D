<?php
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

		$strsearch = '; layer ';
		foreach ($lines as $line) {
			if(!strstr($line, 'postProcessing') && strstr($line, $strsearch)) {
				//On récupère le numéro après $strsearc
				//On ajout "M118 INDICATOR-Layerxx" après la ligne en cours
				$num = substr($line, -(strlen($line)-strlen($strsearch)));
				$line = $line . "M117 INDICATOR-Layer".$num;
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
	echo 'Syntaxe : php -f .\ChangeLayer.php inputfile=".\xxx.gcode" outputfile=".\xxx.gcode"';	
}



