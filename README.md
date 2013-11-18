
deims-sevilleta-custom
======================

The module Sevilleta is used to ensure the Sevilleta-specific customizations are
migrated to DEIMS D7.  Here are the code that extends the DEIMS D6 migration templates.

Create a folder named "modules" under sites/default.

Now, under this folder, create another folder named "sevilleta" - you see now a 
folder sevilleta under sites/default/modules in your DEIMS install.

Download this module from: 

https://github.com/lter/deims-sevilleta-custom/archive/7.x-1.x.zip

Extract the contents, and copy the contents of the "zip" file into the 'sevilleta' folder 
we just created.

Now visit your 'admin/modules' screen and enable the new "sevilleta" module. For this
(and the DEIMS D6 migration) to work, remember you need to have a  settings.local.php 
file in the same place you have the settings.php file.

THat file has a database connector to the DEIMS D6 database.

Before you do any migration, make sure your Sev. field customizations are appropriate,
namely, the 'photo caption' is long text, and any other things.
