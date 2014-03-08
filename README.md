# DEIMS Sevilleta LTER Customizations #

Repo name : deims-sevilleta-custom
Description:  Customizations for the Sevilleta LTER DEIMS instance.

You will find a series of enhancements for the Sevilleta LTER in this repository,
including a module, some css script for your DEIMS Theme and a set of features, 
(like modules) to extend existing content types or create new ones.  

The module _sevilleta_ is used to ensure the Sevilleta-specific customizations are
migrated to DEIMS D7.  In this module, there is code that extends the DEIMS D6 
migration templates. The code also expands the DEIMS core infrastructure, adding
content types and vocabularies to accomodate Sevilleta LTER specific configurations.

## Instructions ##

Clone 
* `git clone --branch 7.x-1.x git@github.com:lter/deims-sevilleta-custom.git` 
into a place of your choice (current directory, Desktop, etc)

Or download this module from: 

* `https://github.com/lter/deims-sevilleta-custom/archive/7.x-1.x.zip`
Extract the contents in a local directory, you will copy the parts inside to different
places in your DEIMS install, as we explain now.

Once you have the repository locally, create a folder named _modules_ under your
DEIMS root _sites/default_ (unless you have already made it)

Under the _sites/default/modules_, create another folder named _sevilleta_ 

Copy the _sevilleta.*_ files you downloaded from github locally, into the _sevilleta_ 
folder you just created. Also, copy the _migration_ folder you downloaded from _github_
into the same _sevilleta_ folder. This module is necessary for your migrations.

Also, we need new content types for the sevilleta. In the local github download, you also
see a _features_ folder.  Inside, there are at least two folders that begin with the word
_sevilleta_, (for slides and spatial data).  Move these folders to the modules folder,
like this:

* `mv deims-sevilleta-custom/features DEIMSROOT/sites/default/modules/`

We are also extending some existing DEIMS content types. Lets override the existing ones.
We are replacing the original DEIMS profile features with the ones we downloaded, which
are inside the _features_ folder of this repo, and being with the word _deims_.

* `mv deims-sevilleta-custom/features/deims_research_project profiles/deims/modules/features`
similar move command (you can use cp -fr) for the deims Research Site feature.

Using your browser visit your modules admin page, something like this URL 
`http://example.com/admin/modules`

In that page, find and enable the new _sevilleta_ modules. Mark the checkbox to 
the side, and hit _Save_. 

If you prefer speed, use drush to enable the module(s). For example:
* `drush en sevilleta sevilleta_spatial_data`

Some other components are not installed by default using the method described below under the
_instructions_ section. Here are additional instructions for these other components.

### The Deims Theme CSS ###
Inside the _miscellaneous_ tree needs to be moved to the corresponding place in
your DEIMS install to warranty your slideshow functions correctly.  The Slideshow
will require you to install two additional modules, the 'views_slideshow' and the
'flexslider_views_slideshow'.

###  For the custom migrations to work ###
This applies to the DEIMS D6 migration and customizations. You need 
to have a _settings.local.php_ file in the same place you have the _settings.php_ file.
(that is, _sites/default_).

The _settings.local.php_ file has a database connector to the DEIMS D6 database. Here is
an example

* `<?php `
* ` $databases['drupal6']['default'] = array(`
* `  'database' => 'deims-drupal6-sevilleta',`
* `  'username' => 'deims-mysql-user',`
* `  'password' => 'deims-mysql-user-password',`
* `  'host' => 'localhost',`
* `  'port' => '',`
* `  'driver' => 'mysql',`
* `  'prefix' => '',`
* ` );`


For more documentation on this customizations visit the blogs at http://lno.lternet.edu/blog/6 
and look for DEIMS Migrations

For DEIMS help, visit the DEIMS project page at drupal.org, read the papers in databits.lternet.edu
or contact us.

Other notes on the migration:

The biblio nodes (the citations, references, publication list) are imported using the export/import
built-in the module.  Export the latest version in EndNote Tagged, and re-import that file.  Now,
the connections DataSet-Biblios, etc are lost.  You need to reconstruct them either painstaikingly,
or using some sort of sql query.  We now associate Authors with People using the new view, that solves
part of it.

The slideshow will require you to download two additional modules (views-slideshow and flexslider-views-
slideshow). In addition, visit the "blocks" admin page, and mode the Views-slideshow block to the header
area, perhaps configure to show only in the <front>.  

The order of the migration is important. In general, migrate first items with no dependencies, and 
finish with those types that have the most dependencies.  You want to migrate the Organizations and 
Taxonomies first, and then the Files.  Once the files are in, you can migrate all Stories, Books,
Image Galleries, Met Central, Articles, etc.  Migrate also Research Sites.  Leave Project and REUs 
for the end, as those depend on Data sets, that depend on Data Files.  
