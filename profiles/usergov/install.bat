@echo Reseting IIS...
@iisreset
@cd C:\inetpub\myweb
@IF EXIST sites/default/settings.php @ATTRIB -R sites/default/settings.php
@drush -y si usergov --db-url=mysql://app_user:Password1234@localhost:3306/myweb --account-name=admin --account-mail=meloks@yahoo.com --account-pass=Password1234 --site-mail="admin@company.com" --site-name="UserGov" install_configure_form.site_default_country=GB install_configure_form.date_default_timezone="Europe/London"