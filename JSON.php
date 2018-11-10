<?php

$myObject-> itemld = "12341822";
$myObject-> itemName = "basic t-shirt";
$myObject-> price = 70000;
$myObject-> availableColorAndSize= array( 'red' => "S,M,L",
								'solid black' => "M,L");
$myObject-> freeShiping = FALSE;

function myJSON(){
		return json_encode($myObject);
				}
echo myJSON();

?>
