FROM ubuntu/nginx

WORKDIR /home/nginx

COPY ./nginx.conf /etc/nginx/nginx.conf
COPY ./run.sh .

# USER nginx

# RUN chown -R nginx:nginx /home/nginx && chmod -R 755 /home/nginx && \
#     chown -R nginx:nginx /var/cache/nginx && \
#     chown -R nginx:nginx /var/log/nginx && \
#     chown -R nginx:nginx /etc/nginx/conf.d && \
#     chown -R nginx:nginx /var/lib/dpkg && \
#     touch /var/run/nginx.pid && \
#     chown -R nginx:nginx /var/run/nginx.pid

RUN apt-get update && \
    apt-get install -y gcc libfcgi-dev spawn-fcgi && \
    rm -rf /var/lib/apt/lists/* && \
    chmod +x ./run.sh

ENTRYPOINT ["sh", "-c", "./run.sh"]
