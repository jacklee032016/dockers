#FROM centos:6.6
FROM nickcis/fedora-32
MAINTAINER Luciano Resende
USER root
ADD bootstrap.sh /etc/bootstrap.sh
RUN chown root:root /etc/bootstrap.sh
RUN chmod 700 /etc/bootstrap.sh
ENV BOOTSTRAP /etc/bootstrap.sh
CMD ["/etc/bootstrap.sh", "-bash"]
