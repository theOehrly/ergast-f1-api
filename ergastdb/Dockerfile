FROM mysql:8.2

RUN sed -i -e"s/^bind-address\s*=\s*127.0.0.1/bind-address=0.0.0.0/" /etc/my.cnf

#ADD data/f1db.sql.gz /docker-entrypoint-initdb.d/f1db.sql.gz

RUN curl -s -o /docker-entrypoint-initdb.d/f1db.sql.gz http://ergast.com/downloads/f1db.sql.gz
RUN gunzip /docker-entrypoint-initdb.d/f1db.sql.gz

RUN echo -e "[client]\n"\
            "default-character-set = utf8\n\n"\
            "[mysql]\n"\
            "default-character-set = utf8\n\n"\
            "[mysqld]\n"\
            "collation-server = utf8_unicode_ci\n"\
            "character-set-server = utf8\n"\
            "default_authentication_plugin = mysql_native_password\n" >> /etc/my.cnf
