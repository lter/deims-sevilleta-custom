
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
file in the same place you have the settings.php file. THat file has a database connector to the DEIMS D6 database.

After you enabled the Sevilleta module, a few new vocabularies will be created, these will correspond to vocabularies we used in the previous DEIMS version to categorize content. Here is the current list
1) the "downloads" - to classify files, 
2) the "categories" used to classify photos
3) "spatial data" to refine the GIS assets

The terms for these will be migrated by the corresponding migrations.

The terms for downloads, categories and spatial data could have been fitted in the "section" vocabulary, as this is meant to classify assets, but OK. We only merged the 'articles' vocab. into the section vocab, strictly speaking is as if we renamed the articles vocabulary into the 'section' vocabulary.

Before you do any migration, make sure your Sev. field customizations are appropriate,
namely, also, the field 'photo caption' is long text type and not just text. 


