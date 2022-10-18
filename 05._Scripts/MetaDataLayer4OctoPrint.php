<?php
/*
A utiliser après Simplify3D sans script de retouche.
Ajoute M117 INDICATOR-Layern
Ajoute M117 DASHBOARD_LAYER_INDICATOR n
Après la ligne ; layer 1, Z = 0.180
*/

const STRSEARCH = "; layer ";
const STRPRINTTIMEGENIUS = "M117 INDICATOR-Layer";
const STRDASHBOARD = "M117 DASHBOARD_LAYER_INDICATOR ";

parse_str(implode('&', array_slice($argv, 1)), $_GET);

if(isset($_GET['f'])) {
	$inputfilename = $_GET['f'];

	if(is_readable($inputfilename)) {
		$f = fopen($inputfilename, 'r');
		if (!$f) {
			echo "Impossible d'ouvrir le fichier ($inputfilename) en lecture";
			exit;
		}
		
		$outputfilename = "_" . $inputfilename;
		$fout = fopen($outputfilename, 'w');
		if (!$fout) {
			echo "Impossible d'ouvrir le fichier ($outputfilename) en écriture";
			exit;
		}
	
		while(!feof($f)) {
			$line = fgets($f);
			// Traitement des lignes avec layer
			if(!strstr($line, 'postProcessing') && strpos($line, STRSEARCH) !== false) {
				if(($pos = strpos($line, ',')) !== false) {
					//On récupère le numéro après STRSEARCH
					$num = substr($line, strlen(STRSEARCH), $pos-strlen(STRSEARCH));
					$line = $line . STRPRINTTIMEGENIUS . $num . "\n" . STRDASHBOARD . $num . "\n";
				}
			}

			if(fwrite($fout, $line) === FALSE) {
				echo "Impossible d'écrire dans le fichier ($outputfilename)";
				fclose($fout);
				fclose($f);
				exit;
			}

		}
		fclose($fout);
		fclose($f);
		rename($inputfilename, 'OLD_'.$inputfilename);
		rename($outputfilename, $inputfilename);
	} else {
		echo "Le fichier $inputfilename n'est pas accessible en lecture !";
	}
} else {
	echo 'Syntaxe : php MetaDataLayer4OctoPrint.php f="xxx.gcode"';	
}
