<?php
/*
A utiliser avec l'option M117 après Simplify3D avec script de retouchage :
{REPLACE "; layer " "M117 INDICATOR-Layer"}
{REPLACE ", Z = " "\n; Z="}

A utiliser sans l'option M117 après Simplify3D avec script de retouchage :
{REPLACE ", Z = " "\n; Z="}
*/
parse_str(implode('&', array_slice($argv, 1)), $_GET);

if(isset($_GET['inputfile']) && isset($_GET['outputfile'])) {
	$inputfilename = $_GET['inputfile'];
	$outputfilename = $_GET['outputfile'];

	if(is_readable($inputfilename)) {
		$f = fopen($inputfilename, 'r');
		if (!$f) {
			echo "Impossible d'ouvrir le fichier ($inputfilename) en lecture";
			exit;
		}
		
		$fout = fopen($outputfilename, 'w');
		if (!$fout) {
			echo "Impossible d'ouvrir le fichier ($outputfilename) en ecriture";
			exit;
		}

		//Option M117 ?
		$optionM117 = FALSE;
		if(isset($_GET['M117'])) {
			$optionM117 = TRUE;
			$strsearch = 'M117 INDICATOR-Layer';
		} else {
			$strsearch = '; layer ';
		}
		
		while(!feof($f)) {
			$line = fgets($f);

			if(!strstr($line, 'postProcessing') && strstr($line, $strsearch)) {
				//On récupère le numéro après $strsearch
				$num = substr($line, -(strlen($line)-strlen($strsearch)));
				echo $num;
				
				if($optionM117) {
					//On ajout "M117 INDICATOR-Layerxx" après la ligne en cours
					$line = '; layer '.$num.$line;
				} else {
					//On ajout "; layer xx" avant la ligne en cours
					$line = $line . "M117 INDICATOR-Layer".$num;
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
	} else {
		echo 'Le fichier n\'est pas accessible en lecture !';
	}
} else {
	echo 'Syntaxe : php -f .\ChangeLayer.php inputfile=".\xxx.gcode" outputfile=".\xxx.gcode (M117)';	
}

